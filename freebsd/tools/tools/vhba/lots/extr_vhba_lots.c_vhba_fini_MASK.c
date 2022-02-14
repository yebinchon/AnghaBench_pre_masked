
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int disk; } ;
typedef TYPE_1__ vhbalots_t ;
struct TYPE_5__ {TYPE_1__* private; } ;
typedef TYPE_2__ vhba_softc_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

void
FUNC_1(vhba_softc_t *VAR_1)
{
 vhbalots_t *VAR_2 = VAR_1->private;
 VAR_1->private = ((void*)0);
 FUNC_0(VAR_2->disk, VAR_0);
}
