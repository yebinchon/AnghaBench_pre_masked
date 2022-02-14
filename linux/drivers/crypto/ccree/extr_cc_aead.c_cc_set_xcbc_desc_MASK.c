
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct TYPE_3__ {scalar_t__ xcbc_keys_dma_addr; } ;
struct TYPE_4__ {TYPE_1__ xcbc; } ;
struct cc_aead_ctx {TYPE_2__ auth_state; } ;
struct aead_request {int dummy; } ;


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
 struct cc_aead_ctx* FUNC_0 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct cc_hw_desc*) ;
 int FUNC_3 (struct cc_hw_desc*) ;
 int FUNC_4 (struct cc_hw_desc*,int ) ;
 int FUNC_5 (struct cc_hw_desc*,int ) ;
 int FUNC_6 (struct cc_hw_desc*,int ,int ) ;
 int FUNC_7 (struct cc_hw_desc*,int ,scalar_t__,int,int ) ;
 int FUNC_8 (struct cc_hw_desc*,int ) ;
 int FUNC_9 (struct cc_hw_desc*,int ) ;
 int FUNC_10 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static void FUNC_11(struct aead_request *VAR_12, struct cc_hw_desc VAR_13[],
        unsigned int *VAR_14)
{
 struct crypto_aead *VAR_15 = FUNC_1(VAR_12);
 struct cc_aead_ctx *VAR_16 = FUNC_0(VAR_15);
 unsigned int VAR_17 = *VAR_14;


 FUNC_2(&VAR_13[VAR_17]);
 FUNC_6(&VAR_13[VAR_17], 0, VAR_2);
 FUNC_10(&VAR_13[VAR_17], VAR_8);
 FUNC_5(&VAR_13[VAR_17], VAR_5);
 FUNC_4(&VAR_13[VAR_17], VAR_3);
 FUNC_9(&VAR_13[VAR_17], VAR_1);
 FUNC_8(&VAR_13[VAR_17], VAR_11);
 FUNC_3(&VAR_13[VAR_17]);
 VAR_17++;


 FUNC_2(&VAR_13[VAR_17]);
 FUNC_7(&VAR_13[VAR_17], VAR_4,
       VAR_16->auth_state.xcbc.xcbc_keys_dma_addr,
       VAR_0, VAR_6);
 FUNC_10(&VAR_13[VAR_17], VAR_7);
 FUNC_5(&VAR_13[VAR_17], VAR_5);
 FUNC_4(&VAR_13[VAR_17], VAR_3);
 FUNC_9(&VAR_13[VAR_17], VAR_1);
 FUNC_8(&VAR_13[VAR_17], VAR_11);
 FUNC_3(&VAR_13[VAR_17]);
 VAR_17++;


 FUNC_2(&VAR_13[VAR_17]);
 FUNC_7(&VAR_13[VAR_17], VAR_4,
       (VAR_16->auth_state.xcbc.xcbc_keys_dma_addr +
        VAR_0), VAR_0, VAR_6);
 FUNC_10(&VAR_13[VAR_17], VAR_9);
 FUNC_5(&VAR_13[VAR_17], VAR_5);
 FUNC_4(&VAR_13[VAR_17], VAR_3);
 FUNC_9(&VAR_13[VAR_17], VAR_1);
 FUNC_8(&VAR_13[VAR_17], VAR_11);
 FUNC_3(&VAR_13[VAR_17]);
 VAR_17++;


 FUNC_2(&VAR_13[VAR_17]);
 FUNC_7(&VAR_13[VAR_17], VAR_4,
       (VAR_16->auth_state.xcbc.xcbc_keys_dma_addr +
        2 * VAR_0), VAR_0, VAR_6);
 FUNC_10(&VAR_13[VAR_17], VAR_10);
 FUNC_5(&VAR_13[VAR_17], VAR_5);
 FUNC_4(&VAR_13[VAR_17], VAR_3);
 FUNC_9(&VAR_13[VAR_17], VAR_1);
 FUNC_8(&VAR_13[VAR_17], VAR_11);
 FUNC_3(&VAR_13[VAR_17]);
 VAR_17++;

 *VAR_14 = VAR_17;
}
