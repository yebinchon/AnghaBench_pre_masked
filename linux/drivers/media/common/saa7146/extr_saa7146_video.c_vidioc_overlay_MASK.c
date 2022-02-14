
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 FUNC_0("VIDIOC_OVERLAY on:%d\n", VAR_2);
 if (VAR_2)
  VAR_3 = FUNC_1(VAR_1);
 else
  VAR_3 = FUNC_2(VAR_1);
 return VAR_3;
}
