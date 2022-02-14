
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n_keys; int * acc; int * key; } ;
typedef TYPE_1__ keymap_t ;
typedef TYPE_1__ accentmap_t ;
typedef int accentmap ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,int,int *) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_6(void)
{
 keymap_t VAR_4;
 accentmap_t VAR_5;
 int VAR_6;

 if (FUNC_1(0, VAR_1, &VAR_4) < 0)
  FUNC_0(1, "getting keymap");
 if (FUNC_1(0, VAR_0, &VAR_5) < 0)
  FUNC_2(&VAR_5, 0, sizeof(VAR_5));
     FUNC_5(
"#                                                         alt\n"
"# scan                       cntrl          alt    alt   cntrl lock\n"
"# code  base   shift  cntrl  shift  alt    shift  cntrl  shift state\n"
"# ------------------------------------------------------------------\n"
     );
 for (VAR_6=0; VAR_6<VAR_4.n_keys; VAR_6++)
  FUNC_4(VAR_3, VAR_6, &VAR_4.key[VAR_6]);

 FUNC_5("\n");
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  FUNC_3(VAR_3, VAR_6, &VAR_5.acc[VAR_6]);

}
