
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void const* str; } ;
struct TYPE_4__ {void const** str; } ;
struct property_entry {scalar_t__ type; int length; void const* name; TYPE_1__ value; TYPE_2__ pointer; scalar_t__ is_array; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void const*) ;
 void* FUNC_1 (struct property_entry const*) ;

__attribute__((used)) static void FUNC_2(const struct property_entry *VAR_1)
{
 const void *VAR_2 = FUNC_1(VAR_1);
 size_t VAR_3, VAR_4;

 if (VAR_1->is_array) {
  if (VAR_1->type == VAR_0 && VAR_1->pointer.str) {
   VAR_4 = VAR_1->length / sizeof(const char *);
   for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
    FUNC_0(VAR_1->pointer.str[VAR_3]);
  }
  FUNC_0(VAR_2);
 } else if (VAR_1->type == VAR_0) {
  FUNC_0(VAR_1->value.str);
 }
 FUNC_0(VAR_1->name);
}
