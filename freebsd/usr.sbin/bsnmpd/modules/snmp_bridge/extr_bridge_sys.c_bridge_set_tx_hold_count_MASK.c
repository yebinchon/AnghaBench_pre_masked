
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifdrv {int ifd_len; int ifd_cmd; struct ifbrparam* ifd_data; int ifd_name; } ;
struct ifbrparam {scalar_t__ ifbrp_txhc; } ;
struct bridge_if {scalar_t__ tx_hold_count; int bif_name; } ;
typedef scalar_t__ int32_t ;
typedef int b_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,struct ifdrv*) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,int ) ;

int
FUNC_4(struct bridge_if *VAR_8, int32_t VAR_9)
{
 struct ifdrv VAR_10;
 struct ifbrparam VAR_11;

 if (VAR_9 < VAR_5 || VAR_9 > VAR_4)
  return (-1);

 FUNC_2(VAR_10.ifd_name, VAR_8->bif_name, VAR_1);
 VAR_10.ifd_len = sizeof(VAR_11);
 VAR_10.ifd_data = &VAR_11;
 VAR_11.ifbrp_txhc = VAR_9;
 VAR_10.ifd_cmd = VAR_0;

 if (FUNC_0(VAR_7, VAR_3, &VAR_10) < 0) {
  FUNC_3(VAR_2, "set bridge param: ioctl(BRDGSTXHC) "
      "failed: %s", FUNC_1(VAR_6));
  return (-1);
 }

 VAR_8->tx_hold_count = VAR_11.ifbrp_txhc;
 return (0);
}
