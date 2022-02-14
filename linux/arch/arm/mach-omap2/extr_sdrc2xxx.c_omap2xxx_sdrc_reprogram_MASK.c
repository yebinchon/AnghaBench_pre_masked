
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int,int ) ;

u32 FUNC_8(u32 VAR_5, u32 VAR_6)
{
 u32 VAR_7, VAR_8;
 u32 VAR_9 = VAR_4;
 unsigned long VAR_10;

 if ((VAR_4 == VAR_5) && !VAR_6)
  return VAR_9;

 if (VAR_5 == VAR_0)
  VAR_7 = FUNC_5();
 else if (VAR_5 == VAR_1)
  VAR_7 = FUNC_4();
 else
  return VAR_9;

 VAR_8 = FUNC_6();

 FUNC_2(VAR_10);




 if (FUNC_0())
  FUNC_7(0xffff, VAR_2);
 else
  FUNC_7(0xffff, VAR_3);
 FUNC_3(VAR_5, VAR_7, VAR_8);
 VAR_4 = VAR_5;
 FUNC_1(VAR_10);

 return VAR_9;
}
