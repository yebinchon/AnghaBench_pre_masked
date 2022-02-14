
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_backlight {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (char*,int ,char*,...) ;

__attribute__((used)) static bool
FUNC_2(char VAR_3[VAR_0],
      struct nouveau_backlight *VAR_4)
{
 const int VAR_5 = FUNC_0(&VAR_2, 0, 0, VAR_1);
 if (VAR_5 < 0 || VAR_5 >= 100)
  return 0;
 if (VAR_5 > 0)
  FUNC_1(VAR_3, VAR_0, "nv_backlight%d", VAR_5);
 else
  FUNC_1(VAR_3, VAR_0, "nv_backlight");
 VAR_4->id = VAR_5;
 return 1;
}
