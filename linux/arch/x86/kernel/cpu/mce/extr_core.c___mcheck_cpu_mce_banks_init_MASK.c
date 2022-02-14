
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mce_bank {unsigned long long ctl; int init; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mce_bank* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct mce_bank *VAR_2 = FUNC_0(VAR_0);
 u8 VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  struct mce_bank *VAR_5 = &VAR_2[VAR_4];






  VAR_5->ctl = -1ULL;
  VAR_5->init = 1;
 }
}
