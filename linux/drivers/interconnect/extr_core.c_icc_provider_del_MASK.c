
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icc_provider {int provider_list; int nodes; scalar_t__ users; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;

int FUNC_5(struct icc_provider *VAR_2)
{
 FUNC_2(&VAR_1);
 if (VAR_2->users) {
  FUNC_4("interconnect provider still has %d users\n",
   VAR_2->users);
  FUNC_3(&VAR_1);
  return -VAR_0;
 }

 if (!FUNC_1(&VAR_2->nodes)) {
  FUNC_4("interconnect provider still has nodes\n");
  FUNC_3(&VAR_1);
  return -VAR_0;
 }

 FUNC_0(&VAR_2->provider_list);
 FUNC_3(&VAR_1);

 return 0;
}
