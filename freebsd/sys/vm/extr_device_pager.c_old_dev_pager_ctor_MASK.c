
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_prot_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int vm_memattr_t ;
typedef scalar_t__ u_short ;
struct ucred {int dummy; } ;
struct cdevsw {scalar_t__ (* d_mmap ) (struct cdev*,scalar_t__,scalar_t__*,int,int *) ;} ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct cdev*) ;
 struct cdevsw* FUNC_3 (struct cdev*,int*) ;
 int FUNC_4 (struct cdev*,int) ;
 scalar_t__ FUNC_5 (struct cdev*,scalar_t__,scalar_t__*,int,int *) ;

__attribute__((used)) static int
FUNC_6(void *VAR_3, vm_ooffset_t VAR_4, vm_prot_t VAR_5,
    vm_ooffset_t VAR_6, struct ucred *VAR_7, u_short *VAR_8)
{
 struct cdev *VAR_9;
 struct cdevsw *VAR_10;
 vm_memattr_t VAR_11;
 vm_ooffset_t VAR_12;
 vm_paddr_t VAR_13;
 unsigned int VAR_14;
 int VAR_15;




 VAR_9 = VAR_3;
 VAR_10 = FUNC_3(VAR_9, &VAR_15);
 if (VAR_10 == ((void*)0))
  return (VAR_1);







 VAR_14 = FUNC_0(VAR_4);
 VAR_13 = 0;
 for (VAR_12 = VAR_6; VAR_14--; VAR_12 += VAR_2) {
  if (VAR_10->d_mmap(VAR_9, VAR_12, &VAR_13, (int)VAR_5, &VAR_11) != 0) {
   FUNC_4(VAR_9, VAR_15);
   return (VAR_0);
  }
 }

 FUNC_2(VAR_9);
 FUNC_4(VAR_9, VAR_15);
 *VAR_8 = FUNC_1(VAR_13) - FUNC_0(VAR_12 - VAR_2);
 return (0);
}
