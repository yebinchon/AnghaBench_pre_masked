
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (unsigned long const) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long const) ;
 int FUNC_2 (unsigned long const) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned long FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int** VAR_2 ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(void)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;
 u64 VAR_6, VAR_7, VAR_8;
 const unsigned long VAR_9 = FUNC_4();

 VAR_8 = FUNC_5(FUNC_2(VAR_9)) & 0xfful;

 if (FUNC_9(!VAR_8))
  goto spurious;

 VAR_3 = FUNC_7(VAR_8) - 1;
 VAR_6 = FUNC_1(VAR_9) + (0x1000 * VAR_3);
 VAR_7 = FUNC_5(VAR_6);

 if (FUNC_9(!VAR_7))
  goto spurious;

 VAR_4 = FUNC_7(VAR_7) - 1;
 VAR_5 = VAR_2[VAR_3][VAR_4];
 if (FUNC_9(!VAR_5))
  goto spurious;

 FUNC_6(VAR_5);
 goto out;

spurious:
 FUNC_8();
out:


 if (FUNC_3(VAR_1))
  FUNC_5(VAR_0);
 else
  FUNC_5(FUNC_0(VAR_9));
 return;
}
