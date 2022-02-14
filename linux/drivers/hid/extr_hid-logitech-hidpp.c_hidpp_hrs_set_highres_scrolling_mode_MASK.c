
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * params; } ;
struct hidpp_report {TYPE_1__ fap; } ;
struct hidpp_device {int dummy; } ;
typedef int params ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hidpp_device*,int ,int *,int *) ;
 int FUNC_2 (struct hidpp_device*,int ,int ,int *,int,struct hidpp_report*) ;

__attribute__((used)) static int FUNC_3(struct hidpp_device *VAR_2,
 bool VAR_3, u8 *VAR_4)
{
 u8 VAR_5;
 u8 VAR_6;
 int VAR_7;
 u8 VAR_8[1];
 struct hidpp_report VAR_9;

 VAR_7 = FUNC_1(VAR_2,
         VAR_1,
         &VAR_5,
         &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_8[0] = VAR_3 ? FUNC_0(0) : 0;
 VAR_7 = FUNC_2(VAR_2, VAR_5,
       VAR_0,
       VAR_8, sizeof(VAR_8), &VAR_9);
 if (VAR_7)
  return VAR_7;
 *VAR_4 = VAR_9.fap.params[1];
 return 0;
}
