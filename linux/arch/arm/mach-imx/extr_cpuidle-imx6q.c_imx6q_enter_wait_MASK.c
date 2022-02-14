
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct cpuidle_device *VAR_4,
       struct cpuidle_driver *VAR_5, int VAR_6)
{
 FUNC_3(&VAR_2);
 if (++VAR_3 == FUNC_2())
  FUNC_1(VAR_1);
 FUNC_4(&VAR_2);

 FUNC_0();

 FUNC_3(&VAR_2);
 if (VAR_3-- == FUNC_2())
  FUNC_1(VAR_0);
 FUNC_4(&VAR_2);

 return VAR_6;
}
