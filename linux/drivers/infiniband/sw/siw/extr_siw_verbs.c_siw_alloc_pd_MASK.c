
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_device {int num_pd; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ib_pd*,char*,int ) ;
 struct siw_device* FUNC_4 (int ) ;

int FUNC_5(struct ib_pd *VAR_2, struct ib_udata *VAR_3)
{
 struct siw_device *VAR_4 = FUNC_4(VAR_2->device);

 if (FUNC_1(&VAR_4->num_pd) > VAR_1) {
  FUNC_0(&VAR_4->num_pd);
  return -VAR_0;
 }
 FUNC_3(VAR_2, "now %d PD's(s)\n", FUNC_2(&VAR_4->num_pd));

 return 0;
}
