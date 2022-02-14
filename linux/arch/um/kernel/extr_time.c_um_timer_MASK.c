
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_13__ {TYPE_4__* mm; } ;
struct TYPE_12__ {int (* event_handler ) (TYPE_5__*) ;} ;
struct TYPE_8__ {int pid; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
struct TYPE_10__ {TYPE_2__ id; } ;
struct TYPE_11__ {TYPE_3__ context; } ;


 int VAR_0 ;
 TYPE_7__* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 TYPE_5__ VAR_1 ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 if (FUNC_0()->mm != ((void*)0))
 {

  FUNC_1(FUNC_0()->mm->context.id.u.pid);
 }

 (*VAR_1.event_handler)(&VAR_1);

 return VAR_0;
}
