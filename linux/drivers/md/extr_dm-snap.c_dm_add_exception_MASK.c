
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_snapshot {int complete; } ;
struct dm_exception_table_lock {int dummy; } ;
struct dm_exception {void* new_chunk; void* old_chunk; } ;
typedef void* chunk_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct dm_exception* FUNC_0 (int ) ;
 int FUNC_1 (struct dm_exception_table_lock*) ;
 int FUNC_2 (struct dm_snapshot*,void*,struct dm_exception_table_lock*) ;
 int FUNC_3 (struct dm_exception_table_lock*) ;
 int FUNC_4 (int *,struct dm_exception*) ;

__attribute__((used)) static int FUNC_5(void *VAR_2, chunk_t VAR_3, chunk_t VAR_4)
{
 struct dm_exception_table_lock VAR_5;
 struct dm_snapshot *VAR_6 = VAR_2;
 struct dm_exception *VAR_7;

 VAR_7 = FUNC_0(VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->old_chunk = VAR_3;


 VAR_7->new_chunk = VAR_4;







 FUNC_2(VAR_6, VAR_3, &VAR_5);

 FUNC_1(&VAR_5);
 FUNC_4(&VAR_6->complete, VAR_7);
 FUNC_3(&VAR_5);

 return 0;
}
