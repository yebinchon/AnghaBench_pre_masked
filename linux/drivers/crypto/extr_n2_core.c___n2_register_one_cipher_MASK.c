
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct n2_cipher_tmpl {char* name; char* drv_name; int ablkcipher; int enc_type; int block_size; } ;
struct n2_cipher_context {int dummy; } ;
struct TYPE_2__ {int ablkcipher; } ;
struct crypto_alg {int cra_flags; int cra_ctxsize; int cra_name; int cra_module; int cra_init; TYPE_1__ cra_u; int * cra_type; int cra_blocksize; int cra_priority; int cra_driver_name; } ;
struct n2_cipher_alg {int entry; int enc_type; struct crypto_alg alg; } ;


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
 int FUNC_0 (struct crypto_alg*) ;
 int FUNC_1 (struct n2_cipher_alg*) ;
 struct n2_cipher_alg* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_10 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_8(const struct n2_cipher_tmpl *VAR_11)
{
 struct n2_cipher_alg *VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_5);
 struct crypto_alg *VAR_13;
 int VAR_14;

 if (!VAR_12)
  return -VAR_4;

 VAR_13 = &VAR_12->alg;

 FUNC_7(VAR_13->cra_name, VAR_3, "%s", VAR_11->name);
 FUNC_7(VAR_13->cra_driver_name, VAR_3, "%s-n2", VAR_11->drv_name);
 VAR_13->cra_priority = VAR_6;
 VAR_13->cra_flags = VAR_2 |
    VAR_1 | VAR_0;
 VAR_13->cra_blocksize = VAR_11->block_size;
 VAR_12->enc_type = VAR_11->enc_type;
 VAR_13->cra_ctxsize = sizeof(struct n2_cipher_context);
 VAR_13->cra_type = &VAR_9;
 VAR_13->cra_u.ablkcipher = VAR_11->ablkcipher;
 VAR_13->cra_init = VAR_10;
 VAR_13->cra_module = VAR_7;

 FUNC_3(&VAR_12->entry, &VAR_8);
 VAR_14 = FUNC_0(VAR_13);
 if (VAR_14) {
  FUNC_5("%s alg registration failed\n", VAR_13->cra_name);
  FUNC_4(&VAR_12->entry);
  FUNC_1(VAR_12);
 } else {
  FUNC_6("%s alg registered\n", VAR_13->cra_name);
 }
 return VAR_14;
}
