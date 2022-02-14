
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drmem_lmb {int flags; int base_addr; int nid; int drc_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned long) ;
 int FUNC_1 (int ,int ,unsigned long) ;
 int FUNC_2 (struct drmem_lmb*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct drmem_lmb*) ;
 int FUNC_5 (struct drmem_lmb*) ;
 int FUNC_6 (struct drmem_lmb*) ;
 unsigned long FUNC_7 () ;
 int FUNC_8 (struct drmem_lmb*) ;

__attribute__((used)) static int FUNC_9(struct drmem_lmb *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 if (VAR_2->flags & VAR_0)
  return -VAR_1;

 VAR_4 = FUNC_8(VAR_2);
 if (VAR_4) {
  FUNC_3(VAR_2->drc_index);
  return VAR_4;
 }

 FUNC_6(VAR_2);
 VAR_3 = FUNC_7();


 VAR_4 = FUNC_0(VAR_2->nid, VAR_2->base_addr, VAR_3);
 if (VAR_4) {
  FUNC_4(VAR_2);
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4) {
  FUNC_1(VAR_2->nid, VAR_2->base_addr, VAR_3);
  FUNC_4(VAR_2);
  FUNC_5(VAR_2);
 } else {
  VAR_2->flags |= VAR_0;
 }

 return VAR_4;
}
