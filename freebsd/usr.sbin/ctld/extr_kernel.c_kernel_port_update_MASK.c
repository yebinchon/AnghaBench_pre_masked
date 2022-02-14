
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct target {TYPE_1__** t_luns; } ;
struct port {int p_ctl_port; struct target* p_target; } ;
struct ctl_lun_map {int plun; scalar_t__ lun; int port; } ;
struct TYPE_2__ {scalar_t__ l_ctl_lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,struct ctl_lun_map*) ;
 int FUNC_1 (char*) ;

int
FUNC_2(struct port *VAR_4, struct port *VAR_5)
{
 struct ctl_lun_map VAR_6;
 struct target *VAR_7 = VAR_4->p_target;
 struct target *VAR_8 = VAR_5->p_target;
 int VAR_9, VAR_10;
 uint32_t VAR_11;


 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_6.port = VAR_4->p_ctl_port;
  VAR_6.plun = VAR_10;
  if (VAR_7->t_luns[VAR_10] == ((void*)0))
   VAR_6.lun = VAR_2;
  else
   VAR_6.lun = VAR_7->t_luns[VAR_10]->l_ctl_lun;
  if (VAR_8->t_luns[VAR_10] == ((void*)0))
   VAR_11 = VAR_2;
  else
   VAR_11 = VAR_8->t_luns[VAR_10]->l_ctl_lun;
  if (VAR_6.lun == VAR_11)
   continue;
  VAR_9 = FUNC_0(VAR_3, VAR_0, &VAR_6);
  if (VAR_9 != 0)
   FUNC_1("CTL_LUN_MAP ioctl failed");
 }
 return (0);
}
