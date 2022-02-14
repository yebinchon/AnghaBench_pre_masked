
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm97xx {int* dig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wm97xx*,int ) ;
 int FUNC_1 (struct wm97xx*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct wm97xx *VAR_4, int VAR_5)
{
 u16 VAR_6;

 if (VAR_5) {
  VAR_6 = FUNC_0(VAR_4, VAR_0);
  FUNC_1(VAR_4, VAR_0, VAR_6 & 0x7fff);
  FUNC_1(VAR_4, VAR_1, VAR_4->dig[2] |
     VAR_3);
  FUNC_0(VAR_4, VAR_2);
 } else {
  FUNC_1(VAR_4, VAR_1, VAR_4->dig[2] &
     ~VAR_3);
  VAR_6 = FUNC_0(VAR_4, VAR_0);
  FUNC_1(VAR_4, VAR_0, VAR_6 | 0x8000);
 }
}
