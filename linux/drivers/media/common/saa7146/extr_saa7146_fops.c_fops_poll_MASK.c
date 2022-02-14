
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int lock; } ;
struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;
typedef int __poll_t ;


 int FUNC_0 (struct file*,struct poll_table_struct*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct video_device* FUNC_3 (struct file*) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_0, struct poll_table_struct *VAR_1)
{
 struct video_device *VAR_2 = FUNC_3(VAR_0);
 __poll_t VAR_3;

 FUNC_1(VAR_2->lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_2->lock);
 return VAR_3;
}
