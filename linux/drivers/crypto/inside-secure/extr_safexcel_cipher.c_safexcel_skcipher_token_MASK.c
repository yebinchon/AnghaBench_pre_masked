
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct safexcel_token {int stat; int instructions; int packet_length; int opcode; } ;
struct TYPE_2__ {scalar_t__ token; } ;
struct safexcel_command_desc {TYPE_1__ control_data; } ;
struct safexcel_cipher_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct safexcel_cipher_ctx*,int *,struct safexcel_command_desc*) ;

__attribute__((used)) static void FUNC_1(struct safexcel_cipher_ctx *VAR_6, u8 *VAR_7,
        struct safexcel_command_desc *VAR_8,
        u32 VAR_9)
{
 struct safexcel_token *VAR_10;

 FUNC_0(VAR_6, VAR_7, VAR_8);


 VAR_10 = (struct safexcel_token *)(VAR_8->control_data.token + 4);

 VAR_10[0].opcode = VAR_3;
 VAR_10[0].packet_length = VAR_9;
 VAR_10[0].stat = VAR_5 |
   VAR_4;
 VAR_10[0].instructions = VAR_0 |
    VAR_1 |
    VAR_2;
}
