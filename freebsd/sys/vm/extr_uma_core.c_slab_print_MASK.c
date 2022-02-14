
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* uma_slab_t ;
struct TYPE_3__ {int us_freecount; int us_data; int us_keg; } ;


 int FUNC_0 (char*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(uma_slab_t VAR_0)
{
 FUNC_0("slab: keg %p, data %p, freecount %d\n",
  VAR_0->us_keg, VAR_0->us_data, VAR_0->us_freecount);
}
