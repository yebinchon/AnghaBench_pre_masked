
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icc_provider {int dev; int provider_list; int nodes; int xlate; int set; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct icc_provider *VAR_3)
{
 if (FUNC_1(!VAR_3->set))
  return -VAR_0;
 if (FUNC_1(!VAR_3->xlate))
  return -VAR_0;

 FUNC_4(&VAR_1);

 FUNC_0(&VAR_3->nodes);
 FUNC_3(&VAR_3->provider_list, &VAR_2);

 FUNC_5(&VAR_1);

 FUNC_2(VAR_3->dev, "interconnect provider added to topology\n");

 return 0;
}
