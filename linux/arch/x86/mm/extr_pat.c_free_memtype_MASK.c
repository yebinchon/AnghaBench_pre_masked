
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct memtype {int dummy; } ;
struct TYPE_4__ {int pid; int comm; } ;
struct TYPE_3__ {scalar_t__ (* is_untracked_pat_range ) (scalar_t__,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct memtype*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct memtype*) ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (char*,int ,int ,scalar_t__,scalar_t__) ;
 struct memtype* FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_3 ;

int FUNC_12(u64 VAR_4, u64 VAR_5)
{
 int VAR_6 = -VAR_0;
 int VAR_7;
 struct memtype *VAR_8;

 if (!FUNC_4())
  return 0;

 VAR_4 = FUNC_8(VAR_4);
 VAR_5 = FUNC_8(VAR_5);


 if (VAR_3.is_untracked_pat_range(VAR_4, VAR_5))
  return 0;

 VAR_7 = FUNC_5(VAR_4, VAR_5);
 if (VAR_7 == 1) {

  VAR_6 = FUNC_2(VAR_4, VAR_5);

  return VAR_6;
 } else if (VAR_7 < 0) {
  return -VAR_0;
 }

 FUNC_9(&VAR_2);
 VAR_8 = FUNC_7(VAR_4, VAR_5);
 FUNC_10(&VAR_2);

 if (FUNC_0(VAR_8)) {
  FUNC_6("x86/PAT: %s:%d freeing invalid memtype [mem %#010Lx-%#010Lx]\n",
   VAR_1->comm, VAR_1->pid, VAR_4, VAR_5 - 1);
  return -VAR_0;
 }

 FUNC_3(VAR_8);

 FUNC_1("free_memtype request [mem %#010Lx-%#010Lx]\n", VAR_4, VAR_5 - 1);

 return 0;
}
