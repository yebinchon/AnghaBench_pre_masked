
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blockif_req {int dummy; } ;
struct blockif_ctxt {int bc_mtx; int bc_cond; int bc_freeq; } ;
typedef enum blockop { ____Placeholder_blockop } blockop ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct blockif_ctxt*,struct blockif_req*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct blockif_ctxt *VAR_1, struct blockif_req *VAR_2,
  enum blockop VAR_3)
{
 int VAR_4;

 VAR_4 = 0;

 FUNC_3(&VAR_1->bc_mtx);
 if (!FUNC_0(&VAR_1->bc_freeq)) {




  if (FUNC_1(VAR_1, VAR_2, VAR_3))
   FUNC_2(&VAR_1->bc_cond);
 } else {






  VAR_4 = VAR_0;
 }
 FUNC_4(&VAR_1->bc_mtx);

 return (VAR_4);
}
