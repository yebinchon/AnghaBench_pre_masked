
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
typedef int u32 ;
struct scatterlist {int dummy; } ;
struct crypto_wait {int dummy; } ;
struct crypto_akcipher {int dummy; } ;
struct akcipher_testvec {int key_len; int param_len; int algo; char* m; unsigned int m_size; char* c; unsigned int c_size; scalar_t__ siggen_sigver_test; scalar_t__ public_key_vec; int params; int key; } ;
struct akcipher_request {unsigned int dst_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 struct akcipher_request* FUNC_1 (struct crypto_akcipher*,int ) ;
 int FUNC_2 (struct akcipher_request*) ;
 int FUNC_3 (struct akcipher_request*,int ,int ,struct crypto_wait*) ;
 int FUNC_4 (struct akcipher_request*,struct scatterlist*,struct scatterlist*,unsigned int,unsigned int) ;
 int FUNC_5 (struct akcipher_request*) ;
 int FUNC_6 (struct akcipher_request*) ;
 unsigned int FUNC_7 (struct crypto_akcipher*) ;
 int FUNC_8 (struct crypto_akcipher*,void*,int) ;
 int FUNC_9 (struct crypto_akcipher*,void*,int) ;
 int FUNC_10 (struct akcipher_request*) ;
 int FUNC_11 (struct akcipher_request*) ;
 int FUNC_12 (struct crypto_wait*) ;
 int VAR_6 ;
 int FUNC_13 (int ,struct crypto_wait*) ;
 int FUNC_14 (void*,unsigned int) ;
 int FUNC_15 (void*) ;
 void* FUNC_16 (int,int ) ;
 void* FUNC_17 (unsigned int,int ) ;
 scalar_t__ FUNC_18 (void*,int ,unsigned int) ;
 scalar_t__ FUNC_19 (char const*,void*,unsigned int) ;
 int FUNC_20 (char*,char const*,unsigned int) ;
 int FUNC_21 (char*,char const*,...) ;
 int FUNC_22 (struct scatterlist*,void*,unsigned int) ;
 int FUNC_23 (struct scatterlist*,int) ;
 int FUNC_24 (struct scatterlist*,char*,unsigned int) ;
 void* FUNC_25 (void*,int) ;
 scalar_t__ FUNC_26 (char**) ;
 int FUNC_27 (char**) ;

__attribute__((used)) static int FUNC_28(struct crypto_akcipher *VAR_7,
        const struct akcipher_testvec *VAR_8)
{
 char *VAR_9[VAR_5];
 struct akcipher_request *VAR_10;
 void *VAR_11 = ((void*)0);
 void *VAR_12 = ((void*)0);
 struct crypto_wait VAR_13;
 unsigned int VAR_14, VAR_15 = 0;
 int VAR_16 = -VAR_2;
 struct scatterlist VAR_17, VAR_18, VAR_19[3];
 const char *VAR_20, *VAR_21;
 unsigned int VAR_22, VAR_23;
 const char *VAR_24;
 u8 *VAR_25, *VAR_26;

 if (FUNC_26(VAR_9))
  return VAR_16;

 VAR_10 = FUNC_1(VAR_7, VAR_3);
 if (!VAR_10)
  goto free_xbuf;

 FUNC_12(&VAR_13);

 VAR_25 = FUNC_16(VAR_8->key_len + sizeof(u32) * 2 + VAR_8->param_len,
        VAR_3);
 if (!VAR_25)
  goto free_xbuf;
 FUNC_20(VAR_25, VAR_8->key, VAR_8->key_len);
 VAR_26 = VAR_25 + VAR_8->key_len;
 VAR_26 = FUNC_25(VAR_26, VAR_8->algo);
 VAR_26 = FUNC_25(VAR_26, VAR_8->param_len);
 FUNC_20(VAR_26, VAR_8->params, VAR_8->param_len);

 if (VAR_8->public_key_vec)
  VAR_16 = FUNC_9(VAR_7, VAR_25, VAR_8->key_len);
 else
  VAR_16 = FUNC_8(VAR_7, VAR_25, VAR_8->key_len);
 if (VAR_16)
  goto free_req;





 VAR_16 = -VAR_2;
 VAR_14 = FUNC_7(VAR_7);
 VAR_11 = FUNC_17(VAR_14, VAR_3);
 if (!VAR_11)
  goto free_req;

 if (!VAR_8->siggen_sigver_test) {
  VAR_20 = VAR_8->m;
  VAR_22 = VAR_8->m_size;
  VAR_21 = VAR_8->c;
  VAR_23 = VAR_8->c_size;
  VAR_24 = "encrypt";
 } else {



  VAR_20 = VAR_8->c;
  VAR_22 = VAR_8->c_size;
  VAR_21 = VAR_8->m;
  VAR_23 = VAR_8->m_size;
  VAR_24 = "verify";
 }

 if (FUNC_0(VAR_22 > VAR_4))
  goto free_all;
 FUNC_20(VAR_9[0], VAR_20, VAR_22);

 FUNC_23(VAR_19, 3);
 FUNC_24(&VAR_19[0], VAR_9[0], 8);
 FUNC_24(&VAR_19[1], VAR_9[0] + 8, VAR_22 - 8);
 if (VAR_8->siggen_sigver_test) {
  if (FUNC_0(VAR_23 > VAR_4))
   goto free_all;
  FUNC_20(VAR_9[1], VAR_21, VAR_23);
  FUNC_24(&VAR_19[2], VAR_9[1], VAR_23);
  FUNC_4(VAR_10, VAR_19, ((void*)0), VAR_22, VAR_23);
 } else {
  FUNC_22(&VAR_18, VAR_11, VAR_14);
  FUNC_4(VAR_10, VAR_19, &VAR_18, VAR_22,
        VAR_14);
 }
 FUNC_3(VAR_10, VAR_0,
          VAR_6, &VAR_13);

 VAR_16 = FUNC_13(VAR_8->siggen_sigver_test ?

         FUNC_11(VAR_10) :

         FUNC_6(VAR_10), &VAR_13);
 if (VAR_16) {
  FUNC_21("alg: akcipher: %s test failed. err %d\n", VAR_24, VAR_16);
  goto free_all;
 }
 if (!VAR_8->siggen_sigver_test) {
  if (VAR_10->dst_len != VAR_23) {
   FUNC_21("alg: akcipher: %s test failed. Invalid output len\n",
          VAR_24);
   VAR_16 = -VAR_1;
   goto free_all;
  }

  if (FUNC_19(VAR_21, VAR_11, VAR_23) != 0) {
   FUNC_21("alg: akcipher: %s test failed. Invalid output\n",
          VAR_24);
   FUNC_14(VAR_11, VAR_23);
   VAR_16 = -VAR_1;
   goto free_all;
  }
 }





 if (VAR_8->public_key_vec) {
  VAR_16 = 0;
  goto free_all;
 }
 VAR_12 = FUNC_17(VAR_14, VAR_3);
 if (!VAR_12) {
  VAR_16 = -VAR_2;
  goto free_all;
 }

 VAR_24 = VAR_8->siggen_sigver_test ? "sign" : "decrypt";
 if (FUNC_0(VAR_23 > VAR_4))
  goto free_all;
 FUNC_20(VAR_9[0], VAR_21, VAR_23);

 FUNC_22(&VAR_17, VAR_9[0], VAR_23);
 FUNC_22(&VAR_18, VAR_12, VAR_14);
 FUNC_12(&VAR_13);
 FUNC_4(VAR_10, &VAR_17, &VAR_18, VAR_23, VAR_14);

 VAR_16 = FUNC_13(VAR_8->siggen_sigver_test ?

         FUNC_10(VAR_10) :

         FUNC_5(VAR_10), &VAR_13);
 if (VAR_16) {
  FUNC_21("alg: akcipher: %s test failed. err %d\n", VAR_24, VAR_16);
  goto free_all;
 }
 VAR_15 = VAR_10->dst_len;
 if (VAR_15 < VAR_22) {
  FUNC_21("alg: akcipher: %s test failed. Invalid output len %u\n",
         VAR_24, VAR_15);
  VAR_16 = -VAR_1;
  goto free_all;
 }

 if (FUNC_18(VAR_12, 0, VAR_15 - VAR_22) ||
     FUNC_19(VAR_20, VAR_12 + VAR_15 - VAR_22, VAR_22)) {
  FUNC_21("alg: akcipher: %s test failed. Invalid output\n", VAR_24);
  FUNC_14(VAR_12, VAR_15);
  VAR_16 = -VAR_1;
 }
free_all:
 FUNC_15(VAR_12);
 FUNC_15(VAR_11);
free_req:
 FUNC_2(VAR_10);
 FUNC_15(VAR_25);
free_xbuf:
 FUNC_27(VAR_9);
 return VAR_16;
}
