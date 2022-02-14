
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ddc_service {int dummy; } ;
struct aux_payload {int length; int * reply; int write; } ;
typedef enum aux_channel_operation_result { ____Placeholder_aux_channel_operation_result } aux_channel_operation_result ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int FUNC_0 (struct ddc_service*,struct aux_payload*,int*) ;
 int FUNC_1 (int) ;

bool FUNC_2(struct ddc_service *VAR_5,
  struct aux_payload *VAR_6)
{
 int VAR_7, VAR_8 = 0;
 uint8_t VAR_9;
 bool VAR_10 = 1;
 enum aux_channel_operation_result VAR_11;
 int VAR_12 = 0,
  VAR_13 = 0,
  VAR_14 = 0,
  VAR_15 = 0,
  VAR_16 = 0;

 if (!VAR_6->reply) {
  VAR_10 = 0;
  VAR_6->reply = &VAR_9;
 }

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_8 = FUNC_0(VAR_5, VAR_6, &VAR_11);
  switch (VAR_11) {
  case 135:
   VAR_15 = 0;
   VAR_16 = 0;

   switch (*VAR_6->reply) {
   case 134:
    if (!VAR_6->write && VAR_6->length != VAR_8) {
     if (++VAR_12 >= VAR_3)
      goto fail;
     else
      FUNC_1(300);
    } else
     return 1;
   break;

   case 133:
   case 128:
   case 129:
    if (++VAR_13 >= VAR_0)
     goto fail;
    break;

   case 130:
    VAR_13 = 0;
    if (++VAR_14 >= VAR_1)
     goto fail;
    break;

   case 132:
   case 131:
   default:
    goto fail;
   }
   break;

  case 138:
   if (++VAR_16 >= VAR_2)
    goto fail;
   else
    FUNC_1(400);
   break;

  case 136:
   if (++VAR_15 >= VAR_4)
    goto fail;
   else {






   }
   break;

  case 139:
  case 137:
  default:
   goto fail;
  }
 }

fail:
 if (!VAR_10)
  VAR_6->reply = ((void*)0);
 return 0;
}
