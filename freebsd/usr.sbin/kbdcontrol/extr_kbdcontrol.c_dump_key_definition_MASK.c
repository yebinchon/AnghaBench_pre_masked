
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int n_keys; TYPE_1__* key; } ;
typedef TYPE_2__ keymap_t ;
struct TYPE_4__ {int spcl; int* map; scalar_t__ flgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(char *VAR_2, keymap_t *VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_1("static keymap_t keymap_%s = { 0x%02x, {\n",
        VAR_2, (unsigned)VAR_3->n_keys);
 FUNC_1(
"/*                                                         alt\n"
" * scan                       cntrl          alt    alt   cntrl\n"
" * code  base   shift  cntrl  shift   alt   shift  cntrl  shift    spcl flgs\n"
" * ---------------------------------------------------------------------------\n"
" */\n");
 for (VAR_4 = 0; VAR_4 < VAR_3->n_keys; VAR_4++) {
  FUNC_1("/*%02x*/{{", VAR_4);
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   if (VAR_3->key[VAR_4].spcl & (0x80 >> VAR_5))
    FUNC_0(VAR_3->key[VAR_4].map[VAR_5] | VAR_1);
   else
    FUNC_0(VAR_3->key[VAR_4].map[VAR_5]);
  }
  FUNC_1("}, 0x%02X,0x%02X },\n",
         (unsigned)VAR_3->key[VAR_4].spcl,
         (unsigned)VAR_3->key[VAR_4].flgs);
 }
 FUNC_1("} };\n\n");
}
