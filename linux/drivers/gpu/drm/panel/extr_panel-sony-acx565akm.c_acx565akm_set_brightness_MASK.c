
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct acx565akm_panel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acx565akm_panel*,int ,int *,int) ;
 int FUNC_1 (struct acx565akm_panel*,int ,int *,int) ;

__attribute__((used)) static void FUNC_2(struct acx565akm_panel *VAR_5, int VAR_6)
{
 u16 VAR_7;
 int VAR_8;

 VAR_8 = VAR_6 | (1 << 8);
 FUNC_1(VAR_5, VAR_3, (u8 *)&VAR_8, 2);

 FUNC_0(VAR_5, VAR_2, (u8 *)&VAR_7, 1);
 if (VAR_6)
  VAR_7 |= VAR_1 |
   VAR_0;
 else
  VAR_7 &= ~(VAR_1 |
     VAR_0);

 VAR_7 |= 1 << 8;
 FUNC_1(VAR_5, VAR_4, (u8 *)&VAR_7, 2);
}
