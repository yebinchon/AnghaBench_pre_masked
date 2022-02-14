
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long,int*) ;
 int FUNC_4 (unsigned long,int) ;
 scalar_t__ FUNC_5 (unsigned long,int) ;

__attribute__((used)) static bool FUNC_6(unsigned long VAR_1, u64 VAR_2)
{
 u64 VAR_3, VAR_4, VAR_5;





 if (!FUNC_0(VAR_0))
  return 1;






 if (FUNC_3(VAR_1, &VAR_3))
  return 0;




 VAR_5 = VAR_3 ^ VAR_2;

 if (FUNC_1(VAR_1))
  VAR_5 = FUNC_2(VAR_5);

 if (FUNC_5(VAR_1, VAR_5) ||
     FUNC_3(VAR_1, &VAR_4))
  return 0;





 if (VAR_4 != VAR_5)
  return 0;

 if (FUNC_1(VAR_1))
  VAR_3 = FUNC_2(VAR_3);




 FUNC_4(VAR_1, VAR_3);

 return 1;
}
