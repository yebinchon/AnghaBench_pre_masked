
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore {int current_committed; int exceptions_per_area; int area; int current_area; } ;
struct dm_exception_store {int dummy; } ;
struct core_exception {int old_chunk; int new_chunk; } ;
typedef int chunk_t ;


 int VAR_0 ;
 int FUNC_0 (struct pstore*,int ,int ) ;
 struct pstore* FUNC_1 (struct dm_exception_store*) ;
 int FUNC_2 (struct pstore*,int ,int,struct core_exception*) ;

__attribute__((used)) static int FUNC_3(struct dm_exception_store *VAR_1,
        chunk_t *VAR_2,
        chunk_t *VAR_3)
{
 struct pstore *VAR_4 = FUNC_1(VAR_1);
 struct core_exception VAR_5;
 int VAR_6;
 int VAR_7;




 if (!VAR_4->current_committed) {



  if (!VAR_4->current_area)
   return 0;

  VAR_4->current_area--;
  VAR_7 = FUNC_0(VAR_4, VAR_0, 0);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_4->current_committed = VAR_4->exceptions_per_area;
 }

 FUNC_2(VAR_4, VAR_4->area, VAR_4->current_committed - 1, &VAR_5);
 *VAR_2 = VAR_5.old_chunk;
 *VAR_3 = VAR_5.new_chunk;





 for (VAR_6 = 1; VAR_6 < VAR_4->current_committed;
      VAR_6++) {
  FUNC_2(VAR_4, VAR_4->area,
          VAR_4->current_committed - 1 - VAR_6, &VAR_5);
  if (VAR_5.old_chunk != *VAR_2 - VAR_6 ||
      VAR_5.new_chunk != *VAR_3 - VAR_6)
   break;
 }

 return VAR_6;
}
