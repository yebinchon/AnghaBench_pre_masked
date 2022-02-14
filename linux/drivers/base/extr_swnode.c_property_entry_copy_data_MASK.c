
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* str; } ;
struct TYPE_3__ {void* str; } ;
struct property_entry {scalar_t__ type; void* name; scalar_t__ is_array; int length; TYPE_2__ value; TYPE_1__ pointer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (void const*,int ,int ) ;
 void* FUNC_1 (void*,int ) ;
 int FUNC_2 (struct property_entry*,struct property_entry const*) ;
 int FUNC_3 (struct property_entry*) ;
 void* FUNC_4 (struct property_entry const*) ;
 int FUNC_5 (struct property_entry*,void const*) ;

__attribute__((used)) static int FUNC_6(struct property_entry *VAR_4,
        const struct property_entry *VAR_5)
{
 const void *VAR_6 = FUNC_4(VAR_5);
 const void *VAR_7;
 int VAR_8;

 if (VAR_5->is_array) {
  if (!VAR_5->length)
   return -VAR_1;

  if (VAR_5->type == VAR_0) {
   VAR_8 = FUNC_2(VAR_4, VAR_5);
   if (VAR_8)
    return VAR_8;
   VAR_7 = VAR_4->pointer.str;
  } else {
   VAR_7 = FUNC_0(VAR_6, VAR_5->length, VAR_3);
   if (!VAR_7)
    return -VAR_2;
  }
 } else if (VAR_5->type == VAR_0) {
  VAR_7 = FUNC_1(VAR_5->value.str, VAR_3);
  if (!VAR_7 && VAR_5->value.str)
   return -VAR_2;
 } else {
  VAR_7 = VAR_6;
 }

 VAR_4->length = VAR_5->length;
 VAR_4->is_array = VAR_5->is_array;
 VAR_4->type = VAR_5->type;

 FUNC_5(VAR_4, VAR_7);

 VAR_4->name = FUNC_1(VAR_5->name, VAR_3);
 if (!VAR_4->name)
  goto out_free_data;

 return 0;

out_free_data:
 FUNC_3(VAR_4);
 return -VAR_2;
}
