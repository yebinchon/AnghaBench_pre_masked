
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int (* drm_ioctl_compat_t ) (struct file*,unsigned int,unsigned long) ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (unsigned int) ;
 long FUNC_2 (struct file*,unsigned int,unsigned long) ;
 int VAR_1 ;
 int FUNC_3 (struct file*,unsigned int,unsigned long) ;
 int FUNC_4 (struct file*,unsigned int,unsigned long) ;
 int FUNC_5 (struct file*,unsigned int,unsigned long) ;

long FUNC_6(struct file *VAR_2, unsigned int VAR_3,
    unsigned long VAR_4)
{
 unsigned int VAR_5 = FUNC_1(VAR_3);
 drm_ioctl_compat_t *VAR_6 = ((void*)0);
 int VAR_7;

 if (VAR_5 < VAR_0)
  return FUNC_2(VAR_2, VAR_3, VAR_4);





 if (VAR_6 != ((void*)0))
  VAR_7 = (*VAR_6)(VAR_2, VAR_3, VAR_4);
 else
  VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_4);

 return VAR_7;
}
