
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hidpp_report {int dummy; } ;
struct hidpp_device {int dummy; } ;
typedef int params ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hidpp_device*,int ,int*,int*) ;
 int FUNC_2 (struct hidpp_device*,int,int ,int*,int,struct hidpp_report*) ;

__attribute__((used)) static int FUNC_3(struct hidpp_device *VAR_2, bool VAR_3,
 bool VAR_4, bool VAR_5)
{
 u8 VAR_6;
 u8 VAR_7;
 int VAR_8;
 u8 VAR_9[1];
 struct hidpp_report VAR_10;

 VAR_8 = FUNC_1(VAR_2, VAR_1,
         &VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_9[0] = (VAR_3 ? FUNC_0(2) : 0) |
      (VAR_4 ? FUNC_0(1) : 0) |
      (VAR_5 ? FUNC_0(0) : 0);

 return FUNC_2(VAR_2, VAR_6,
        VAR_0,
        VAR_9, sizeof(VAR_9), &VAR_10);
}
