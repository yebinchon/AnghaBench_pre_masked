
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rdt_resource {unsigned int mon_scale; } ;
struct kernfs_open_file {TYPE_2__* kn; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_6__ {int x86_cache_size; } ;
struct TYPE_5__ {TYPE_1__* parent; } ;
struct TYPE_4__ {struct rdt_resource* priv; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (char*,int ,unsigned int*) ;
 unsigned int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_1(struct kernfs_open_file *VAR_3,
           char *VAR_4, size_t VAR_5, loff_t VAR_6)
{
 struct rdt_resource *VAR_7 = VAR_3->kn->parent->priv;
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_4, 0, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_8 > (VAR_1.x86_cache_size * 1024))
  return -VAR_0;

 VAR_2 = VAR_8 / VAR_7->mon_scale;

 return VAR_5;
}
