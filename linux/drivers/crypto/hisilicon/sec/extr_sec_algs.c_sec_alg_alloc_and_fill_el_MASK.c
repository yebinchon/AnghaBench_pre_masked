
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_bd_info {int w0; int w2; void* cipher_destin_addr_hi; void* cipher_destin_addr_lo; void* data_addr_hi; void* data_addr_lo; int w1; int w3; } ;
struct sec_request_el {int el_length; int dma_in; int in; int dma_out; struct scatterlist* sgl_out; int out; struct scatterlist* sgl_in; struct sec_bd_info req; } ;
struct sec_dev_info {int dummy; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 struct sec_request_el* FUNC_0 (int) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct sec_request_el*) ;
 struct sec_request_el* FUNC_2 (int,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct sec_bd_info*,struct sec_bd_info*,int) ;
 int FUNC_5 (int *,int *,struct scatterlist*,int,struct sec_dev_info*) ;
 int FUNC_6 (int ,int ,struct sec_dev_info*) ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static struct sec_request_el
*FUNC_8(struct sec_bd_info *VAR_17, int VAR_18,
      int VAR_19, bool VAR_20,
      struct scatterlist *VAR_21, int VAR_22,
      struct scatterlist *VAR_23, int VAR_24,
      struct sec_dev_info *VAR_25)
{
 struct sec_request_el *VAR_26;
 struct sec_bd_info *VAR_27;
 int VAR_28;

 VAR_26 = FUNC_2(sizeof(*VAR_26), VAR_1);
 if (!VAR_26)
  return FUNC_0(-VAR_0);
 VAR_26->el_length = VAR_19;
 VAR_27 = &VAR_26->req;
 FUNC_4(VAR_27, VAR_17, sizeof(*VAR_27));

 VAR_27->w0 &= ~VAR_2;
 if (VAR_18)
  VAR_27->w0 |= VAR_16 << VAR_3;
 else
  VAR_27->w0 |= VAR_15 << VAR_3;

 VAR_27->w0 &= ~VAR_4;
 VAR_27->w0 |= ((VAR_19 >> 16) << VAR_5) &
  VAR_4;

 VAR_27->w0 &= ~VAR_6;
 VAR_27->w0 |= ((VAR_19 >> 20) << VAR_7) &
  VAR_6;


 VAR_27->w2 = ((1 << VAR_13) & VAR_12) |
  ((VAR_19 << VAR_11) &
   VAR_10);

 VAR_27->w3 &= ~VAR_14;
 VAR_27->w1 |= VAR_9;

 VAR_26->sgl_in = VAR_21;

 VAR_28 = FUNC_5(&VAR_26->in, &VAR_26->dma_in, VAR_26->sgl_in,
     VAR_22, VAR_25);
 if (VAR_28)
  goto err_free_el;

 VAR_27->data_addr_lo = FUNC_3(VAR_26->dma_in);
 VAR_27->data_addr_hi = FUNC_7(VAR_26->dma_in);

 if (VAR_20) {
  VAR_26->sgl_out = VAR_23;
  VAR_28 = FUNC_5(&VAR_26->out, &VAR_26->dma_out,
      VAR_26->sgl_out,
      VAR_24, VAR_25);
  if (VAR_28)
   goto err_free_hw_sgl_in;

  VAR_27->w0 |= VAR_8;
  VAR_27->cipher_destin_addr_lo = FUNC_3(VAR_26->dma_out);
  VAR_27->cipher_destin_addr_hi = FUNC_7(VAR_26->dma_out);

 } else {
  VAR_27->w0 &= ~VAR_8;
  VAR_27->cipher_destin_addr_lo = FUNC_3(VAR_26->dma_in);
  VAR_27->cipher_destin_addr_hi = FUNC_7(VAR_26->dma_in);
 }

 return VAR_26;

err_free_hw_sgl_in:
 FUNC_6(VAR_26->in, VAR_26->dma_in, VAR_25);
err_free_el:
 FUNC_1(VAR_26);

 return FUNC_0(VAR_28);
}
