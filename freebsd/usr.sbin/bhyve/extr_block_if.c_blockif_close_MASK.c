
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blockif_ctxt {scalar_t__ bc_magic; int bc_closing; int bc_fd; int * bc_btid; int bc_cond; int bc_mtx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct blockif_ctxt*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct blockif_ctxt *VAR_2)
{
 void *VAR_3;
 int VAR_4;

 FUNC_0(VAR_2->bc_magic == VAR_1);




 FUNC_5(&VAR_2->bc_mtx);
 VAR_2->bc_closing = 1;
 FUNC_6(&VAR_2->bc_mtx);
 FUNC_3(&VAR_2->bc_cond);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_4(VAR_2->bc_btid[VAR_4], &VAR_3);






 VAR_2->bc_magic = 0;
 FUNC_1(VAR_2->bc_fd);
 FUNC_2(VAR_2);

 return (0);
}
