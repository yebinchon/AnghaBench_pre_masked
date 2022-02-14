
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_field {int flags; TYPE_1__* usage; } ;
struct TYPE_2__ {unsigned int hid; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct hid_field *VAR_2, unsigned int VAR_3)
{
 if (VAR_2->usage[0].hid != VAR_3 ||
     !(VAR_2->flags & VAR_0))
  return;

 VAR_2->flags &= ~VAR_0;
 VAR_2->flags |= VAR_1;
}
