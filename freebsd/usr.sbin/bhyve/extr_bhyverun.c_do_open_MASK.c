
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int dummy; } ;
typedef int cap_rights_t ;
typedef int cap_ioctl_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,int const*,size_t) ;
 int FUNC_2 (int ,int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 () ;
 int VAR_6 ;
 int FUNC_8 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (struct vmctx*) ;
 int * FUNC_11 (size_t*) ;
 struct vmctx* FUNC_12 (char const*) ;
 int FUNC_13 (struct vmctx*) ;
 int FUNC_14 (struct vmctx*,int ,int ,int ,int ) ;

__attribute__((used)) static struct vmctx *
FUNC_15(const char *VAR_10)
{
 struct vmctx *VAR_11;
 int VAR_12;
 bool VAR_13, VAR_14;

 cap_rights_t VAR_15;
 const cap_ioctl_t *VAR_16;
 size_t VAR_17;


 VAR_13 = VAR_14 = 0;

 if (FUNC_7())
  VAR_14 = 1;

 VAR_12 = FUNC_9(VAR_10);
 if (VAR_12) {
  if (VAR_5 == VAR_2) {
   if (VAR_14) {
    VAR_13 = 1;
   } else {




   }
  } else {
   FUNC_8("vm_create");
   FUNC_4(4);
  }
 } else {
  if (!VAR_14) {




   FUNC_5(VAR_8, "virtual machine cannot be booted\n");
   FUNC_4(4);
  }
 }

 VAR_11 = FUNC_12(VAR_10);
 if (VAR_11 == ((void*)0)) {
  FUNC_8("vm_open");
  FUNC_4(4);
 }


 FUNC_0(&VAR_15, VAR_0, VAR_1);
 if (FUNC_2(FUNC_10(VAR_11), &VAR_15) == -1)
  FUNC_3(VAR_3, "Unable to apply rights for sandbox");
 FUNC_11(&VAR_17);
 VAR_16 = FUNC_11(((void*)0));
 if (VAR_16 == ((void*)0))
  FUNC_3(VAR_3, "out of memory");
 if (FUNC_1(FUNC_10(VAR_11), VAR_16, VAR_17) == -1)
  FUNC_3(VAR_3, "Unable to apply rights for sandbox");
 FUNC_6((cap_ioctl_t *)VAR_16);


 if (VAR_13) {
  VAR_12 = FUNC_13(VAR_11);
  if (VAR_12) {
   FUNC_8("vm_reinit");
   FUNC_4(4);
  }
 }
 VAR_12 = FUNC_14(VAR_11, VAR_7, VAR_4, VAR_9, VAR_6);
 if (VAR_12)
  FUNC_3(VAR_3, "vm_set_topology");
 return (VAR_11);
}
