
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int initialized; TYPE_2__* driver; } ;
typedef TYPE_1__ git_merge_driver_entry ;
struct TYPE_10__ {int (* initialize ) (TYPE_2__*) ;} ;
typedef TYPE_2__ git_merge_driver ;
struct TYPE_12__ {TYPE_2__ base; } ;
struct TYPE_11__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__ VAR_2 ;
 TYPE_7__ VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 TYPE_5__ VAR_6 ;
 TYPE_1__* FUNC_3 (size_t*,char const*) ;
 int FUNC_4 (TYPE_2__*) ;

git_merge_driver *FUNC_5(const char *VAR_7)
{
 git_merge_driver_entry *VAR_8;
 size_t VAR_9;
 int VAR_10;






 if (VAR_7 == VAR_5)
  return &VAR_3.base;
 else if (VAR_7 == VAR_4)
  return &VAR_2;

 if (FUNC_1(&VAR_6.lock) < 0) {
  FUNC_0(VAR_1, "failed to lock merge driver registry");
  return ((void*)0);
 }

 VAR_8 = FUNC_3(&VAR_9, VAR_7);

 FUNC_2(&VAR_6.lock);

 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_0, "cannot use an unregistered filter");
  return ((void*)0);
 }

 if (!VAR_8->initialized) {
  if (VAR_8->driver->initialize &&
   (VAR_10 = VAR_8->driver->initialize(VAR_8->driver)) < 0)
   return ((void*)0);

  VAR_8->initialized = 1;
 }

 return VAR_8->driver;
}
