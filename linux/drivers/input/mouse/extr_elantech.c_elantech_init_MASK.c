
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;
struct elantech_device_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct psmouse*,struct elantech_device_info*) ;
 int FUNC_2 (struct psmouse*,struct elantech_device_info*) ;
 int FUNC_3 (struct psmouse*,struct elantech_device_info*,int) ;
 scalar_t__ FUNC_4 (struct psmouse*,struct elantech_device_info*) ;
 int FUNC_5 (struct psmouse*) ;
 int FUNC_6 (struct psmouse*) ;
 int FUNC_7 (struct psmouse*,char*) ;

int FUNC_8(struct psmouse *VAR_5)
{
 struct elantech_device_info VAR_6;
 int VAR_7 = -VAR_2;

 FUNC_5(VAR_5);

 VAR_7 = FUNC_1(VAR_5, &VAR_6);
 if (VAR_7)
  goto init_fail;
 VAR_7 = FUNC_2(VAR_5, &VAR_6);
 if (VAR_7 < 0) {




  FUNC_6(VAR_5);
  goto init_fail;
 }

 return VAR_3;
 init_fail:
 FUNC_5(VAR_5);
 return VAR_7;
}
