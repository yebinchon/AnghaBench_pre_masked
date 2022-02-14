
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_queue {int dummy; } ;
struct n2_crypto_chunk {int arr_len; unsigned long dest_paddr; unsigned long iv_paddr; TYPE_1__* arr; } ;
struct n2_cipher_context {int key; int enc_type; } ;
struct cwq_initial_entry {unsigned long src_addr; unsigned long auth_key_addr; unsigned long auth_iv_addr; unsigned long final_auth_state_addr; unsigned long enc_key_addr; unsigned long enc_iv_addr; unsigned long dest_addr; scalar_t__ control; } ;
struct crypto_tfm {int dummy; } ;
struct TYPE_2__ {unsigned long src_paddr; scalar_t__ src_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int ,int ,int,int,int,int,int) ;
 struct n2_cipher_context* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (char*,int) ;
 struct cwq_initial_entry* FUNC_4 (struct spu_queue*,int) ;
 struct cwq_initial_entry* FUNC_5 (struct spu_queue*,struct cwq_initial_entry*) ;
 scalar_t__ FUNC_6 (struct spu_queue*,struct cwq_initial_entry*) ;

__attribute__((used)) static int FUNC_7(struct crypto_tfm *VAR_6, struct n2_crypto_chunk *VAR_7,
       struct spu_queue *VAR_8, bool VAR_9)
{
 struct n2_cipher_context *VAR_10 = FUNC_2(VAR_6);
 struct cwq_initial_entry *VAR_11;
 bool VAR_12;
 int VAR_13;

 VAR_11 = FUNC_4(VAR_8, VAR_7->arr_len);
 if (!VAR_11) {
  FUNC_3("queue_alloc() of %d fails\n",
   VAR_7->arr_len);
  return -VAR_1;
 }

 VAR_12 = (VAR_7->dest_paddr == VAR_7->arr[0].src_paddr);

 VAR_11->control = FUNC_1(VAR_7->arr[0].src_len,
      0, VAR_10->enc_type, 0, 0,
      0, 1, 0, VAR_9,
      VAR_4 |
      (VAR_12 ? VAR_5 : 0));
 VAR_11->src_addr = VAR_7->arr[0].src_paddr;
 VAR_11->auth_key_addr = 0UL;
 VAR_11->auth_iv_addr = 0UL;
 VAR_11->final_auth_state_addr = 0UL;
 VAR_11->enc_key_addr = FUNC_0(&VAR_10->key);
 VAR_11->enc_iv_addr = VAR_7->iv_paddr;
 VAR_11->dest_addr = (VAR_12 ? 0UL : VAR_7->dest_paddr);

 for (VAR_13 = 1; VAR_13 < VAR_7->arr_len; VAR_13++) {
  VAR_11 = FUNC_5(VAR_8, VAR_11);

  VAR_11->control = VAR_7->arr[VAR_13].src_len - 1;
  VAR_11->src_addr = VAR_7->arr[VAR_13].src_paddr;
  VAR_11->auth_key_addr = 0UL;
  VAR_11->auth_iv_addr = 0UL;
  VAR_11->final_auth_state_addr = 0UL;
  VAR_11->enc_key_addr = 0UL;
  VAR_11->enc_iv_addr = 0UL;
  VAR_11->dest_addr = 0UL;
 }
 VAR_11->control |= VAR_0;

 return (FUNC_6(VAR_8, VAR_11) != VAR_3) ? -VAR_2 : 0;
}
