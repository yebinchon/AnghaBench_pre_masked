
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* node; } ;
struct xenbus_device_ivars {char* xd_otherend_path; scalar_t__ xd_state; int xd_lock; TYPE_1__ xd_otherend_watch; scalar_t__ xd_otherend_path_len; } ;
typedef char device_t ;


 int FUNC_0 (char) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char,struct xenbus_device_ivars*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (char,char**,int*) ;
 struct xenbus_device_ivars* FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (char*,int ) ;
 char* FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (char*,char*,char*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (scalar_t__*,int *,int ,char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (char,int ) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;

int
FUNC_15(device_t VAR_8)
{
 device_t *VAR_9;
 struct xenbus_device_ivars *VAR_10;
 int VAR_11, VAR_12, VAR_13;
 char *VAR_14;





 if (FUNC_2(VAR_8, &VAR_9, &VAR_12) == 0) {
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   if (FUNC_4(VAR_9[VAR_11]) == VAR_0)
    continue;

   if (VAR_7) {
    FUNC_0(VAR_9[VAR_11]);
    continue;
   }

   VAR_10 = FUNC_3(VAR_9[VAR_11]);

   FUNC_14(&VAR_10->xd_otherend_watch);
   FUNC_12(VAR_9[VAR_11], VAR_6);





   VAR_13 = FUNC_1(VAR_8, VAR_10);
   if (VAR_13)
    return (VAR_13);

   VAR_14 = FUNC_6(VAR_10->xd_otherend_path_len
       + FUNC_8("/state") + 1, VAR_3, VAR_2);
   FUNC_7(VAR_14, "%s/state", VAR_10->xd_otherend_path);

   FUNC_5(VAR_10->xd_otherend_watch.node, VAR_3);
   VAR_10->xd_otherend_watch.node = VAR_14;

   FUNC_0(VAR_9[VAR_11]);

   FUNC_13(&VAR_10->xd_otherend_watch);
  }
  FUNC_5(VAR_9, VAR_1);
 }

 return (0);
}
