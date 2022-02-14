
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_device {int num_pd; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_pd*,char*) ;
 struct siw_device* FUNC_2 (int ) ;

void FUNC_3(struct ib_pd *VAR_0, struct ib_udata *VAR_1)
{
 struct siw_device *VAR_2 = FUNC_2(VAR_0->device);

 FUNC_1(VAR_0, "free PD\n");
 FUNC_0(&VAR_2->num_pd);
}
