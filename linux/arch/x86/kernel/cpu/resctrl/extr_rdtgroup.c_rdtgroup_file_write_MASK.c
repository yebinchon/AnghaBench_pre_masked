
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rftype {int (* write ) (struct kernfs_open_file*,char*,size_t,int ) ;} ;
struct kernfs_open_file {TYPE_1__* kn; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {struct rftype* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct kernfs_open_file*,char*,size_t,int ) ;

__attribute__((used)) static ssize_t FUNC_1(struct kernfs_open_file *VAR_1, char *VAR_2,
       size_t VAR_3, loff_t VAR_4)
{
 struct rftype *VAR_5 = VAR_1->kn->priv;

 if (VAR_5->write)
  return VAR_5->write(VAR_1, VAR_2, VAR_3, VAR_4);

 return -VAR_0;
}
