
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct loop_device {struct file* lo_backing_file; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct file*,int ) ;

__attribute__((used)) static int FUNC_2(struct loop_device *VAR_2, struct request *VAR_3)
{
 struct file *VAR_4 = VAR_2->lo_backing_file;
 int VAR_5 = FUNC_1(VAR_4, 0);
 if (FUNC_0(VAR_5 && VAR_5 != -VAR_0))
  VAR_5 = -VAR_1;

 return VAR_5;
}
