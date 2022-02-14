
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int* EscMap; } ;
struct async {int his_accmap; TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct async *VAR_4, u_char **VAR_5, u_char VAR_6, int VAR_7)
{
  u_char *VAR_8;

  VAR_8 = *VAR_5;
  if ((VAR_6 < 0x20 && (VAR_7 == VAR_3 || (VAR_4->his_accmap & (1 << VAR_6))))
      || (VAR_6 == VAR_0) || (VAR_6 == VAR_1)) {
    *VAR_8++ = VAR_0;
    VAR_6 ^= VAR_2;
  }
  if (VAR_4->cfg.EscMap[32] && VAR_4->cfg.EscMap[VAR_6 >> 3] & (1 << (VAR_6 & 7))) {
    *VAR_8++ = VAR_0;
    VAR_6 ^= VAR_2;
  }
  *VAR_8++ = VAR_6;
  *VAR_5 = VAR_8;
}
