
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct gendisk {char* (* devnode ) (struct gendisk*,int *) ;} ;
struct device {int dummy; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 struct gendisk* FUNC_0 (struct device*) ;
 char* FUNC_1 (struct gendisk*,int *) ;

__attribute__((used)) static char *FUNC_2(struct device *VAR_0, umode_t *VAR_1,
      kuid_t *VAR_2, kgid_t *VAR_3)
{
 struct gendisk *VAR_4 = FUNC_0(VAR_0);

 if (VAR_4->devnode)
  return VAR_4->devnode(VAR_4, VAR_1);
 return ((void*)0);
}
