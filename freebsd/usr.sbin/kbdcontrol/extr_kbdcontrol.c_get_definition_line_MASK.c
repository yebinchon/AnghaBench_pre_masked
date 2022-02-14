
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int n_keys; } ;
typedef TYPE_1__ keymap_t ;
struct TYPE_8__ {int n_accs; } ;
typedef TYPE_2__ accentmap_t ;
typedef int FILE ;




 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(FILE *VAR_2, keymap_t *VAR_3, accentmap_t *VAR_4)
{
 int VAR_5;

 VAR_1 = VAR_2;

 if (VAR_0 < 0)
  VAR_0 = FUNC_3();
 switch (VAR_0) {
 case 128:
  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5 < 0)
   FUNC_0(1, "invalid key definition");
  if (VAR_5 > VAR_3->n_keys)
   VAR_3->n_keys = VAR_5;
  break;
 case 129:
  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5 < 0)
   FUNC_0(1, "invalid accent key definition");
  if (VAR_5 > VAR_4->n_accs)
   VAR_4->n_accs = VAR_5;
  break;
 case 0:

  return -1;
 default:
  FUNC_0(1, "illegal definition line");
 }
 return VAR_5;
}
