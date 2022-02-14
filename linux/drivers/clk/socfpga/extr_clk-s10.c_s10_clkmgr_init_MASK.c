
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stratix10_clock_data {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct stratix10_clock_data*) ;
 int FUNC_2 (struct stratix10_clock_data*) ;
 int VAR_0 ;
 struct stratix10_clock_data* FUNC_3 (struct platform_device*,int ) ;
 int FUNC_4 (int ,int ,struct stratix10_clock_data*) ;
 int FUNC_5 (int ,int ,struct stratix10_clock_data*) ;
 int FUNC_6 (int ,int ,struct stratix10_clock_data*) ;
 int FUNC_7 (int ,int ,struct stratix10_clock_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct stratix10_clock_data *VAR_6;

 VAR_6 = FUNC_3(VAR_5, VAR_0);
 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);

 FUNC_7(VAR_4, FUNC_0(VAR_4), VAR_6);

 FUNC_4(VAR_2,
     FUNC_0(VAR_2), VAR_6);

 FUNC_5(VAR_3,
       FUNC_0(VAR_3),
       VAR_6);

 FUNC_6(VAR_1, FUNC_0(VAR_1),
         VAR_6);
 return 0;
}
