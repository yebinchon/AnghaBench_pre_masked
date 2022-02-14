
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kref {int dummy; } ;
struct TYPE_3__ {TYPE_2__* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {struct dentry* d_parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct kref*) ;
 int FUNC_4 (struct kref*,void (*) (struct kref*)) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct file*,int (*) (struct seq_file*,void*),void*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_1, int (*VAR_2)(struct seq_file *, void *),
                  void *VAR_3, struct kref *VAR_4,
    void (*VAR_5)(struct kref *))
{
 struct dentry *VAR_6;
 int VAR_7 = -VAR_0;



 VAR_6 = VAR_1->f_path.dentry->d_parent;

 FUNC_1(FUNC_0(VAR_6));

 if (FUNC_5(VAR_1->f_path.dentry)
 && FUNC_3(VAR_4))
  VAR_7 = 0;
 FUNC_2(FUNC_0(VAR_6));
 if (!VAR_7) {
  VAR_7 = FUNC_6(VAR_1, VAR_2, VAR_3);
  if (VAR_7)
   FUNC_4(VAR_4, VAR_5);
 }
 return VAR_7;
}
