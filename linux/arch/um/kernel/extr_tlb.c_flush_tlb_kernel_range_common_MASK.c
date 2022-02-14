
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct host_vm_change {int index; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 unsigned long FUNC_0 (unsigned long,int ) ;
 struct host_vm_change FUNC_1 (struct mm_struct*,int,int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (unsigned long,int,unsigned long,int ,struct host_vm_change*) ;
 int FUNC_3 (unsigned long,unsigned long,int ,struct host_vm_change*) ;
 int FUNC_4 (unsigned long,unsigned long,struct host_vm_change*) ;
 int FUNC_5 (struct host_vm_change*,int ,int) ;
 struct mm_struct VAR_5 ;
 int FUNC_6 (char*,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (struct mm_struct*,unsigned long) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int * FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int * FUNC_15 (int *,unsigned long) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int * FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static int FUNC_21(unsigned long VAR_6, unsigned long VAR_7)
{
 struct mm_struct *VAR_8;
 pgd_t *VAR_9;
 pud_t *VAR_10;
 pmd_t *VAR_11;
 pte_t *VAR_12;
 unsigned long VAR_13, VAR_14;
 int VAR_15 = 0, VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;
 struct host_vm_change VAR_19;

 VAR_8 = &VAR_5;
 VAR_19 = FUNC_1(VAR_8, VAR_17, VAR_18);
 for (VAR_13 = VAR_6; VAR_13 < VAR_7;) {
  VAR_9 = FUNC_8(VAR_8, VAR_13);
  if (!FUNC_9(*VAR_9)) {
   VAR_14 = FUNC_0(VAR_13, VAR_2);
   if (VAR_14 > VAR_7)
    VAR_14 = VAR_7;
   if (FUNC_7(*VAR_9)) {
    VAR_15 = 1;
    VAR_16 = FUNC_4(VAR_13, VAR_14 - VAR_13, &VAR_19);
    if (VAR_16 < 0)
     FUNC_6("munmap failed, errno = %d\n",
           -VAR_16);
   }
   VAR_13 = VAR_14;
   continue;
  }

  VAR_10 = FUNC_19(VAR_9, VAR_13);
  if (!FUNC_20(*VAR_10)) {
   VAR_14 = FUNC_0(VAR_13, VAR_4);
   if (VAR_14 > VAR_7)
    VAR_14 = VAR_7;
   if (FUNC_18(*VAR_10)) {
    VAR_15 = 1;
    VAR_16 = FUNC_4(VAR_13, VAR_14 - VAR_13, &VAR_19);
    if (VAR_16 < 0)
     FUNC_6("munmap failed, errno = %d\n",
           -VAR_16);
   }
   VAR_13 = VAR_14;
   continue;
  }

  VAR_11 = FUNC_11(VAR_10, VAR_13);
  if (!FUNC_12(*VAR_11)) {
   VAR_14 = FUNC_0(VAR_13, VAR_3);
   if (VAR_14 > VAR_7)
    VAR_14 = VAR_7;
   if (FUNC_10(*VAR_11)) {
    VAR_15 = 1;
    VAR_16 = FUNC_4(VAR_13, VAR_14 - VAR_13, &VAR_19);
    if (VAR_16 < 0)
     FUNC_6("munmap failed, errno = %d\n",
           -VAR_16);
   }
   VAR_13 = VAR_14;
   continue;
  }

  VAR_12 = FUNC_15(VAR_11, VAR_13);
  if (!FUNC_16(*VAR_12) || FUNC_13(*VAR_12)) {
   VAR_15 = 1;
   VAR_16 = FUNC_4(VAR_13, VAR_1, &VAR_19);
   if (VAR_16 < 0)
    FUNC_6("munmap failed, errno = %d\n",
          -VAR_16);
   if (FUNC_16(*VAR_12))
    VAR_16 = FUNC_2(VAR_13, FUNC_17(*VAR_12) & VAR_0,
            VAR_1, 0, &VAR_19);
  }
  else if (FUNC_14(*VAR_12)) {
   VAR_15 = 1;
   VAR_16 = FUNC_3(VAR_13, VAR_1, 0, &VAR_19);
  }
  VAR_13 += VAR_1;
 }
 if (!VAR_16)
  VAR_16 = FUNC_5(&VAR_19, VAR_19.index, 1);

 if (VAR_16 < 0)
  FUNC_6("flush_tlb_kernel failed, errno = %d\n", VAR_16);
 return VAR_15;
}
