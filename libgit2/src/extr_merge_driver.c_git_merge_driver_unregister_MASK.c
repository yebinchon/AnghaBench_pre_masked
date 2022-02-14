
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int initialized; TYPE_2__* driver; } ;
typedef TYPE_1__ git_merge_driver_entry ;
struct TYPE_8__ {int lock; int drivers; } ;
struct TYPE_7__ {int (* shutdown ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t) ;
 TYPE_4__ VAR_3 ;
 TYPE_1__* FUNC_5 (size_t*,char const*) ;
 int FUNC_6 (TYPE_2__*) ;

int FUNC_7(const char *VAR_4)
{
 git_merge_driver_entry *VAR_5;
 size_t VAR_6;
 int VAR_7 = 0;

 if (FUNC_2(&VAR_3.lock) < 0) {
  FUNC_1(VAR_2, "failed to lock merge driver registry");
  return -1;
 }

 if ((VAR_5 = FUNC_5(&VAR_6, VAR_4)) == ((void*)0)) {
  FUNC_1(VAR_1, "cannot find merge driver '%s' to unregister",
   VAR_4);
  VAR_7 = VAR_0;
  goto done;
 }

 FUNC_4(&VAR_3.drivers, VAR_6);

 if (VAR_5->initialized && VAR_5->driver->shutdown) {
  VAR_5->driver->shutdown(VAR_5->driver);
  VAR_5->initialized = 0;
 }

 FUNC_0(VAR_5);

done:
 FUNC_3(&VAR_3.lock);
 return VAR_7;
}
