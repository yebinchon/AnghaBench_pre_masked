
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_reg_list {int link; int dev; } ;
struct device {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,struct device*,int ,int *,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ipmi_reg_list* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(int VAR_5, struct device *VAR_6)
{
 dev_t VAR_7 = FUNC_0(VAR_2, VAR_5);
 struct ipmi_reg_list *VAR_8;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_0);
 if (!VAR_8) {
  FUNC_6("ipmi_devintf: Unable to create the ipmi class device link\n");
  return;
 }
 VAR_8->dev = VAR_7;

 FUNC_4(&VAR_4);
 FUNC_1(VAR_1, VAR_6, VAR_7, ((void*)0), "ipmi%d", VAR_5);
 FUNC_3(&VAR_8->link, &VAR_3);
 FUNC_5(&VAR_4);
}
