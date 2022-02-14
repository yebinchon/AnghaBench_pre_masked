
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_uiom_reg {unsigned long va; int offset; size_t length; int writable; int owning_mm; int chunk_list; struct usnic_uiom_pd* pd; } ;
struct usnic_uiom_pd {int lock; int root; } ;


 int VAR_0 ;
 struct usnic_uiom_reg* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (size_t) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_3 (struct usnic_uiom_reg*) ;
 struct usnic_uiom_reg* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,unsigned long,unsigned long,int) ;
 int FUNC_9 (unsigned long,unsigned long,int ,int ,int *,int *) ;
 int FUNC_10 (unsigned long,size_t,int,int,struct usnic_uiom_reg*) ;
 int FUNC_11 (int *,unsigned long,unsigned long,int ) ;
 int FUNC_12 (int *,struct usnic_uiom_reg*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,struct usnic_uiom_pd*) ;

struct usnic_uiom_reg *FUNC_16(struct usnic_uiom_pd *VAR_6,
      unsigned long VAR_7, size_t VAR_8,
      int VAR_9, int VAR_10)
{
 struct usnic_uiom_reg *VAR_11;
 unsigned long VAR_12, VAR_13, VAR_14;
 unsigned long VAR_15;
 int VAR_16, VAR_17;
 FUNC_1(VAR_5);
 VAR_9 = 1;

 VAR_12 = VAR_7 & VAR_3;
 VAR_16 = VAR_7 & ~VAR_3;
 VAR_15 = FUNC_2(VAR_8 + VAR_16) >> VAR_4;
 VAR_13 = (VAR_7 & VAR_3) >> VAR_4;
 VAR_14 = VAR_13 + VAR_15 - 1;

 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return FUNC_0(-VAR_0);

 VAR_11->va = VAR_12;
 VAR_11->offset = VAR_16;
 VAR_11->length = VAR_8;
 VAR_11->writable = VAR_9;
 VAR_11->pd = VAR_6;

 VAR_17 = FUNC_10(VAR_7, VAR_8, VAR_9, VAR_10,
       VAR_11);
 if (VAR_17) {
  FUNC_8("Failed get_pages vpn [0x%lx,0x%lx] err %d\n",
    VAR_13, VAR_14, VAR_17);
  goto out_free_uiomr;
 }

 FUNC_6(&VAR_6->lock);
 VAR_17 = FUNC_9(VAR_13, VAR_14,
      (VAR_9) ? VAR_2 : 0,
      VAR_2,
      &VAR_6->root,
      &VAR_5);
 if (VAR_17) {
  FUNC_8("Failed disjoint interval vpn [0x%lx,0x%lx] err %d\n",
      VAR_13, VAR_14, VAR_17);
  goto out_put_pages;
 }

 VAR_17 = FUNC_12(&VAR_5, VAR_11);
 if (VAR_17) {
  FUNC_8("Failed map interval vpn [0x%lx,0x%lx] err %d\n",
      VAR_13, VAR_14, VAR_17);
  goto out_put_intervals;

 }

 VAR_17 = FUNC_11(&VAR_6->root, VAR_13, VAR_14,
     (VAR_9) ? VAR_2 : 0);
 if (VAR_17) {
  FUNC_8("Failed insert interval vpn [0x%lx,0x%lx] err %d\n",
      VAR_13, VAR_14, VAR_17);
  goto out_unmap_intervals;
 }

 FUNC_13(&VAR_5);
 FUNC_7(&VAR_6->lock);

 return VAR_11;

out_unmap_intervals:
 FUNC_15(&VAR_5, VAR_6);
out_put_intervals:
 FUNC_13(&VAR_5);
out_put_pages:
 FUNC_14(&VAR_11->chunk_list, 0);
 FUNC_7(&VAR_6->lock);
 FUNC_5(VAR_11->owning_mm);
out_free_uiomr:
 FUNC_3(VAR_11);
 return FUNC_0(VAR_17);
}
