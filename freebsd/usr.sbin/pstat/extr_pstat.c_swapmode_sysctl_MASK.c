
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xswdev {scalar_t__ xsw_version; scalar_t__ xsw_dev; int xsw_flags; int xsw_nblks; int xsw_used; } ;
struct kvm_swap {int ksw_flags; int ksw_total; int ksw_used; int ksw_devname; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct kvm_swap*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int,char*,...) ;
 int FUNC_7 (int*,size_t,struct xswdev*,size_t*,int *,int ) ;
 int FUNC_8 (char*,int*,size_t*) ;

__attribute__((used)) static void
FUNC_9(void)
{
 struct kvm_swap VAR_5;
 struct xswdev VAR_6;
 size_t VAR_7, VAR_8;
 int VAR_9[16], VAR_10;

 FUNC_4();
 VAR_7 = sizeof VAR_9 / sizeof VAR_9[0];
 if (FUNC_8("vm.swap_info", VAR_9, &VAR_7) == -1)
  FUNC_1(1, "sysctlnametomib()");
 for (VAR_10 = 0; ; ++VAR_10) {
  VAR_9[VAR_7] = VAR_10;
  VAR_8 = sizeof VAR_6;
  if (FUNC_7(VAR_9, VAR_7 + 1, &VAR_6, &VAR_8, ((void*)0), 0) == -1)
   break;
  if (VAR_6.xsw_version != VAR_3)
   FUNC_2(1, "xswdev version mismatch");
  if (VAR_6.xsw_dev == VAR_1)
   FUNC_6(VAR_5.ksw_devname, sizeof VAR_5.ksw_devname,
       "<NFSfile>");
  else
   FUNC_6(VAR_5.ksw_devname, sizeof VAR_5.ksw_devname,
       "/dev/%s", FUNC_0(VAR_6.xsw_dev, VAR_2));
  VAR_5.ksw_used = VAR_6.xsw_used;
  VAR_5.ksw_total = VAR_6.xsw_nblks;
  VAR_5.ksw_flags = VAR_6.xsw_flags;
  FUNC_3(&VAR_5);
 }
 if (VAR_4 != VAR_0)
  FUNC_1(1, "sysctl()");
 FUNC_5();
}
