
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dax_operations {int dummy; } ;
struct dax_device {void* private; struct dax_operations const* ops; } ;
typedef int dev_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct dax_device*,char const*) ;
 struct dax_device* FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,scalar_t__,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (char const*) ;
 char* FUNC_7 (char const*,int ) ;
 int FUNC_8 (struct dax_device*) ;

struct dax_device *FUNC_9(void *VAR_5, const char *VAR_6,
  const struct dax_operations *VAR_7, unsigned long VAR_8)
{
 struct dax_device *VAR_9;
 const char *VAR_10;
 dev_t VAR_11;
 int VAR_12;

 VAR_10 = FUNC_7(VAR_6, VAR_1);
 if (VAR_6 && !VAR_10)
  return ((void*)0);

 VAR_12 = FUNC_4(&VAR_4, 0, VAR_2+1, VAR_1);
 if (VAR_12 < 0)
  goto err_minor;

 VAR_11 = FUNC_1(FUNC_0(VAR_3), VAR_12);
 VAR_9 = FUNC_3(VAR_11);
 if (!VAR_9)
  goto err_dev;

 FUNC_2(VAR_9, VAR_10);
 VAR_9->ops = VAR_7;
 VAR_9->private = VAR_5;
 if (VAR_8 & VAR_0)
  FUNC_8(VAR_9);

 return VAR_9;

 err_dev:
 FUNC_5(&VAR_4, VAR_12);
 err_minor:
 FUNC_6(VAR_10);
 return ((void*)0);
}
