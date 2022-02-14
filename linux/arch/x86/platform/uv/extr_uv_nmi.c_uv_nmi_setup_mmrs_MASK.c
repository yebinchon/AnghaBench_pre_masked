
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_3(void)
{
 if (FUNC_1(VAR_6)) {
  FUNC_2(VAR_3,
     1UL << VAR_4);
  VAR_11 = VAR_1;
  VAR_12 = VAR_2;
  VAR_13 = 1UL << VAR_5;
  FUNC_0("UV: SMI NMI support: %s\n", VAR_7);
 } else {
  VAR_11 = VAR_0;
  VAR_12 = VAR_8;
  VAR_13 = 1UL << VAR_9;
  FUNC_0("UV: SMI NMI support: %s\n", VAR_10);
 }
}
