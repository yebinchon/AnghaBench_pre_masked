
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwpm_sa_data {int flags; int mapped_rem_addr; int mapped_loc_addr; int rem_addr; int loc_addr; } ;
struct iwpm_dev_data {int if_name; int dev_name; } ;
struct iw_cm_id {int mapped; int m_local_addr; int local_addr; int m_remote_addr; int remote_addr; TYPE_1__* device; } ;
struct TYPE_2__ {char* iw_ifname; int iw_driver_flags; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (struct iwpm_sa_data*,int ) ;
 int FUNC_3 (struct iwpm_sa_data*,int ) ;
 int FUNC_4 (int *,int *,int ,int ) ;
 scalar_t__ FUNC_5 (struct iwpm_dev_data*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static int FUNC_9(struct iw_cm_id *VAR_4, bool VAR_5)
{
 const char *VAR_6 = FUNC_0(&VAR_4->device->dev);
 const char *VAR_7 = VAR_4->device->iw_ifname;
 struct iwpm_dev_data VAR_8 = {};
 struct iwpm_sa_data VAR_9;
 int VAR_10;

 if (FUNC_8(VAR_6) >= sizeof(VAR_8.dev_name) ||
     FUNC_8(VAR_7) >= sizeof(VAR_8.if_name))
  return -VAR_0;

 VAR_4->m_local_addr = VAR_4->local_addr;
 VAR_4->m_remote_addr = VAR_4->remote_addr;

 FUNC_7(VAR_8.dev_name, VAR_6);
 FUNC_7(VAR_8.if_name, VAR_7);

 if (FUNC_5(&VAR_8, VAR_3) ||
     !FUNC_6())
  return 0;

 VAR_4->mapped = 1;
 VAR_9.loc_addr = VAR_4->local_addr;
 VAR_9.rem_addr = VAR_4->remote_addr;
 VAR_9.flags = (VAR_4->device->iw_driver_flags & VAR_2) ?
         VAR_1 : 0;
 if (VAR_5)
  VAR_10 = FUNC_2(&VAR_9,
          VAR_3);
 else
  VAR_10 = FUNC_3(&VAR_9, VAR_3);

 if (!VAR_10) {
  VAR_4->m_local_addr = VAR_9.mapped_loc_addr;
  if (VAR_5) {
   VAR_4->m_remote_addr = VAR_9.mapped_rem_addr;
   FUNC_1(&VAR_9.mapped_rem_addr,
          &VAR_4->remote_addr,
          &VAR_4->m_remote_addr);
  }
 }

 return FUNC_4(&VAR_4->local_addr,
       &VAR_4->m_local_addr,
       VAR_3, VAR_9.flags);
}
