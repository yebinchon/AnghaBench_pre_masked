
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct acx565akm_panel {unsigned int cabc_mode; int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acx565akm_panel*,int ,int *,int) ;
 int FUNC_1 (struct acx565akm_panel*,int ,int *,int) ;

__attribute__((used)) static void FUNC_2(struct acx565akm_panel *VAR_2,
        unsigned int VAR_3)
{
 u16 VAR_4;

 VAR_2->cabc_mode = VAR_3;
 if (!VAR_2->enabled)
  return;
 VAR_4 = 0;
 FUNC_0(VAR_2, VAR_0, (u8 *)&VAR_4, 1);
 VAR_4 &= ~3;
 VAR_4 |= (1 << 8) | (VAR_3 & 3);
 FUNC_1(VAR_2, VAR_1, (u8 *)&VAR_4, 2);
}
