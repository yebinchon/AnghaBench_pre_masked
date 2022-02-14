
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* proto; } ;
struct TYPE_6__ {int owner; int (* release_proto ) (TYPE_2__*) ;} ;
typedef TYPE_2__ PIA ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(PIA * VAR_0)
{
 FUNC_1(VAR_0);
 if (VAR_0->proto->release_proto)
  VAR_0->proto->release_proto(VAR_0);
 FUNC_0(VAR_0->proto->owner);
}
