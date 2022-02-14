
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct TYPE_15__ {scalar_t__ type; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int * ucl_object_iter_t ;
struct TYPE_14__ {void* conf_timeout; int conf_pidfile_path; void* conf_maxproc; void* conf_debug; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_12__* VAR_4 ;
 int FUNC_0 (TYPE_12__*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (TYPE_1__ const*,int **,int) ;
 char* FUNC_5 (TYPE_1__ const*) ;
 void* FUNC_6 (TYPE_1__ const*) ;
 int FUNC_7 (TYPE_1__ const*) ;
 int FUNC_8 (char*,TYPE_1__ const*) ;
 int FUNC_9 (char*,TYPE_1__ const*) ;
 int FUNC_10 (char*,TYPE_1__ const*) ;
 int FUNC_11 (char*,TYPE_1__ const*) ;

__attribute__((used)) static int
FUNC_12(const ucl_object_t *VAR_5)
{
 ucl_object_iter_t VAR_6 = ((void*)0), VAR_7 = ((void*)0);
 const ucl_object_t *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 int VAR_10 = 0;


 while ((VAR_8 = FUNC_4(VAR_5, &VAR_6, 1))) {
  const char *VAR_11 = FUNC_5(VAR_8);

  if (!FUNC_2(VAR_11, "debug")) {
   if (VAR_8->type == VAR_1)
    VAR_4->conf_debug = FUNC_6(VAR_8);
   else {
    FUNC_1("\"debug\" property value is not integer");
    return (1);
   }
  }

  if (!FUNC_2(VAR_11, "timeout")) {
   if (VAR_8->type == VAR_1)
    VAR_4->conf_timeout = FUNC_6(VAR_8);
   else {
    FUNC_1("\"timeout\" property value is not integer");
    return (1);
   }
  }

  if (!FUNC_2(VAR_11, "maxproc")) {
   if (VAR_8->type == VAR_1)
    VAR_4->conf_maxproc = FUNC_6(VAR_8);
   else {
    FUNC_1("\"maxproc\" property value is not integer");
    return (1);
   }
  }

  if (!FUNC_2(VAR_11, "pidfile")) {
   if (VAR_8->type == VAR_3)
    VAR_4->conf_pidfile_path = FUNC_3(
        FUNC_7(VAR_8));
   else {
    FUNC_1("\"pidfile\" property value is not string");
    return (1);
   }
  }

  if (!FUNC_2(VAR_11, "isns-server")) {
   if (VAR_8->type == VAR_0) {
    VAR_7 = ((void*)0);
    while ((VAR_9 = FUNC_4(VAR_8, &VAR_7,
        1))) {
     if (VAR_9->type != VAR_3)
      return (1);

     VAR_10 = FUNC_0(VAR_4,
         FUNC_7(VAR_9));
     if (VAR_10 != 0) {
      return (1);
     }
    }
   } else {
    FUNC_1("\"isns-server\" property value is "
        "not an array");
    return (1);
   }
  }

  if (!FUNC_2(VAR_11, "isns-period")) {
   if (VAR_8->type == VAR_1)
    VAR_4->conf_timeout = FUNC_6(VAR_8);
   else {
    FUNC_1("\"isns-period\" property value is not integer");
    return (1);
   }
  }

  if (!FUNC_2(VAR_11, "isns-timeout")) {
   if (VAR_8->type == VAR_1)
    VAR_4->conf_timeout = FUNC_6(VAR_8);
   else {
    FUNC_1("\"isns-timeout\" property value is not integer");
    return (1);
   }
  }

  if (!FUNC_2(VAR_11, "auth-group")) {
   if (VAR_8->type == VAR_2) {
    VAR_7 = ((void*)0);
    while ((VAR_9 = FUNC_4(VAR_8, &VAR_7, 1))) {
     FUNC_8(FUNC_5(VAR_9), VAR_9);
    }
   } else {
    FUNC_1("\"auth-group\" section is not an object");
    return (1);
   }
  }

  if (!FUNC_2(VAR_11, "portal-group")) {
   if (VAR_8->type == VAR_2) {
    VAR_7 = ((void*)0);
    while ((VAR_9 = FUNC_4(VAR_8, &VAR_7, 1))) {
     FUNC_10(FUNC_5(VAR_9), VAR_9);
    }
   } else {
    FUNC_1("\"portal-group\" section is not an object");
    return (1);
   }
  }

  if (!FUNC_2(VAR_11, "lun")) {
   if (VAR_8->type == VAR_2) {
    VAR_7 = ((void*)0);
    while ((VAR_9 = FUNC_4(VAR_8, &VAR_7, 1))) {
     FUNC_9(FUNC_5(VAR_9), VAR_9);
    }
   } else {
    FUNC_1("\"lun\" section is not an object");
    return (1);
   }
  }
 }


 VAR_6 = ((void*)0);
 while ((VAR_8 = FUNC_4(VAR_5, &VAR_6, 1))) {
  const char *VAR_12 = FUNC_5(VAR_8);

  if (!FUNC_2(VAR_12, "target")) {
   if (VAR_8->type == VAR_2) {
    VAR_7 = ((void*)0);
    while ((VAR_9 = FUNC_4(VAR_8, &VAR_7,
        1))) {
     FUNC_11(FUNC_5(VAR_9),
         VAR_9);
    }
   } else {
    FUNC_1("\"target\" section is not an object");
    return (1);
   }
  }
 }

 return (0);
}
