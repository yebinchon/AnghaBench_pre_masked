
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char Key; int Up; scalar_t__ Modifiers; scalar_t__ Modifier; scalar_t__ ExtKey; } ;
typedef TYPE_1__ uiAreaKeyEvent ;
typedef int uiAreaHandler ;
typedef int uiArea ;


 int FUNC_0 (char*,char*,int,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(uiAreaHandler *VAR_1, uiArea *VAR_2, uiAreaKeyEvent *VAR_3)
{
 char VAR_4[4];

 VAR_4[0] = '\'';
 VAR_4[1] = VAR_3->Key;
 VAR_4[2] = '\'';
 VAR_4[3] = '\0';
 if (VAR_3->Key == 0) {
  VAR_4[0] = '0';
  VAR_4[1] = '\0';
 }
 FUNC_0("key key:%s extkey:%d mod:%d mods:%d up:%d\n",
  VAR_4,
  (int) VAR_3->ExtKey,
  (int) VAR_3->Modifier,
  (int) VAR_3->Modifiers,
  VAR_3->Up);
 return FUNC_1(VAR_0);
}
