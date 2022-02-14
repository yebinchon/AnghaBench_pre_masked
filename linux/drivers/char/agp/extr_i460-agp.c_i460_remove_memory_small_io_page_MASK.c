
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_memory {int page_count; } ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,struct agp_memory*,int,int) ;

__attribute__((used)) static int FUNC_3(struct agp_memory *VAR_1,
    off_t VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_2("i460_remove_memory_small_io_page(mem=%p, pg_start=%ld, type=%d)\n",
   VAR_1, VAR_2, VAR_3);

 VAR_2 = VAR_0 * VAR_2;

 for (VAR_4 = VAR_2; VAR_4 < (VAR_2 + VAR_0 * VAR_1->page_count); VAR_4++)
  FUNC_1(VAR_4, 0);
 FUNC_0(VAR_4 - 1);
 return 0;
}
