
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct greybus_bundle_id {scalar_t__ driver_info; scalar_t__ class; scalar_t__ product; scalar_t__ vendor; } ;
struct gb_bundle {int dummy; } ;


 scalar_t__ FUNC_0 (struct gb_bundle*,struct greybus_bundle_id const*) ;

__attribute__((used)) static const struct greybus_bundle_id *
FUNC_1(struct gb_bundle *VAR_0, const struct greybus_bundle_id *VAR_1)
{
 if (!VAR_1)
  return ((void*)0);

 for (; VAR_1->vendor || VAR_1->product || VAR_1->class || VAR_1->driver_info;
         VAR_1++) {
  if (FUNC_0(VAR_0, VAR_1))
   return VAR_1;
 }

 return ((void*)0);
}
