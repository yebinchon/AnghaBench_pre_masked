
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vm_area_struct {int vm_end; int vm_start; int vm_pgoff; int vm_flags; } ;
struct ib_ucontext {int device; } ;
struct efa_ucontext {int dummy; } ;
struct efa_dev {int ibdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct efa_dev*,struct efa_ucontext*,struct vm_area_struct*,int,int) ;
 int FUNC_1 (int *,char*,...) ;
 struct efa_dev* FUNC_2 (int ) ;
 struct efa_ucontext* FUNC_3 (struct ib_ucontext*) ;

int FUNC_4(struct ib_ucontext *VAR_6,
      struct vm_area_struct *VAR_7)
{
 struct efa_ucontext *VAR_8 = FUNC_3(VAR_6);
 struct efa_dev *VAR_9 = FUNC_2(VAR_6->device);
 u64 VAR_10 = VAR_7->vm_end - VAR_7->vm_start;
 u64 VAR_11 = VAR_7->vm_pgoff << VAR_2;

 FUNC_1(&VAR_9->ibdev,
    "start %#lx, end %#lx, length = %#llx, key = %#llx\n",
    VAR_7->vm_start, VAR_7->vm_end, VAR_10, VAR_11);

 if (VAR_10 % VAR_3 != 0 || !(VAR_7->vm_flags & VAR_5)) {
  FUNC_1(&VAR_9->ibdev,
     "length[%#llx] is not page size aligned[%#lx] or VM_SHARED is not set [%#lx]\n",
     VAR_10, VAR_3, VAR_7->vm_flags);
  return -VAR_0;
 }

 if (VAR_7->vm_flags & VAR_4) {
  FUNC_1(&VAR_9->ibdev, "Mapping executable pages is not permitted\n");
  return -VAR_1;
 }

 return FUNC_0(VAR_9, VAR_8, VAR_7, VAR_11, VAR_10);
}
