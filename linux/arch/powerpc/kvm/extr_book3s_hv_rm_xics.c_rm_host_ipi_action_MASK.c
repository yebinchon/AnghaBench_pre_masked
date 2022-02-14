
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* vcpu_kick ) (void*) ;} ;


 int FUNC_0 (int,char*,int,void*) ;

 TYPE_1__* VAR_0 ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(int VAR_1, void *VAR_2)
{
 switch (VAR_1) {
 case 128:
  VAR_0->vcpu_kick(VAR_2);
  break;
 default:
  FUNC_0(1, "Unexpected rm_action=%d data=%p\n", VAR_1, VAR_2);
  break;
 }

}
