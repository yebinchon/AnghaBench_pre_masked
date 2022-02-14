
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmtcp_dev_data {scalar_t__ vcc; int persist; } ;
struct atm_dev {int dummy; } ;
typedef scalar_t__ loff_t ;


 struct atmtcp_dev_data* FUNC_0 (struct atm_dev*) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static int FUNC_2(struct atm_dev *VAR_0,loff_t *VAR_1,char *VAR_2)
{
 struct atmtcp_dev_data *VAR_3 = FUNC_0(VAR_0);

 if (*VAR_1) return 0;
 if (!VAR_3->persist) return FUNC_1(VAR_2,"ephemeral\n");
 return FUNC_1(VAR_2,"persistent, %sconnected\n",
     VAR_3->vcc ? "" : "dis");
}
