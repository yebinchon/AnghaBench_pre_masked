
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int b_pgbefore; int b_npages; int b_pgafter; int * b_vp; int ** b_pages; int b_caller1; int (* b_pgiodone ) (int ,int **,int,int) ;} ;


 int FUNC_0 (struct buf*) ;
 int FUNC_1 (int ,int **,int,int) ;
 int FUNC_2 (int ,struct buf*) ;
 int FUNC_3 (struct buf*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct buf *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_1);

 VAR_1->b_pgiodone(VAR_1->b_caller1, VAR_1->b_pages + VAR_1->b_pgbefore,
     VAR_1->b_npages - VAR_1->b_pgbefore - VAR_1->b_pgafter, VAR_2);
 for (int VAR_3 = 0; VAR_3 < VAR_1->b_npages; VAR_3++)
  VAR_1->b_pages[VAR_3] = ((void*)0);
 VAR_1->b_vp = ((void*)0);
 FUNC_0(VAR_1);
 FUNC_2(VAR_0, VAR_1);
}
