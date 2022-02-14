
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifdrv {int ifd_len; int ifd_cmd; struct ifbrparam* ifd_data; int ifd_name; } ;
struct ifbrparam {int ifbrp_maxage; int ifbrp_hellotime; int ifbrp_fwddelay; int ifbrp_csize; int ifbrp_ctime; int ifbrp_cexceeded; int ifbrp_prio; } ;
struct bridge_if {int bridge_max_age; int bridge_hello_time; int bridge_fwd_delay; int max_addrs; int age_time; int lrnt_drops; int priority; int bif_name; } ;
typedef int b_param ;


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
 scalar_t__ FUNC_0 (int ,int ,struct ifdrv*) ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_4(struct bridge_if *VAR_12)
{
 struct ifdrv VAR_13;
 struct ifbrparam VAR_14;

 FUNC_2(VAR_13.ifd_name, VAR_12->bif_name, VAR_7);
 VAR_13.ifd_len = sizeof(VAR_14);
 VAR_13.ifd_data = &VAR_14;


 VAR_13.ifd_cmd = VAR_4;
 if (FUNC_0(VAR_11, VAR_9, &VAR_13) < 0) {
  FUNC_3(VAR_8, "update bridge: ioctl(BRDGGPRI) failed: %s",
      FUNC_1(VAR_10));
  return (-1);
 }

 VAR_12->priority = VAR_14.ifbrp_prio;


 VAR_13.ifd_cmd = VAR_3;
 if (FUNC_0(VAR_11, VAR_9, &VAR_13) < 0) {
  FUNC_3(VAR_8, "update bridge: ioctl(BRDGGMA) failed: %s",
      FUNC_1(VAR_10));
  return (-1);
 }


 VAR_12->bridge_max_age = 100 * VAR_14.ifbrp_maxage;


 VAR_13.ifd_cmd = VAR_2;
 if (FUNC_0(VAR_11, VAR_9, &VAR_13) < 0) {
  FUNC_3(VAR_8, "update bridge: ioctl(BRDGGHT) failed: %s",
      FUNC_1(VAR_10));
  return (-1);
 }
 VAR_12->bridge_hello_time = 100 * VAR_14.ifbrp_hellotime;


 VAR_13.ifd_cmd = VAR_1;
 if (FUNC_0(VAR_11, VAR_9, &VAR_13) < 0) {
  FUNC_3(VAR_8, "update bridge: ioctl(BRDGGFD) failed: %s",
      FUNC_1(VAR_10));
  return (-1);
 }
 VAR_12->bridge_fwd_delay = 100 * VAR_14.ifbrp_fwddelay;


 VAR_13.ifd_cmd = VAR_5;
 if (FUNC_0(VAR_11, VAR_9, &VAR_13) < 0) {
  FUNC_3(VAR_8, "update bridge: ioctl(BRDGGRTE) failed: %s",
      FUNC_1(VAR_10));
  return (-1);
 }
 VAR_12->lrnt_drops = VAR_14.ifbrp_cexceeded;


 VAR_13.ifd_cmd = VAR_6;
 if (FUNC_0(VAR_11, VAR_9, &VAR_13) < 0) {
  FUNC_3(VAR_8, "update bridge: ioctl(BRDGGTO) failed: %s",
      FUNC_1(VAR_10));
  return (-1);
 }
 VAR_12->age_time = VAR_14.ifbrp_ctime;


 VAR_13.ifd_cmd = VAR_0;
 if (FUNC_0(VAR_11, VAR_9, &VAR_13) < 0) {
  FUNC_3(VAR_8, "update bridge: ioctl(BRDGGCACHE) "
      "failed: %s", FUNC_1(VAR_10));
  return (-1);
 }
 VAR_12->max_addrs = VAR_14.ifbrp_csize;

 return (0);
}
