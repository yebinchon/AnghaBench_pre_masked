
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void)
{
 u_short VAR_7 = 0;

 if (FUNC_3()) {




  if (VAR_5 != 0 || VAR_6 != 0)
   FUNC_2("PV devices cannot be disabled in PV guests\n");
  return;
 }

 if (FUNC_0(VAR_0) != VAR_1)
  return;

 if (VAR_5 == 0) {
  if (VAR_4)
   FUNC_2("XEN: disabling emulated disks\n");
  VAR_7 |= VAR_2;
 }
 if (VAR_6 == 0) {
  if (VAR_4)
   FUNC_2("XEN: disabling emulated nics\n");
  VAR_7 |= VAR_3;
 }

 if (VAR_7 != 0)
  FUNC_1(VAR_0, VAR_7);
}
