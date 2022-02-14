
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int register_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (int ,int ) ;

int
FUNC_11(int VAR_10, uint64_t *VAR_11)
{
 uint64_t VAR_12, VAR_13;
 uint64_t VAR_14, VAR_15, VAR_16;
 register_t VAR_17;

 if (FUNC_3(VAR_10) == ((void*)0) || VAR_11 == ((void*)0))
  return (VAR_1);
 if (VAR_8 && !VAR_9)
  return (VAR_2);
 VAR_17 = FUNC_1();
 if (VAR_8) {
  FUNC_10(VAR_4, 0);
  FUNC_10(VAR_3, 0);
  VAR_12 = FUNC_5();
  FUNC_0(1000);
  VAR_15 = FUNC_4(VAR_4);
  VAR_14 = FUNC_4(VAR_3);
  VAR_13 = FUNC_5();
  FUNC_2(VAR_17);
  VAR_16 = 1000 * VAR_14 / VAR_15;
  *VAR_11 = (VAR_13 - VAR_12) * VAR_16;
 } else {
  VAR_12 = FUNC_5();
  FUNC_0(1000);
  VAR_13 = FUNC_5();
  FUNC_2(VAR_17);
  *VAR_11 = (VAR_13 - VAR_12) * 1000;
 }
 return (0);
}
