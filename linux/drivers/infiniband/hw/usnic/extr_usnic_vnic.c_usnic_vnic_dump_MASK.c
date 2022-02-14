
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_dev_bar {int len; int vaddr; int bus_addr; } ;
struct usnic_vnic_res_chunk {int cnt; struct usnic_vnic_res** res; } ;
struct usnic_vnic_res {void* owner; int ctrl; int vnic_idx; int type; } ;
struct usnic_vnic {int res_lock; struct usnic_vnic_res_chunk* chunks; } ;


 int FUNC_0 (struct usnic_vnic_res_chunk*) ;
 scalar_t__ FUNC_1 (char*,int,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct vnic_dev_bar* FUNC_4 (struct usnic_vnic*,int ) ;
 int FUNC_5 (struct usnic_vnic*) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct usnic_vnic *VAR_0, char *VAR_1,
   int VAR_2,
   void *VAR_3,
   int (*VAR_4)(void *, char*, int),
   int (*VAR_5)(char *, int),
   int (*VAR_6)(void *, char *, int))
{
 struct usnic_vnic_res_chunk *VAR_7;
 struct usnic_vnic_res *VAR_8;
 struct vnic_dev_bar *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_12 = 0;
 VAR_9 = FUNC_4(VAR_0, 0);
 VAR_12 += FUNC_1(VAR_1 + VAR_12, VAR_2 - VAR_12,
   "VF:%hu BAR0 bus_addr=%pa vaddr=0x%p size=%ld ",
   FUNC_5(VAR_0),
   &VAR_9->bus_addr,
   VAR_9->vaddr, VAR_9->len);
 if (VAR_4)
  VAR_12 += VAR_4(VAR_3, VAR_1 + VAR_12, VAR_2 - VAR_12);
 VAR_12 += FUNC_1(VAR_1 + VAR_12, VAR_2 - VAR_12, "\n");
 VAR_12 += FUNC_1(VAR_1 + VAR_12, VAR_2 - VAR_12,
   "|RES\t|CTRL_PIN\t\t|IN_USE\t");
 if (VAR_5)
  VAR_12 += VAR_5(VAR_1 + VAR_12, VAR_2 - VAR_12);
 VAR_12 += FUNC_1(VAR_1 + VAR_12, VAR_2 - VAR_12, "\n");

 FUNC_2(&VAR_0->res_lock);
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_0->chunks); VAR_10++) {
  VAR_7 = &VAR_0->chunks[VAR_10];
  for (VAR_11 = 0; VAR_11 < VAR_7->cnt; VAR_11++) {
   VAR_8 = VAR_7->res[VAR_11];
   VAR_12 += FUNC_1(VAR_1 + VAR_12, VAR_2 - VAR_12,
     "|%s[%u]\t|0x%p\t|%u\t",
     FUNC_6(VAR_8->type),
     VAR_8->vnic_idx, VAR_8->ctrl, !!VAR_8->owner);
   if (VAR_6) {
    VAR_12 += VAR_6(VAR_8->owner, VAR_1 + VAR_12,
       VAR_2 - VAR_12);
   }
   VAR_12 += FUNC_1(VAR_1 + VAR_12, VAR_2 - VAR_12,
      "\n");
  }
 }
 FUNC_3(&VAR_0->res_lock);
 return VAR_12;
}
