
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_ooffset_t ;
typedef TYPE_2__* vm_object_t ;
typedef int vm_memattr_t ;
struct thread {struct file* td_fpop; } ;
struct file {int dummy; } ;
struct cdevsw {int (* d_mmap ) (struct cdev*,int ,int *,int,int*) ;int d_flags; char* d_name; } ;
struct cdev {int dummy; } ;
struct TYPE_17__ {int memattr; struct cdev* handle; } ;
struct TYPE_16__ {int flags; int pindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct thread* VAR_4 ;
 struct cdevsw* FUNC_2 (struct cdev*,int*) ;
 int FUNC_3 (struct cdev*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct cdev*,int ,int *,int,int*) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int FUNC_11 (TYPE_1__*) ;
 TYPE_1__* FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(vm_object_t VAR_5, vm_ooffset_t VAR_6, int VAR_7,
    vm_page_t *VAR_8)
{
 vm_paddr_t VAR_9;
 vm_page_t VAR_10, VAR_11;
 struct cdev *VAR_12;
 struct cdevsw *VAR_13;
 struct file *VAR_14;
 struct thread *VAR_15;
 vm_memattr_t VAR_16, VAR_17;
 int VAR_18, VAR_19;

 VAR_16 = VAR_5->memattr;

 FUNC_1(VAR_5);

 VAR_12 = VAR_5->handle;
 VAR_13 = FUNC_2(VAR_12, &VAR_18);
 if (VAR_13 == ((void*)0)) {
  FUNC_0(VAR_5);
  return (VAR_2);
 }
 VAR_15 = VAR_4;
 VAR_14 = VAR_15->td_fpop;
 VAR_15->td_fpop = ((void*)0);
 VAR_19 = VAR_13->d_mmap(VAR_12, VAR_6, &VAR_9, VAR_7, &VAR_16);
 VAR_15->td_fpop = VAR_14;
 FUNC_3(VAR_12, VAR_18);
 if (VAR_19 != 0) {
  FUNC_5(
     "WARNING: dev_pager_getpage: map function returns error %d", VAR_19);
  FUNC_0(VAR_5);
  return (VAR_2);
 }


 if ((VAR_10 = FUNC_12(VAR_9)) != ((void*)0) &&
     (VAR_17 = FUNC_4(VAR_10)) != VAR_16) {





  if ((VAR_13->d_flags & VAR_0) == 0) {
   FUNC_5("WARNING: Device driver %s has set "
       "\"memattr\" inconsistently (drv %u pmap %u).\n",
       VAR_13->d_name, VAR_16, VAR_17);
  }
  VAR_16 = VAR_17;
 }
 if (((*VAR_8)->flags & VAR_1) != 0) {




  VAR_11 = *VAR_8;
  FUNC_0(VAR_5);
  FUNC_10(VAR_11, VAR_9, VAR_16);
 } else {




  VAR_11 = FUNC_8(VAR_9, VAR_16);
  FUNC_0(VAR_5);
  FUNC_9(VAR_11, VAR_5, (*VAR_8)->pindex, *VAR_8);
  FUNC_7(*VAR_8);
  *VAR_8 = VAR_11;
 }
 FUNC_11(VAR_11);
 return (VAR_3);
}
