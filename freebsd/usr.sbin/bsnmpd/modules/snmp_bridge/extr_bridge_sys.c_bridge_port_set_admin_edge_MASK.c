
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ifdrv {int ifd_len; int ifd_cmd; struct ifbreq* ifd_data; int ifd_name; } ;
struct ifbreq {int ifbr_ifsflags; int ifbr_ifsname; } ;
struct bridge_port {scalar_t__ admin_edge; char const* p_name; } ;
typedef int b_req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct ifbreq*,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ,int ,struct ifdrv*) ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (int ,char*,char const*,int ) ;

int
FUNC_5(const char *VAR_10, struct bridge_port *VAR_11,
    uint32_t VAR_12)
{
 struct ifdrv VAR_13;
 struct ifbreq VAR_14;

 if (VAR_11->admin_edge == VAR_12)
  return (0);

 FUNC_0(&VAR_14, sizeof(VAR_14));
 FUNC_3(VAR_13.ifd_name, VAR_10, sizeof(VAR_13.ifd_name));
 VAR_13.ifd_len = sizeof(VAR_14);
 VAR_13.ifd_data = &VAR_14;
 FUNC_3(VAR_14.ifbr_ifsname, VAR_11->p_name, sizeof(VAR_14.ifbr_ifsname));
 VAR_13.ifd_cmd = VAR_0;

 if (FUNC_1(VAR_9, VAR_5, &VAR_13) < 0) {
  FUNC_4(VAR_4, "get member %s param: ioctl(BRDGGIFFLGS) "
      "failed: %s", VAR_11->p_name, FUNC_2(VAR_8));
  return (-1);
 }

 if (VAR_12 == VAR_7) {
  VAR_14.ifbr_ifsflags &= ~VAR_2;
  VAR_14.ifbr_ifsflags |= VAR_3;
 } else
  VAR_14.ifbr_ifsflags &= ~VAR_3;

 VAR_13.ifd_cmd = VAR_1;
 if (FUNC_1(VAR_9, VAR_6, &VAR_13) < 0) {
  FUNC_4(VAR_4, "set member %s param: ioctl(BRDGSIFFLGS) "
      "failed: %s", VAR_11->p_name, FUNC_2(VAR_8));
  return (-1);
 }

 VAR_11->admin_edge = VAR_12;

 return (0);
}
