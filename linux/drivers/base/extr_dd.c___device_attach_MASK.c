
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attach_data {int check_async; int want_async; scalar_t__ have_async; struct device* dev; } ;
struct device {scalar_t__ parent; int bus; int * driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct device*) ;
 int FUNC_1 (int ,int *,struct device_attach_data*,int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_2, bool VAR_3)
{
 int VAR_4 = 0;

 FUNC_5(VAR_2);
 if (VAR_2->driver) {
  if (FUNC_4(VAR_2)) {
   VAR_4 = 1;
   goto out_unlock;
  }
  VAR_4 = FUNC_3(VAR_2);
  if (VAR_4 == 0)
   VAR_4 = 1;
  else {
   VAR_2->driver = ((void*)0);
   VAR_4 = 0;
  }
 } else {
  struct device_attach_data VAR_5 = {
   .dev = VAR_2,
   .check_async = VAR_3,
   .want_async = 0,
  };

  if (VAR_2->parent)
   FUNC_9(VAR_2->parent);

  VAR_4 = FUNC_1(VAR_2->bus, ((void*)0), &VAR_5,
     VAR_1);
  if (!VAR_4 && VAR_3 && VAR_5.have_async) {







   FUNC_2(VAR_2, "scheduling asynchronous probe\n");
   FUNC_7(VAR_2);
   FUNC_0(VAR_0, VAR_2);
  } else {
   FUNC_8(VAR_2);
  }

  if (VAR_2->parent)
   FUNC_10(VAR_2->parent);
 }
out_unlock:
 FUNC_6(VAR_2);
 return VAR_4;
}
