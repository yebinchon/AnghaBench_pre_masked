
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct sglist_component {int dummy; } ;
struct pci_dev {int dev; } ;
struct cpt_vf {struct pci_dev* pdev; } ;
struct cpt_request_info {int incnt; int outcnt; int out; int in; } ;
struct cpt_info_buffer {int dlen; void* rptr_baddr; void* out_buffer; int * alternate_caddr; void* dptr_baddr; int * in_buffer; void* scatter_components; void* gather_components; } ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 void* FUNC_2 (int *,void*,int,int ) ;
 scalar_t__ FUNC_3 (int *,void*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,void*,int) ;
 int FUNC_6 (struct cpt_vf*,int ,int,void*) ;

__attribute__((used)) static inline int FUNC_7(struct cpt_vf *VAR_11,
      struct cpt_info_buffer *VAR_12,
      struct cpt_request_info *VAR_13)
{
 u16 VAR_14 = 0, VAR_15 = 0;
 int VAR_16 = 0;
 struct pci_dev *VAR_17 = VAR_11->pdev;

 if (VAR_13->incnt > VAR_8 || VAR_13->outcnt > VAR_9) {
  FUNC_1(&VAR_17->dev, "Request SG components are higher than supported\n");
  VAR_16 = -VAR_4;
  goto scatter_gather_clean;
 }


 VAR_14 = ((VAR_13->incnt + 3) / 4) * sizeof(struct sglist_component);
 VAR_12->gather_components = FUNC_4(VAR_14, VAR_7);
 if (!VAR_12->gather_components) {
  VAR_16 = -VAR_6;
  goto scatter_gather_clean;
 }

 VAR_16 = FUNC_6(VAR_11, VAR_13->in,
        VAR_13->incnt,
        VAR_12->gather_components);
 if (VAR_16) {
  FUNC_1(&VAR_17->dev, "Failed to setup gather list\n");
  VAR_16 = -VAR_3;
  goto scatter_gather_clean;
 }


 VAR_15 = ((VAR_13->outcnt + 3) / 4) * sizeof(struct sglist_component);
 VAR_12->scatter_components = FUNC_4(VAR_15, VAR_7);
 if (!VAR_12->scatter_components) {
  VAR_16 = -VAR_6;
  goto scatter_gather_clean;
 }

 VAR_16 = FUNC_6(VAR_11, VAR_13->out,
        VAR_13->outcnt,
        VAR_12->scatter_components);
 if (VAR_16) {
  FUNC_1(&VAR_17->dev, "Failed to setup gather list\n");
  VAR_16 = -VAR_3;
  goto scatter_gather_clean;
 }


 VAR_12->dlen = VAR_14 + VAR_15 + VAR_10;
 VAR_12->in_buffer = FUNC_4(VAR_12->dlen, VAR_7);
 if (!VAR_12->in_buffer) {
  VAR_16 = -VAR_6;
  goto scatter_gather_clean;
 }

 ((u16 *)VAR_12->in_buffer)[0] = VAR_13->outcnt;
 ((u16 *)VAR_12->in_buffer)[1] = VAR_13->incnt;
 ((u16 *)VAR_12->in_buffer)[2] = 0;
 ((u16 *)VAR_12->in_buffer)[3] = 0;
 *(u64 *)VAR_12->in_buffer = FUNC_0((u64 *)VAR_12->in_buffer);

 FUNC_5(&VAR_12->in_buffer[8], VAR_12->gather_components,
        VAR_14);
 FUNC_5(&VAR_12->in_buffer[8 + VAR_14],
        VAR_12->scatter_components, VAR_15);

 VAR_12->dptr_baddr = FUNC_2(&VAR_17->dev,
       (void *)VAR_12->in_buffer,
       VAR_12->dlen,
       VAR_2);
 if (FUNC_3(&VAR_17->dev, VAR_12->dptr_baddr)) {
  FUNC_1(&VAR_17->dev, "Mapping DPTR Failed %d\n", VAR_12->dlen);
  VAR_16 = -VAR_5;
  goto scatter_gather_clean;
 }


 VAR_12->out_buffer = FUNC_4(VAR_1, VAR_7);
 if (!VAR_12->out_buffer) {
  VAR_16 = -VAR_6;
  goto scatter_gather_clean;
 }

 *((u64 *)VAR_12->out_buffer) = ~((u64)VAR_0);
 VAR_12->alternate_caddr = (u64 *)VAR_12->out_buffer;
 VAR_12->rptr_baddr = FUNC_2(&VAR_17->dev,
       (void *)VAR_12->out_buffer,
       VAR_1,
       VAR_2);
 if (FUNC_3(&VAR_17->dev, VAR_12->rptr_baddr)) {
  FUNC_1(&VAR_17->dev, "Mapping RPTR Failed %d\n",
   VAR_1);
  VAR_16 = -VAR_5;
  goto scatter_gather_clean;
 }

 return 0;

scatter_gather_clean:
 return VAR_16;
}
