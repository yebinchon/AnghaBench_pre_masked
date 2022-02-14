
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * params; } ;
struct hidpp_report {TYPE_1__ fap; } ;
struct hidpp_device {int hid_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct hidpp_device*,int ,int *,int *) ;
 int FUNC_2 (struct hidpp_device*,int ,int ,int *,int ,struct hidpp_report*) ;

__attribute__((used)) static int FUNC_3(struct hidpp_device *VAR_2,
 u8 *VAR_3)
{
 u8 VAR_4;
 u8 VAR_5;
 int VAR_6;
 struct hidpp_report VAR_7;

 VAR_6 = FUNC_1(VAR_2, VAR_1,
         &VAR_4, &VAR_5);
 if (VAR_6)
  goto return_default;

 VAR_6 = FUNC_2(VAR_2, VAR_4,
       VAR_0,
       ((void*)0), 0, &VAR_7);
 if (VAR_6)
  goto return_default;

 *VAR_3 = VAR_7.fap.params[0];
 return 0;
return_default:
 FUNC_0(VAR_2->hid_dev,
   "Couldn't get wheel multiplier (error %d)\n", VAR_6);
 return VAR_6;
}
