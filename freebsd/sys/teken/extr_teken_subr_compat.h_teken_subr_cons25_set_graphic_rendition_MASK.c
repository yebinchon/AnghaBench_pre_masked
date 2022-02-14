
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int t_defattr; int t_curattr; } ;
typedef TYPE_1__ teken_t ;


 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static void
FUNC_1(teken_t *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2)
{

 (void)VAR_2;
 switch (VAR_1) {
 case 0:
  VAR_0->t_curattr = VAR_0->t_defattr;
  break;
 default:
  FUNC_0("unsupported attribute %u\n", VAR_1);
 }
}
