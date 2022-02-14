
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dummy; } ;
struct elan_drvdata {unsigned char max_x; unsigned char max_y; void* res_y; void* res_x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (unsigned char) ;
 int FUNC_1 (struct hid_device*,unsigned char*,int ) ;
 struct elan_drvdata* FUNC_2 (struct hid_device*) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_6)
{
 struct elan_drvdata *VAR_7 = FUNC_2(VAR_6);
 unsigned char *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(VAR_0, VAR_5);
 if (!VAR_8)
  return -VAR_4;

 VAR_9 = FUNC_1(VAR_6, VAR_8, VAR_1);
 if (VAR_9)
  goto err;

 VAR_7->max_x = (VAR_8[4] << 8) | VAR_8[3];

 VAR_9 = FUNC_1(VAR_6, VAR_8, VAR_2);
 if (VAR_9)
  goto err;

 VAR_7->max_y = (VAR_8[4] << 8) | VAR_8[3];

 VAR_9 = FUNC_1(VAR_6, VAR_8, VAR_3);
 if (VAR_9)
  goto err;

 VAR_7->res_x = FUNC_0(VAR_8[3]);
 VAR_7->res_y = FUNC_0(VAR_8[4]);

err:
 FUNC_3(VAR_8);
 return VAR_9;
}
