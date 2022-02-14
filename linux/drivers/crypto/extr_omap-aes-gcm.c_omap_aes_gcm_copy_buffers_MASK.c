
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct scatterlist {int dummy; } ;
struct omap_aes_dev {int flags; int total; int assoc_len; unsigned int authsize; struct scatterlist* out_sg; void* out_sg_len; struct scatterlist* in_sg; void* in_sg_len; struct scatterlist out_sgl; struct scatterlist* orig_out; struct scatterlist* in_sgl; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int assoclen; int cryptlen; struct scatterlist* dst; struct scatterlist* src; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct omap_aes_dev*) ;
 int FUNC_4 (struct scatterlist**,int,int ,struct scatterlist*,int,int ,int*) ;
 void* FUNC_5 (struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_6 (struct scatterlist*,int) ;
 void* FUNC_7 (struct scatterlist*,int) ;

__attribute__((used)) static int FUNC_8(struct omap_aes_dev *VAR_10,
         struct aead_request *VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 struct crypto_aead *VAR_17 = FUNC_2(VAR_11);
 unsigned int VAR_18 = FUNC_1(VAR_17);
 struct scatterlist *VAR_19, VAR_20[2];
 int VAR_21;
 u16 VAR_22;

 VAR_15 = VAR_11->assoclen;
 VAR_14 = VAR_11->cryptlen;

 if (VAR_10->flags & VAR_5)
  VAR_15 -= 8;

 if (!(VAR_10->flags & VAR_2))
  VAR_14 -= VAR_18;

 VAR_12 = FUNC_0(VAR_15, VAR_0);
 VAR_13 = FUNC_0(VAR_14, VAR_0);

 VAR_21 = !!(VAR_15 && VAR_14);

 FUNC_3(VAR_10);

 FUNC_6(VAR_10->in_sgl, VAR_21 + 1);
 if (VAR_15) {
  VAR_19 = VAR_11->src;
  VAR_16 = FUNC_4(&VAR_19, VAR_15,
        VAR_0, VAR_10->in_sgl,
        VAR_6 |
        VAR_9 |
        VAR_8,
        VAR_1,
        &VAR_10->flags);
 }

 if (VAR_14) {
  VAR_19 = FUNC_5(VAR_20, VAR_11->src, VAR_11->assoclen);

  VAR_16 = FUNC_4(&VAR_19, VAR_14,
        VAR_0, &VAR_10->in_sgl[VAR_21],
        VAR_6 |
        VAR_9 |
        VAR_8,
        VAR_3,
        &VAR_10->flags);
 }

 VAR_10->in_sg = VAR_10->in_sgl;
 VAR_10->total = VAR_14;
 VAR_10->assoc_len = VAR_15;
 VAR_10->authsize = VAR_18;

 VAR_10->out_sg = VAR_11->dst;
 VAR_10->orig_out = VAR_11->dst;

 VAR_10->out_sg = FUNC_5(VAR_20, VAR_11->dst, VAR_15);

 VAR_22 = 0;
 if (VAR_11->src == VAR_11->dst || VAR_10->out_sg == VAR_20)
  VAR_22 |= VAR_7;

 VAR_16 = FUNC_4(&VAR_10->out_sg, VAR_14,
       VAR_0, &VAR_10->out_sgl,
       VAR_22,
       VAR_4, &VAR_10->flags);
 if (VAR_16)
  return VAR_16;

 VAR_10->in_sg_len = FUNC_7(VAR_10->in_sg, VAR_12 + VAR_13);
 VAR_10->out_sg_len = FUNC_7(VAR_10->out_sg, VAR_13);

 return 0;
}
