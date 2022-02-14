
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* current_size; } ;
struct TYPE_5__ {int gart_size; } ;
struct TYPE_4__ {int size; } ;


 int FUNC_0 (int) ;
 TYPE_3__* VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_1(void)
{
 int VAR_3;

 VAR_3 = VAR_1.gart_size / FUNC_0(1);
 VAR_2[0].size = VAR_3;
 VAR_0->current_size = (void *) &VAR_2[0];

 return VAR_3;
}
