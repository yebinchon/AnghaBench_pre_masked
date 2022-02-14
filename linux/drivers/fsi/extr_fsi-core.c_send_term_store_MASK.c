
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_slave {int id; int link; struct fsi_master* master; } ;
struct fsi_master {int (* term ) (struct fsi_master*,int ,int ) ;} ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct fsi_master*,int ,int ) ;
 struct fsi_slave* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
          struct device_attribute *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 struct fsi_slave *VAR_5 = FUNC_1(VAR_1);
 struct fsi_master *VAR_6 = VAR_5->master;

 if (!VAR_6->term)
  return -VAR_0;

 VAR_6->term(VAR_6, VAR_5->link, VAR_5->id);
 return VAR_4;
}
