
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct revmap_entry {int dummy; } ;
struct page {int dummy; } ;
struct kvm_hpt_info {unsigned long order; unsigned long virt; int cma; struct revmap_entry* rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long FUNC_0 (int,unsigned long) ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 struct page* FUNC_3 (unsigned long) ;
 int FUNC_4 (struct page*,int) ;
 int FUNC_5 (void*,int ,unsigned long) ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (int ) ;
 struct revmap_entry* FUNC_8 (int ) ;

int FUNC_9(struct kvm_hpt_info *VAR_9, u32 VAR_10)
{
 unsigned long VAR_11 = 0;
 int VAR_12 = 0;
 struct page *VAR_13 = ((void*)0);
 struct revmap_entry *VAR_14;
 unsigned long VAR_15;

 if ((VAR_10 < VAR_5) || (VAR_10 > VAR_4))
  return -VAR_0;

 VAR_13 = FUNC_3(1ul << (VAR_10 - VAR_3));
 if (VAR_13) {
  VAR_11 = (unsigned long)FUNC_7(FUNC_6(VAR_13));
  FUNC_5((void *)VAR_11, 0, (1ul << VAR_10));
  VAR_12 = 1;
 }

 if (!VAR_11)
  VAR_11 = FUNC_0(VAR_2|VAR_8|VAR_7
           |VAR_6, VAR_10 - VAR_3);

 if (!VAR_11)
  return -VAR_1;


 VAR_15 = 1ul << (VAR_10 - 4);


 VAR_14 = FUNC_8(FUNC_1(VAR_15, sizeof(struct revmap_entry)));
 if (!VAR_14) {
  if (VAR_12)
   FUNC_4(VAR_13, 1 << (VAR_10 - VAR_3));
  else
   FUNC_2(VAR_11, VAR_10 - VAR_3);
  return -VAR_1;
 }

 VAR_9->order = VAR_10;
 VAR_9->virt = VAR_11;
 VAR_9->cma = VAR_12;
 VAR_9->rev = VAR_14;

 return 0;
}
