
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;
struct elantech_device_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct psmouse*,struct elantech_device_info*) ;
 int FUNC_1 (struct psmouse*,struct elantech_device_info*) ;
 int FUNC_2 (struct psmouse*) ;

int FUNC_3(struct psmouse *VAR_1)
{
 struct elantech_device_info VAR_2;
 int VAR_3 = -VAR_0;

 FUNC_2(VAR_1);

 VAR_3 = FUNC_0(VAR_1, &VAR_2);
 if (VAR_3)
  goto init_fail;

 VAR_3 = FUNC_1(VAR_1, &VAR_2);
 if (VAR_3)
  goto init_fail;

 return 0;
 init_fail:
 FUNC_2(VAR_1);
 return VAR_3;
}
