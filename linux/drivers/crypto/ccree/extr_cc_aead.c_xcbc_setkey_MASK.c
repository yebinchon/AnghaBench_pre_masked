
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cc_hw_desc {int dummy; } ;
struct TYPE_3__ {scalar_t__ xcbc_keys_dma_addr; } ;
struct TYPE_4__ {TYPE_1__ xcbc; } ;
struct cc_aead_ctx {TYPE_2__ auth_state; int auth_keylen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cc_hw_desc*) ;
 int FUNC_1 (struct cc_hw_desc*,int ) ;
 int FUNC_2 (struct cc_hw_desc*,int ) ;
 int FUNC_3 (struct cc_hw_desc*,int,int ) ;
 int FUNC_4 (struct cc_hw_desc*,int ,scalar_t__,int ,int ) ;
 int FUNC_5 (struct cc_hw_desc*,scalar_t__,int,int ,int ) ;
 int FUNC_6 (struct cc_hw_desc*,int ) ;
 int FUNC_7 (struct cc_hw_desc*,int ) ;
 int FUNC_8 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static unsigned int FUNC_9(struct cc_hw_desc *VAR_9,
    struct cc_aead_ctx *VAR_10)
{

 FUNC_0(&VAR_9[0]);




 FUNC_4(&VAR_9[0], VAR_3,
       VAR_10->auth_state.xcbc.xcbc_keys_dma_addr, VAR_10->auth_keylen,
       VAR_6);
 FUNC_2(&VAR_9[0], VAR_4);
 FUNC_1(&VAR_9[0], VAR_5);
 FUNC_7(&VAR_9[0], VAR_10->auth_keylen);
 FUNC_6(&VAR_9[0], VAR_8);
 FUNC_8(&VAR_9[0], VAR_7);

 FUNC_0(&VAR_9[1]);
 FUNC_3(&VAR_9[1], 0x01010101, VAR_1);
 FUNC_6(&VAR_9[1], VAR_2);
 FUNC_5(&VAR_9[1], VAR_10->auth_state.xcbc.xcbc_keys_dma_addr,
        VAR_0, VAR_6, 0);

 FUNC_0(&VAR_9[2]);
 FUNC_3(&VAR_9[2], 0x02020202, VAR_1);
 FUNC_6(&VAR_9[2], VAR_2);
 FUNC_5(&VAR_9[2], (VAR_10->auth_state.xcbc.xcbc_keys_dma_addr
      + VAR_0),
         VAR_0, VAR_6, 0);

 FUNC_0(&VAR_9[3]);
 FUNC_3(&VAR_9[3], 0x03030303, VAR_1);
 FUNC_6(&VAR_9[3], VAR_2);
 FUNC_5(&VAR_9[3], (VAR_10->auth_state.xcbc.xcbc_keys_dma_addr
       + 2 * VAR_0),
         VAR_0, VAR_6, 0);

 return 4;
}
