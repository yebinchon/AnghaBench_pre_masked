
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dax_device {TYPE_1__* ops; } ;
typedef int pgoff_t ;
typedef int pfn_t ;
struct TYPE_2__ {long (* direct_access ) (struct dax_device*,int ,long,void**,int *) ;} ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (struct dax_device*) ;
 long FUNC_1 (long,long) ;
 long FUNC_2 (struct dax_device*,int ,long,void**,int *) ;

long FUNC_3(struct dax_device *VAR_3, pgoff_t VAR_4, long VAR_5,
  void **VAR_6, pfn_t *VAR_7)
{
 long VAR_8;

 if (!VAR_3)
  return -VAR_1;

 if (!FUNC_0(VAR_3))
  return -VAR_0;

 if (VAR_5 < 0)
  return VAR_5;

 VAR_8 = VAR_3->ops->direct_access(VAR_3, VAR_4, VAR_5,
   VAR_6, VAR_7);
 if (!VAR_8)
  return -VAR_2;
 return FUNC_1(VAR_8, VAR_5);
}
