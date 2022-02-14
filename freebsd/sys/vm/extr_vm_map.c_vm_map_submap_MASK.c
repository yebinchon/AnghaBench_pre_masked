
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef TYPE_2__* vm_map_t ;
typedef TYPE_3__* vm_map_entry_t ;
struct TYPE_17__ {TYPE_2__* sub_map; int * vm_object; } ;
struct TYPE_19__ {scalar_t__ start; scalar_t__ end; int eflags; TYPE_1__ object; } ;
struct TYPE_18__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,scalar_t__) ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__,TYPE_3__**) ;
 int FUNC_6 (TYPE_2__*) ;

int
FUNC_7(
 vm_map_t VAR_5,
 vm_offset_t VAR_6,
 vm_offset_t VAR_7,
 vm_map_t VAR_8)
{
 vm_map_entry_t VAR_9;
 int VAR_10;

 VAR_10 = VAR_0;

 FUNC_4(VAR_8);
 VAR_8->flags |= VAR_4;
 FUNC_6(VAR_8);

 FUNC_4(VAR_5);

 FUNC_0(VAR_5, VAR_6, VAR_7);

 if (FUNC_5(VAR_5, VAR_6, &VAR_9)) {
  FUNC_2(VAR_5, VAR_9, VAR_6);
 } else
  VAR_9 = FUNC_3(VAR_9);

 FUNC_1(VAR_5, VAR_9, VAR_7);

 if ((VAR_9->start == VAR_6) && (VAR_9->end == VAR_7) &&
     ((VAR_9->eflags & VAR_2) == 0) &&
     (VAR_9->object.vm_object == ((void*)0))) {
  VAR_9->object.sub_map = VAR_8;
  VAR_9->eflags |= VAR_3;
  VAR_10 = VAR_1;
 }
 FUNC_6(VAR_5);

 if (VAR_10 != VAR_1) {
  FUNC_4(VAR_8);
  VAR_8->flags &= ~VAR_4;
  FUNC_6(VAR_8);
 }
 return (VAR_10);
}
