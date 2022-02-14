
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pidff_device {int* type_id; int hid; TYPE_4__* create_new_effect_type; TYPE_2__* set_effect_type; } ;
struct input_dev {int ffbit; } ;
typedef int pidff_effect_types ;
struct TYPE_8__ {TYPE_3__* usage; } ;
struct TYPE_7__ {scalar_t__ hid; } ;
struct TYPE_6__ {TYPE_1__* usage; } ;
struct TYPE_5__ {scalar_t__ hid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pidff_device *VAR_23,
         struct input_dev *VAR_24)
{
 int VAR_25;

 for (VAR_25 = 0; VAR_25 < sizeof(pidff_effect_types); VAR_25++) {
  int VAR_26 = VAR_23->type_id[VAR_25];
  if (VAR_23->set_effect_type->usage[VAR_26].hid !=
      VAR_23->create_new_effect_type->usage[VAR_26].hid) {
   FUNC_0(VAR_23->hid,
    "effect type number %d is invalid\n", VAR_25);
   return -1;
  }
 }

 if (VAR_23->type_id[VAR_12])
  FUNC_1(VAR_0, VAR_24->ffbit);
 if (VAR_23->type_id[VAR_16])
  FUNC_1(VAR_5, VAR_24->ffbit);
 if (VAR_23->type_id[VAR_21]) {
  FUNC_1(VAR_10, VAR_24->ffbit);
  FUNC_1(VAR_4, VAR_24->ffbit);
 }
 if (VAR_23->type_id[VAR_19]) {
  FUNC_1(VAR_8, VAR_24->ffbit);
  FUNC_1(VAR_4, VAR_24->ffbit);
 }
 if (VAR_23->type_id[VAR_22]) {
  FUNC_1(VAR_11, VAR_24->ffbit);
  FUNC_1(VAR_4, VAR_24->ffbit);
 }
 if (VAR_23->type_id[VAR_18]) {
  FUNC_1(VAR_7, VAR_24->ffbit);
  FUNC_1(VAR_4, VAR_24->ffbit);
 }
 if (VAR_23->type_id[VAR_17]) {
  FUNC_1(VAR_6, VAR_24->ffbit);
  FUNC_1(VAR_4, VAR_24->ffbit);
 }
 if (VAR_23->type_id[VAR_20])
  FUNC_1(VAR_9, VAR_24->ffbit);
 if (VAR_23->type_id[VAR_13])
  FUNC_1(VAR_1, VAR_24->ffbit);
 if (VAR_23->type_id[VAR_15])
  FUNC_1(VAR_3, VAR_24->ffbit);
 if (VAR_23->type_id[VAR_14])
  FUNC_1(VAR_2, VAR_24->ffbit);

 return 0;

}
