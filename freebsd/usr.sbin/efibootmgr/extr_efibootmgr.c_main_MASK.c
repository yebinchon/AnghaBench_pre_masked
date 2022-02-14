
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bmgr_opts_t ;
struct TYPE_3__ {char* label; int bootnum; int verbose; int timeout; scalar_t__ set_timeout; scalar_t__ del_timeout; scalar_t__ delete; scalar_t__ delete_bootnext; scalar_t__ set_bootnext; int * order; scalar_t__ set_active; scalar_t__ set_inactive; scalar_t__ has_bootnum; int dry_run; int env; int kernel; int loader; scalar_t__ create; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,int ,int ,int ,int,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_10 (int,char**) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;

int
FUNC_14(int VAR_1, char *VAR_2[])
{

 if (!FUNC_3())
  FUNC_4(1, "efi variables not supported on this system. root? kldload efirt?");

 FUNC_9(&VAR_0, 0, sizeof (bmgr_opts_t));
 FUNC_10(VAR_1, VAR_2);
 FUNC_12();

 if (VAR_0.create)



  FUNC_8(VAR_0.label ? VAR_0.label : "",
      VAR_0.loader, VAR_0.kernel, VAR_0.env, VAR_0.dry_run,
      VAR_0.has_bootnum ? VAR_0.bootnum : -1, VAR_0.set_active);
 else if (VAR_0.set_active || VAR_0.set_inactive )
  FUNC_5(VAR_0.bootnum, VAR_0.set_active);
 else if (VAR_0.order != ((void*)0))
  FUNC_13(VAR_0.order);
 else if (VAR_0.set_bootnext)
  FUNC_6(VAR_0.bootnum);
 else if (VAR_0.delete_bootnext)
  FUNC_0();
 else if (VAR_0.delete)
  FUNC_1(VAR_0.bootnum);
 else if (VAR_0.del_timeout)
  FUNC_2();
 else if (VAR_0.set_timeout)
  FUNC_7(VAR_0.timeout);

 FUNC_11(VAR_0.verbose);
}
