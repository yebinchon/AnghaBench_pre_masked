
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct ifdrv {int ifd_len; int ifd_cmd; struct ifbreq* ifd_data; int ifd_name; } ;
struct ifbreq {scalar_t__ ifbr_priority; int ifbr_ifsname; } ;
struct bridge_port {char const* p_name; scalar_t__ priority; } ;
typedef scalar_t__ int32_t ;
typedef int b_req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,struct ifdrv*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int ,char*,char const*,int ) ;

int
FUNC_4(const char *VAR_5, struct bridge_port *VAR_6,
 int32_t VAR_7)
{
 struct ifdrv VAR_8;
 struct ifbreq VAR_9;

 FUNC_2(VAR_8.ifd_name, VAR_5, sizeof(VAR_8.ifd_name));
 VAR_8.ifd_len = sizeof(VAR_9);
 VAR_8.ifd_data = &VAR_9;
 FUNC_2(VAR_9.ifbr_ifsname, VAR_6->p_name, sizeof(VAR_9.ifbr_ifsname));

 VAR_9.ifbr_priority = (uint8_t) VAR_7;
 VAR_8.ifd_cmd = VAR_0;

 if (FUNC_0(VAR_4, VAR_2, &VAR_8) < 0) {
  FUNC_3(VAR_1, "set member %s param: ioctl(BRDGSIFPRIO) "
      "failed: %s", VAR_6->p_name, FUNC_1(VAR_3));
  return (-1);
 }

 VAR_6->priority = VAR_7;
 return (0);
}
