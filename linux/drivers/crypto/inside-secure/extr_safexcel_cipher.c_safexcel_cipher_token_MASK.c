
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {void** token; int options; } ;
struct safexcel_command_desc {TYPE_1__ control_data; } ;
struct safexcel_cipher_ctx {scalar_t__ mode; scalar_t__ xcm; int alg; void* nonce; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;



 void* FUNC_0 (int) ;
 int FUNC_1 (void**,int*,int) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct safexcel_cipher_ctx *VAR_9, u8 *VAR_10,
      struct safexcel_command_desc *VAR_11)
{
 u32 VAR_12 = 0;

 if (VAR_9->mode == VAR_1) {
  VAR_11->control_data.options |= VAR_6;


  VAR_11->control_data.token[0] = VAR_9->nonce;

  FUNC_1(&VAR_11->control_data.token[1], VAR_10, 8);

  VAR_11->control_data.token[3] = FUNC_0(1);

  return;
 } else if (VAR_9->xcm == VAR_8) {
  VAR_11->control_data.options |= VAR_6;


  FUNC_1(&VAR_11->control_data.token[0], VAR_10, 12);

  VAR_11->control_data.token[3] = FUNC_0(1);

  return;
 } else if (VAR_9->xcm == VAR_7) {
  VAR_11->control_data.options |= VAR_6;


  FUNC_1(&VAR_11->control_data.token[0], VAR_10, 15 - VAR_10[0]);

  FUNC_2((u8 *)&VAR_11->control_data.token[0] + 15 - VAR_10[0],
         0, VAR_10[0] + 1);

  return;
 }

 if (VAR_9->mode != VAR_2) {
  switch (VAR_9->alg) {
  case 128:
   VAR_12 = VAR_4;
   VAR_11->control_data.options |= VAR_5;
   break;
  case 130:
   VAR_12 = VAR_3;
   VAR_11->control_data.options |= VAR_5;
   break;
  case 129:
   VAR_12 = VAR_0;
   VAR_11->control_data.options |= VAR_6;
   break;
  }
  FUNC_1(VAR_11->control_data.token, VAR_10, VAR_12);
 }
}
