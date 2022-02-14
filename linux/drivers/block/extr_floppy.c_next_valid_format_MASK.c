
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t* autodetect; } ;
struct TYPE_5__ {int probed_format; } ;
struct TYPE_4__ {scalar_t__ sect; } ;


 TYPE_3__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_0(void)
{
 int VAR_3;

 VAR_3 = VAR_1->probed_format;
 while (1) {
  if (VAR_3 >= 8 || !VAR_0->autodetect[VAR_3]) {
   VAR_1->probed_format = 0;
   return 1;
  }
  if (VAR_2[VAR_0->autodetect[VAR_3]].sect) {
   VAR_1->probed_format = VAR_3;
   return 0;
  }
  VAR_3++;
 }
}
