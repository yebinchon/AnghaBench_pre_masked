
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int * params; } ;
struct hidpp_report {TYPE_1__ rap; } ;
struct hidpp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hidpp_device*,int ,int ,int ,int *,int,struct hidpp_report*) ;

__attribute__((used)) static int FUNC_1(struct hidpp_device *VAR_4, u32 *VAR_5)
{
 struct hidpp_report VAR_6;
 int VAR_7;
 u8 VAR_8[1] = { VAR_0 };

 VAR_7 = FUNC_0(VAR_4,
     VAR_3,
     VAR_1,
     VAR_2,
     VAR_8, 1, &VAR_6);
 if (VAR_7)
  return VAR_7;





 *VAR_5 = *((u32 *)&VAR_6.rap.params[1]);
 return 0;
}
