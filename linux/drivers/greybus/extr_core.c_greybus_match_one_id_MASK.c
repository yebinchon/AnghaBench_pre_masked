
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct greybus_bundle_id {int match_flags; scalar_t__ vendor; scalar_t__ product; scalar_t__ class; } ;
struct gb_bundle {scalar_t__ class; TYPE_1__* intf; } ;
struct TYPE_2__ {scalar_t__ vendor_id; scalar_t__ product_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct gb_bundle *VAR_3,
     const struct greybus_bundle_id *VAR_4)
{
 if ((VAR_4->match_flags & VAR_2) &&
     (VAR_4->vendor != VAR_3->intf->vendor_id))
  return 0;

 if ((VAR_4->match_flags & VAR_1) &&
     (VAR_4->product != VAR_3->intf->product_id))
  return 0;

 if ((VAR_4->match_flags & VAR_0) &&
     (VAR_4->class != VAR_3->class))
  return 0;

 return 1;
}
