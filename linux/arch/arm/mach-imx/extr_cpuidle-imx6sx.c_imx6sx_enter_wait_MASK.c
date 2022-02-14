
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(struct cpuidle_device *VAR_4,
       struct cpuidle_driver *VAR_5, int VAR_6)
{
 FUNC_7(VAR_1);

 switch (VAR_6) {
 case 1:
  FUNC_2();
  break;
 case 2:
  FUNC_6(1);
  FUNC_8(1);
  FUNC_9(0, VAR_3);

  FUNC_3();
  FUNC_0();

  FUNC_5(0, VAR_2);

  FUNC_1();
  FUNC_4();
  FUNC_8(0);
  FUNC_6(0);
  break;
 default:
  break;
 }

 FUNC_7(VAR_0);

 return VAR_6;
}
