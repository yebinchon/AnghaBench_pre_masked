
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef int vm_prot_t ;
typedef int vm_ooffset_t ;
typedef int vm_offset_t ;
typedef int * vm_object_t ;
typedef int vm_map_t ;
struct thread {int dummy; } ;
struct cdevsw {int dummy; } ;
struct cdev {int dummy; } ;
typedef int objtype_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 struct thread* VAR_3 ;
 struct cdevsw* FUNC_0 (struct cdev*,int*) ;
 int FUNC_1 (struct cdev*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct thread*,scalar_t__,int ,int *,int*,struct cdev*,struct cdevsw*,int *,int **) ;
 int FUNC_4 (int ,int *,scalar_t__,int ,int ,int,int *,int ,scalar_t__,struct thread*) ;
 int FUNC_5 (struct thread*,scalar_t__,int ,int *,int*,void*,int *,int **,scalar_t__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,scalar_t__) ;

int
FUNC_8(vm_map_t VAR_4, vm_offset_t *VAR_5, vm_size_t VAR_6, vm_prot_t VAR_7,
 vm_prot_t VAR_8, int VAR_9,
 objtype_t VAR_10, void *VAR_11,
 vm_ooffset_t VAR_12)
{
 vm_object_t VAR_13;
 struct thread *VAR_14 = VAR_3;
 int VAR_15;
 boolean_t VAR_16;

 if (VAR_6 == 0)
  return (VAR_0);

 VAR_6 = FUNC_2(VAR_6);
 VAR_13 = ((void*)0);
 VAR_16 = VAR_2;




 switch (VAR_10) {
 case 129: {
  struct cdevsw *VAR_17;
  struct cdev *VAR_18;
  int VAR_19;

  VAR_18 = VAR_11;
  VAR_17 = FUNC_0(VAR_18, &VAR_19);
  if (VAR_17 == ((void*)0))
   return (VAR_1);
  VAR_15 = FUNC_3(VAR_14, VAR_6, VAR_7, &VAR_8, &VAR_9, VAR_18,
      VAR_17, &VAR_12, &VAR_13);
  FUNC_1(VAR_18, VAR_19);
  break;
 }
 case 128:
  VAR_15 = FUNC_5(VAR_14, VAR_6, VAR_7, &VAR_8, &VAR_9,
      VAR_11, &VAR_12, &VAR_13, &VAR_16);
  break;
 case 130:
  if (VAR_11 == ((void*)0)) {
   VAR_15 = 0;
   break;
  }

 default:
  VAR_15 = VAR_0;
  break;
 }
 if (VAR_15)
  return (VAR_15);

 VAR_15 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_13,
     VAR_12, VAR_16, VAR_14);
 if (VAR_15 != 0 && VAR_13 != ((void*)0)) {




  if (VAR_16)
   FUNC_7(VAR_13, 0, VAR_6);
  FUNC_6(VAR_13);
 }
 return (VAR_15);
}
