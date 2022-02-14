
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scomp_scratch {int lock; int dst; int src; } ;
struct crypto_scomp {int dummy; } ;
struct crypto_acomp {int dummy; } ;
struct acomp_req {int dlen; int dst; int slen; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void** FUNC_0 (struct acomp_req*) ;
 void** FUNC_1 (struct crypto_acomp*) ;
 struct crypto_acomp* FUNC_2 (struct acomp_req*) ;
 int FUNC_3 (struct crypto_scomp*,int ,int ,int ,int *,void*) ;
 int FUNC_4 (struct crypto_scomp*,int ,int ,int ,int *,void*) ;
 struct scomp_scratch* FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,int ,int) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct acomp_req *VAR_5, int VAR_6)
{
 struct crypto_acomp *VAR_7 = FUNC_2(VAR_5);
 void **VAR_8 = FUNC_1(VAR_7);
 struct crypto_scomp *VAR_9 = *VAR_8;
 void **VAR_10 = FUNC_0(VAR_5);
 struct scomp_scratch *VAR_11;
 int VAR_12;

 if (!VAR_5->src || !VAR_5->slen || VAR_5->slen > VAR_3)
  return -VAR_0;

 if (VAR_5->dst && !VAR_5->dlen)
  return -VAR_0;

 if (!VAR_5->dlen || VAR_5->dlen > VAR_3)
  VAR_5->dlen = VAR_3;

 VAR_11 = FUNC_5(&VAR_4);
 FUNC_8(&VAR_11->lock);

 FUNC_6(VAR_11->src, VAR_5->src, 0, VAR_5->slen, 0);
 if (VAR_6)
  VAR_12 = FUNC_3(VAR_9, VAR_11->src, VAR_5->slen,
         VAR_11->dst, &VAR_5->dlen, *VAR_10);
 else
  VAR_12 = FUNC_4(VAR_9, VAR_11->src, VAR_5->slen,
           VAR_11->dst, &VAR_5->dlen, *VAR_10);
 if (!VAR_12) {
  if (!VAR_5->dst) {
   VAR_5->dst = FUNC_7(VAR_5->dlen, VAR_2, ((void*)0));
   if (!VAR_5->dst) {
    VAR_12 = -VAR_1;
    goto out;
   }
  }
  FUNC_6(VAR_11->dst, VAR_5->dst, 0, VAR_5->dlen,
      1);
 }
out:
 FUNC_9(&VAR_11->lock);
 return VAR_12;
}
