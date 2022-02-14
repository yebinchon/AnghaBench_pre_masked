
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_slave {unsigned long t_send_delay; unsigned long t_echo_delay; int link; struct fsi_master* master; } ;
struct fsi_master {int (* link_config ) (struct fsi_master*,int ,unsigned long,unsigned long) ;} ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fsi_slave*) ;
 scalar_t__ FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (struct fsi_master*,int ,unsigned long,unsigned long) ;
 struct fsi_slave* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct fsi_slave *VAR_6 = FUNC_3(VAR_2);
 struct fsi_master *VAR_7 = VAR_6->master;
 unsigned long VAR_8;
 int VAR_9;

 if (FUNC_1(VAR_4, 0, &VAR_8) < 0)
  return -VAR_0;

 if (VAR_8 < 1 || VAR_8 > 16)
  return -VAR_0;

 if (!VAR_7->link_config)
  return -VAR_1;


 VAR_6->t_send_delay = VAR_8;
 VAR_6->t_echo_delay = VAR_8;

 VAR_9 = FUNC_0(VAR_6);
 if (VAR_9 < 0)
  return VAR_9;
 if (VAR_7->link_config)
  VAR_7->link_config(VAR_7, VAR_6->link,
        VAR_6->t_send_delay,
        VAR_6->t_echo_delay);

 return VAR_5;
}
