
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct qedr_ucontext {int dev; int mm_list_lock; int mm_head; } ;
struct TYPE_2__ {scalar_t__ len; scalar_t__ phy_addr; } ;
struct qedr_mm {TYPE_1__ key; int entry; } ;


 int FUNC_0 (int ,int ,char*,unsigned long long,unsigned long,struct qedr_ucontext*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct qedr_mm* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_7(struct qedr_ucontext *VAR_4, u64 VAR_5,
    unsigned long VAR_6)
{
 struct qedr_mm *VAR_7;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->key.phy_addr = VAR_5;







 VAR_7->key.len = FUNC_6(VAR_6, VAR_2);
 FUNC_1(&VAR_7->entry);

 FUNC_4(&VAR_4->mm_list_lock);
 FUNC_3(&VAR_7->entry, &VAR_4->mm_head);
 FUNC_5(&VAR_4->mm_list_lock);

 FUNC_0(VAR_4->dev, VAR_3,
   "added (addr=0x%llx,len=0x%lx) for ctx=%p\n",
   (unsigned long long)VAR_7->key.phy_addr,
   (unsigned long)VAR_7->key.len, VAR_4);

 return 0;
}
