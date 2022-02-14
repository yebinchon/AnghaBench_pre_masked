
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blockif_req {int dummy; } ;
struct blockif_ctxt {scalar_t__ bc_magic; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct blockif_ctxt*,struct blockif_req*,int ) ;

int
FUNC_2(struct blockif_ctxt *VAR_2, struct blockif_req *VAR_3)
{

 FUNC_0(VAR_2->bc_magic == VAR_0);
 return (FUNC_1(VAR_2, VAR_3, VAR_1));
}
