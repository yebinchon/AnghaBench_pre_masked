
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_prot_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int * vm_object_t ;
struct thread {int td_ucred; } ;
struct cdevsw {int d_flags; int (* d_mmap_single ) (struct cdev*,scalar_t__*,int ,int **,int) ;} ;
struct cdev {int dummy; } ;


 int VAR_0 ;
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
 int FUNC_0 (int ,struct cdev*,int) ;
 int FUNC_1 (struct cdev*,scalar_t__*,int ,int **,int) ;
 int * FUNC_2 (int ,struct cdev*,int ,int,scalar_t__,int ) ;

int
FUNC_3(struct thread *VAR_11, vm_size_t VAR_12, vm_prot_t VAR_13,
    vm_prot_t *VAR_14, int *VAR_15, struct cdev *VAR_16, struct cdevsw *VAR_17,
    vm_ooffset_t *VAR_18, vm_object_t *VAR_19)
{
 vm_object_t VAR_20;
 int VAR_21, VAR_22;

 VAR_22 = *VAR_15;

 if (VAR_17->d_flags & VAR_0) {
  *VAR_19 = ((void*)0);
  *VAR_18 = 0;
  *VAR_14 = VAR_9;
  *VAR_15 |= VAR_4;
  return (0);
 }



 if ((*VAR_14 & VAR_10) == 0 &&
     (VAR_13 & VAR_10) != 0)
  return (VAR_1);
 if (VAR_22 & (VAR_6|VAR_5))
  return (VAR_2);



 VAR_22 |= VAR_7;
 VAR_21 = VAR_17->d_mmap_single(VAR_16, VAR_18, VAR_12, VAR_19, (int)VAR_13);
 if (VAR_21 != VAR_3)
  return (VAR_21);
 VAR_20 = FUNC_2(VAR_8, VAR_16, VAR_12, VAR_13, *VAR_18,
     VAR_11->td_ucred);
 if (VAR_20 == ((void*)0))
  return (VAR_2);
 *VAR_19 = VAR_20;
 *VAR_15 = VAR_22;
 return (0);
}
