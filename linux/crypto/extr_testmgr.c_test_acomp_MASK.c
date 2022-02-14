
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct crypto_wait {int dummy; } ;
struct crypto_acomp {int dummy; } ;
struct comp_testvec {int inlen; int outlen; int output; int input; } ;
struct acomp_req {int dlen; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct acomp_req* FUNC_0 (struct crypto_acomp*) ;
 int FUNC_1 (struct acomp_req*) ;
 int FUNC_2 (struct acomp_req*,int ,int ,struct crypto_wait*) ;
 int FUNC_3 (struct acomp_req*,struct scatterlist*,struct scatterlist*,int,unsigned int) ;
 int FUNC_4 (struct acomp_req*) ;
 int FUNC_5 (struct acomp_req*) ;
 int FUNC_6 (struct crypto_acomp*) ;
 int FUNC_7 (struct crypto_wait*) ;
 int VAR_5 ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int ,struct crypto_wait*) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (unsigned int,int ) ;
 void* FUNC_13 (int ,int,int ) ;
 scalar_t__ FUNC_14 (char*,char*,int) ;
 int FUNC_15 (char*,int ,unsigned int) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (struct scatterlist*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_18(struct crypto_acomp *VAR_6,
         const struct comp_testvec *VAR_7,
        const struct comp_testvec *VAR_8,
        int VAR_9, int VAR_10)
{
 const char *VAR_11 = FUNC_8(FUNC_6(VAR_6));
 unsigned int VAR_12;
 char *VAR_13, *VAR_14;
 int VAR_15;
 struct scatterlist VAR_16, VAR_17;
 struct acomp_req *VAR_18;
 struct crypto_wait VAR_19;

 VAR_13 = FUNC_12(VAR_0, VAR_4);
 if (!VAR_13)
  return -VAR_3;

 VAR_14 = FUNC_12(VAR_0, VAR_4);
 if (!VAR_14) {
  FUNC_11(VAR_13);
  return -VAR_3;
 }

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  unsigned int VAR_20 = VAR_0;
  int VAR_21 = VAR_7[VAR_12].inlen;
  void *VAR_22;

  VAR_22 = FUNC_13(VAR_7[VAR_12].input, VAR_21, VAR_4);
  if (!VAR_22) {
   VAR_15 = -VAR_3;
   goto out;
  }

  FUNC_15(VAR_13, 0, VAR_20);
  FUNC_7(&VAR_19);
  FUNC_17(&VAR_16, VAR_22, VAR_21);
  FUNC_17(&VAR_17, VAR_13, VAR_20);

  VAR_18 = FUNC_0(VAR_6);
  if (!VAR_18) {
   FUNC_16("alg: acomp: request alloc failed for %s\n",
          VAR_11);
   FUNC_11(VAR_22);
   VAR_15 = -VAR_3;
   goto out;
  }

  FUNC_3(VAR_18, &VAR_16, &VAR_17, VAR_21, VAR_20);
  FUNC_2(VAR_18, VAR_1,
        VAR_5, &VAR_19);

  VAR_15 = FUNC_9(FUNC_4(VAR_18), &VAR_19);
  if (VAR_15) {
   FUNC_16("alg: acomp: compression failed on test %d for %s: ret=%d\n",
          VAR_12 + 1, VAR_11, -VAR_15);
   FUNC_11(VAR_22);
   FUNC_1(VAR_18);
   goto out;
  }

  VAR_21 = VAR_18->dlen;
  VAR_20 = VAR_0;
  FUNC_17(&VAR_16, VAR_13, VAR_21);
  FUNC_17(&VAR_17, VAR_14, VAR_20);
  FUNC_7(&VAR_19);
  FUNC_3(VAR_18, &VAR_16, &VAR_17, VAR_21, VAR_20);

  VAR_15 = FUNC_9(FUNC_5(VAR_18), &VAR_19);
  if (VAR_15) {
   FUNC_16("alg: acomp: compression failed on test %d for %s: ret=%d\n",
          VAR_12 + 1, VAR_11, -VAR_15);
   FUNC_11(VAR_22);
   FUNC_1(VAR_18);
   goto out;
  }

  if (VAR_18->dlen != VAR_7[VAR_12].inlen) {
   FUNC_16("alg: acomp: Compression test %d failed for %s: output len = %d\n",
          VAR_12 + 1, VAR_11, VAR_18->dlen);
   VAR_15 = -VAR_2;
   FUNC_11(VAR_22);
   FUNC_1(VAR_18);
   goto out;
  }

  if (FUNC_14(VAR_22, VAR_14, VAR_18->dlen)) {
   FUNC_16("alg: acomp: Compression test %d failed for %s\n",
          VAR_12 + 1, VAR_11);
   FUNC_10(VAR_13, VAR_18->dlen);
   VAR_15 = -VAR_2;
   FUNC_11(VAR_22);
   FUNC_1(VAR_18);
   goto out;
  }

  FUNC_11(VAR_22);
  FUNC_1(VAR_18);
 }

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  unsigned int VAR_23 = VAR_0;
  int VAR_24 = VAR_8[VAR_12].inlen;
  void *VAR_25;

  VAR_25 = FUNC_13(VAR_8[VAR_12].input, VAR_24, VAR_4);
  if (!VAR_25) {
   VAR_15 = -VAR_3;
   goto out;
  }

  FUNC_15(VAR_13, 0, VAR_23);
  FUNC_7(&VAR_19);
  FUNC_17(&VAR_16, VAR_25, VAR_24);
  FUNC_17(&VAR_17, VAR_13, VAR_23);

  VAR_18 = FUNC_0(VAR_6);
  if (!VAR_18) {
   FUNC_16("alg: acomp: request alloc failed for %s\n",
          VAR_11);
   FUNC_11(VAR_25);
   VAR_15 = -VAR_3;
   goto out;
  }

  FUNC_3(VAR_18, &VAR_16, &VAR_17, VAR_24, VAR_23);
  FUNC_2(VAR_18, VAR_1,
        VAR_5, &VAR_19);

  VAR_15 = FUNC_9(FUNC_5(VAR_18), &VAR_19);
  if (VAR_15) {
   FUNC_16("alg: acomp: decompression failed on test %d for %s: ret=%d\n",
          VAR_12 + 1, VAR_11, -VAR_15);
   FUNC_11(VAR_25);
   FUNC_1(VAR_18);
   goto out;
  }

  if (VAR_18->dlen != VAR_8[VAR_12].outlen) {
   FUNC_16("alg: acomp: Decompression test %d failed for %s: output len = %d\n",
          VAR_12 + 1, VAR_11, VAR_18->dlen);
   VAR_15 = -VAR_2;
   FUNC_11(VAR_25);
   FUNC_1(VAR_18);
   goto out;
  }

  if (FUNC_14(VAR_13, VAR_8[VAR_12].output, VAR_18->dlen)) {
   FUNC_16("alg: acomp: Decompression test %d failed for %s\n",
          VAR_12 + 1, VAR_11);
   FUNC_10(VAR_13, VAR_18->dlen);
   VAR_15 = -VAR_2;
   FUNC_11(VAR_25);
   FUNC_1(VAR_18);
   goto out;
  }

  FUNC_11(VAR_25);
  FUNC_1(VAR_18);
 }

 VAR_15 = 0;

out:
 FUNC_11(VAR_14);
 FUNC_11(VAR_13);
 return VAR_15;
}
