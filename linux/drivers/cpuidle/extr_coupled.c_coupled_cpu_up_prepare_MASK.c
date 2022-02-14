
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_device {scalar_t__ coupled; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct cpuidle_device* FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_2)
{
 struct cpuidle_device *VAR_3;

 FUNC_1(&VAR_1);

 VAR_3 = FUNC_3(VAR_0, VAR_2);
 if (VAR_3 && VAR_3->coupled)
  FUNC_0(VAR_3->coupled);

 FUNC_2(&VAR_1);
 return 0;
}
