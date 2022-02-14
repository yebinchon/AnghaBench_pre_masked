
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long use_srq; } ;
struct srpt_port {int enabled; int mutex; TYPE_1__ port_attrib; struct srpt_device* sdev; } ;
struct srpt_device {int sdev_mutex; } ;
struct se_portal_group {int dummy; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct se_portal_group* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct srpt_port*,int) ;
 struct srpt_port* FUNC_5 (struct se_portal_group*) ;
 int FUNC_6 (struct srpt_device*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_7(struct config_item *VAR_1,
          const char *VAR_2, size_t VAR_3)
{
 struct se_portal_group *VAR_4 = FUNC_0(VAR_1);
 struct srpt_port *VAR_5 = FUNC_5(VAR_4);
 struct srpt_device *VAR_6 = VAR_5->sdev;
 unsigned long VAR_7;
 bool VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_2, 0, &VAR_7);
 if (VAR_9 < 0)
  return VAR_9;
 if (VAR_7 != !!VAR_7)
  return -VAR_0;

 VAR_9 = FUNC_2(&VAR_6->sdev_mutex);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_9 = FUNC_2(&VAR_5->mutex);
 if (VAR_9 < 0)
  goto unlock_sdev;
 VAR_8 = VAR_5->enabled;

 FUNC_4(VAR_5, 0);
 VAR_5->port_attrib.use_srq = VAR_7;
 FUNC_6(VAR_6, VAR_5->port_attrib.use_srq);
 FUNC_4(VAR_5, VAR_8);
 VAR_9 = VAR_3;
 FUNC_3(&VAR_5->mutex);
unlock_sdev:
 FUNC_3(&VAR_6->sdev_mutex);

 return VAR_9;
}
