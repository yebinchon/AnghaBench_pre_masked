
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ifdrv {int ifd_len; int ifd_cmd; struct ifbreq* ifd_data; int ifd_name; } ;
struct ifbreq {int ifbr_ifsflags; int ifbr_ifsname; } ;
struct bridge_port {scalar_t__ priv_set; char const* p_name; } ;
typedef int b_req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct ifbreq*,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ,int ,struct ifdrv*) ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (int ,char*,char const*,int ) ;

int
FUNC_5(const char *VAR_11, struct bridge_port *VAR_12,
    uint32_t VAR_13)
{
 struct ifdrv VAR_14;
 struct ifbreq VAR_15;

 if (VAR_12->priv_set == VAR_13)
  return (0);

 FUNC_0(&VAR_15, sizeof(VAR_15));
 FUNC_3(VAR_14.ifd_name, VAR_11, sizeof(VAR_14.ifd_name));
 VAR_14.ifd_len = sizeof(VAR_15);
 VAR_14.ifd_data = &VAR_15;
 FUNC_3(VAR_15.ifbr_ifsname, VAR_12->p_name, sizeof(VAR_15.ifbr_ifsname));
 VAR_14.ifd_cmd = VAR_0;

 if (FUNC_1(VAR_10, VAR_4, &VAR_14) < 0) {
  FUNC_4(VAR_3, "get member %s param: ioctl(BRDGGIFFLGS) "
      "failed: %s", VAR_12->p_name, FUNC_2(VAR_9));
  return (-1);
 }

 if (VAR_13 == VAR_8)
  VAR_15.ifbr_ifsflags |= VAR_2;
 else if (VAR_13 == VAR_7)
  VAR_15.ifbr_ifsflags &= ~VAR_2;
 else
  return (VAR_6);

 VAR_14.ifd_cmd = VAR_1;
 if (FUNC_1(VAR_10, VAR_5, &VAR_14) < 0) {
  FUNC_4(VAR_3, "set member %s param: ioctl(BRDGSIFFLGS) "
      "failed: %s", VAR_12->p_name, FUNC_2(VAR_9));
  return (-1);
 }

 VAR_12->priv_set = VAR_13;

 return (0);
}
