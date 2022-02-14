
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifdrv {int ifd_len; scalar_t__ ifd_cmd; int ifbr_ifsname; struct ifdrv* ifd_data; int ifd_name; } ;
struct ifbreq {int ifd_len; scalar_t__ ifd_cmd; int ifbr_ifsname; struct ifbreq* ifd_data; int ifd_name; } ;
struct bridge_port {char const* p_name; scalar_t__ span_enable; } ;
typedef int ifd ;
typedef int b_req ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ifdrv*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,struct ifdrv*) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (int ,char*,char const*,char*,int ) ;

int
FUNC_5(struct bridge_port *VAR_7, const char *VAR_8)
{
 struct ifdrv VAR_9;
 struct ifbreq VAR_10;

 FUNC_0(&VAR_9, sizeof(VAR_9));
 FUNC_0(&VAR_10, sizeof(VAR_10));

 FUNC_3(VAR_9.ifd_name, VAR_8, sizeof(VAR_9.ifd_name));
 VAR_9.ifd_len = sizeof(VAR_10);
 VAR_9.ifd_data = &VAR_10;
 FUNC_3(VAR_10.ifbr_ifsname, VAR_7->p_name, sizeof(VAR_10.ifbr_ifsname));

 if (VAR_7->span_enable == VAR_4)
  VAR_9.ifd_cmd = VAR_1;
 else
  VAR_9.ifd_cmd = VAR_0;

 if (FUNC_1(VAR_6, VAR_3, &VAR_9) < 0) {
  FUNC_4(VAR_2, "%s - add member : ioctl(%s) failed: %s",
      VAR_7->p_name,
      (VAR_9.ifd_cmd == VAR_1 ? "BRDGADDS" : "BRDGADD"),
      FUNC_2(VAR_5));
  return (-1);
 }

 return (0);
}
