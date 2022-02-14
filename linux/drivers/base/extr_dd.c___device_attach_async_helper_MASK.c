
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attach_data {int check_async; int want_async; struct device* dev; } ;
struct device {scalar_t__ parent; int bus; scalar_t__ driver; TYPE_1__* p; } ;
typedef int async_cookie_t ;
struct TYPE_2__ {scalar_t__ dead; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,struct device_attach_data*,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static void FUNC_8(void *VAR_1, async_cookie_t VAR_2)
{
 struct device *VAR_3 = VAR_1;
 struct device_attach_data VAR_4 = {
  .dev = VAR_3,
  .check_async = 1,
  .want_async = 1,
 };

 FUNC_2(VAR_3);







 if (VAR_3->p->dead || VAR_3->driver)
  goto out_unlock;

 if (VAR_3->parent)
  FUNC_5(VAR_3->parent);

 FUNC_0(VAR_3->bus, ((void*)0), &VAR_4, VAR_0);
 FUNC_1(VAR_3, "async probe completed\n");

 FUNC_4(VAR_3);

 if (VAR_3->parent)
  FUNC_6(VAR_3->parent);
out_unlock:
 FUNC_3(VAR_3);

 FUNC_7(VAR_3);
}
