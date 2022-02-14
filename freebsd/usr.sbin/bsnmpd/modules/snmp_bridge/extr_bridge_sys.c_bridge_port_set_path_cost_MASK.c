
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifdrv {int ifd_len; int ifd_cmd; struct ifbreq* ifd_data; int ifd_name; } ;
struct ifbreq {scalar_t__ ifbr_path_cost; int ifbr_ifsname; } ;
struct bridge_port {char const* p_name; scalar_t__ admin_path_cost; } ;
typedef scalar_t__ int32_t ;
typedef int b_req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,struct ifdrv*) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int ,char*,char const*,int ) ;

int
FUNC_4(const char *VAR_7, struct bridge_port *VAR_8,
 int32_t VAR_9)
{
 struct ifdrv VAR_10;
 struct ifbreq VAR_11;

 if (VAR_9 < VAR_3 ||
     VAR_9 > VAR_4)
  return (-2);

 FUNC_2(VAR_10.ifd_name, VAR_7, sizeof(VAR_10.ifd_name));
 VAR_10.ifd_len = sizeof(VAR_11);
 VAR_10.ifd_data = &VAR_11;
 FUNC_2(VAR_11.ifbr_ifsname, VAR_8->p_name, sizeof(VAR_11.ifbr_ifsname));

 VAR_11.ifbr_path_cost = VAR_9;
 VAR_10.ifd_cmd = VAR_0;

 if (FUNC_0(VAR_6, VAR_2, &VAR_10) < 0) {
  FUNC_3(VAR_1, "set member %s param: ioctl(BRDGSIFCOST) "
      "failed: %s", VAR_8->p_name, FUNC_1(VAR_5));
  return (-1);
 }

 VAR_8->admin_path_cost = VAR_9;

 return (0);
}
