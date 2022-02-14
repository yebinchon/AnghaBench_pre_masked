
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifdrv {int ifd_len; int ifd_cmd; struct ifbrparam* ifd_data; int ifd_name; } ;
struct ifbrparam {int ifbrp_fwddelay; } ;
struct bridge_if {int bridge_fwd_delay; int bif_name; } ;
typedef int int32_t ;
typedef int b_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,struct ifdrv*) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,int ) ;

int
FUNC_5(struct bridge_if *VAR_6, int32_t VAR_7)
{
 struct ifdrv VAR_8;
 struct ifbrparam VAR_9;

 FUNC_3(VAR_8.ifd_name, VAR_6->bif_name, VAR_1);
 VAR_8.ifd_len = sizeof(VAR_9);
 VAR_8.ifd_data = &VAR_9;
 VAR_9.ifbrp_fwddelay = FUNC_1(VAR_7);
 VAR_8.ifd_cmd = VAR_0;

 if (FUNC_0(VAR_5, VAR_3, &VAR_8) < 0) {
  FUNC_4(VAR_2, "set bridge param: ioctl(BRDGSFD) "
      "failed: %s", FUNC_2(VAR_4));
  return (-1);
 }

 VAR_6->bridge_fwd_delay = VAR_9.ifbrp_fwddelay;
 return (0);
}
