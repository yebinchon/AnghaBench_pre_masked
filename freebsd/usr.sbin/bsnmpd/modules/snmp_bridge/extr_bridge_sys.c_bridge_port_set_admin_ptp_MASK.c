
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifdrv {int ifd_len; int ifd_cmd; struct ifbreq* ifd_data; int ifd_name; } ;
struct ifbreq {int ifbr_ifsflags; int ifbr_ifsname; } ;
struct bridge_port {int admin_ptp; char const* p_name; } ;
typedef int b_req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (struct ifbreq*,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ,struct ifdrv*) ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (int ,char*,char const*,int ) ;

int
FUNC_5(const char *VAR_9, struct bridge_port *VAR_10,
    uint32_t VAR_11)
{
 struct ifdrv VAR_12;
 struct ifbreq VAR_13;

 if (VAR_10->admin_ptp == VAR_11)
  return (0);

 FUNC_0(&VAR_13, sizeof(VAR_13));
 FUNC_3(VAR_12.ifd_name, VAR_9, sizeof(VAR_12.ifd_name));
 VAR_12.ifd_len = sizeof(VAR_13);
 VAR_12.ifd_data = &VAR_13;
 FUNC_3(VAR_13.ifbr_ifsname, VAR_10->p_name, sizeof(VAR_13.ifbr_ifsname));
 VAR_12.ifd_cmd = VAR_0;

 if (FUNC_1(VAR_8, VAR_5, &VAR_12) < 0) {
  FUNC_4(VAR_4, "get member %s param: ioctl(BRDGGIFFLGS) "
      "failed: %s", VAR_10->p_name, FUNC_2(VAR_7));
  return (-1);
 }

 switch (VAR_11) {
  case 128:
   VAR_13.ifbr_ifsflags &= ~VAR_2;
   VAR_13.ifbr_ifsflags |= VAR_3;
   break;
  case 129:
   VAR_13.ifbr_ifsflags &= ~VAR_2;
   VAR_13.ifbr_ifsflags &= ~VAR_3;
   break;
  case 130:
   VAR_13.ifbr_ifsflags |= VAR_2;
   break;
 }

 VAR_12.ifd_cmd = VAR_1;
 if (FUNC_1(VAR_8, VAR_6, &VAR_12) < 0) {
  FUNC_4(VAR_4, "set member %s param: ioctl(BRDGSIFFLGS) "
      "failed: %s", VAR_10->p_name, FUNC_2(VAR_7));
  return (-1);
 }

 VAR_10->admin_ptp = VAR_11;
 return (0);
}
