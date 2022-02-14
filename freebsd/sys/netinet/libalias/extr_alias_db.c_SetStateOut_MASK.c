
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* tcp; } ;
struct alias_link {TYPE_2__ data; int expire_time; } ;
struct TYPE_4__ {int in; int out; } ;
struct TYPE_6__ {TYPE_1__ state; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;

void
FUNC_2(struct alias_link *VAR_3, int VAR_4)
{

 switch (VAR_4) {
  case 128:
  if (VAR_3->data.tcp->state.in != 129)
   VAR_3->expire_time = VAR_1;
  else
   VAR_3->expire_time = VAR_2;
  break;
 case 129:
  if (VAR_3->data.tcp->state.in == 129)
   VAR_3->expire_time = VAR_0;
  break;
 default:



  FUNC_0();

 }
 VAR_3->data.tcp->state.out = VAR_4;
}
