
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int fscr; int hfscr; int lpcr_clear; int lpcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static void FUNC_3(void)
{
 u64 VAR_8;
 VAR_8 = FUNC_1(VAR_3);
 VAR_8 |= VAR_7.lpcr;
 VAR_8 &= ~VAR_7.lpcr_clear;
 FUNC_2(VAR_3, VAR_8);
 if (VAR_6) {
  FUNC_2(VAR_4, 0);
  FUNC_2(VAR_2, VAR_7.hfscr);
  FUNC_2(VAR_5, VAR_0);
 }
 FUNC_2(VAR_1, VAR_7.fscr);

 if (&FUNC_0)
  FUNC_0();
}
