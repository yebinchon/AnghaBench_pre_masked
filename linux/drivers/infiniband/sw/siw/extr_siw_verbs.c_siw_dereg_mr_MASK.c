
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_mr {int mem; } ;
struct siw_device {int num_mr; } ;
struct ib_udata {int dummy; } ;
struct ib_mr {int device; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct siw_mr*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct siw_mr*) ;
 struct siw_device* FUNC_4 (int ) ;
 struct siw_mr* FUNC_5 (struct ib_mr*) ;

int FUNC_6(struct ib_mr *VAR_1, struct ib_udata *VAR_2)
{
 struct siw_mr *VAR_3 = FUNC_5(VAR_1);
 struct siw_device *VAR_4 = FUNC_4(VAR_1->device);

 FUNC_2(VAR_3->mem, "deregister MR\n");

 FUNC_0(&VAR_4->num_mr);

 FUNC_3(VAR_3);
 FUNC_1(VAR_3, VAR_0);

 return 0;
}
