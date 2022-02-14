
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ kind; char* str; } ;
typedef TYPE_1__ token ;
typedef scalar_t__ defkind ;
struct TYPE_9__ {scalar_t__ rel; char* type; char* name; char* array_max; int * prefix; } ;
typedef TYPE_2__ declaration ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int **,char**,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,char*,char*,int) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(declaration *VAR_10, defkind VAR_11, int VAR_12)
{
 token VAR_13;
 char VAR_14[10];

 if (VAR_11 == VAR_1) {
  FUNC_2(&VAR_13);
  if (VAR_13.kind == VAR_8) {
   VAR_10->rel = VAR_2;
   VAR_10->type = "void";
   VAR_10->prefix = ((void*)0);
   VAR_10->name = ((void*)0);
   return;
  }
 }
 FUNC_1(&VAR_10->prefix, &VAR_10->type, VAR_11);
 VAR_10->rel = VAR_2;
 if (FUNC_3(VAR_5, &VAR_13))
  FUNC_7(VAR_14, VAR_13.str);
 else
  FUNC_6(VAR_14, "%s%d", VAR_0, VAR_12);


 VAR_10->name = (char *) FUNC_9(VAR_14);
 if (FUNC_8(VAR_10->type, "void")) {
  return;
 }

 if (FUNC_8(VAR_10->type, "opaque")) {
  FUNC_0("opaque -- illegal argument type");
 }
 if (FUNC_3(VAR_9, &VAR_13)) {
  if (FUNC_8(VAR_10->type, "string")) {
   FUNC_0("pointer to string not allowed in program arguments");
  }
  VAR_10->rel = VAR_4;
  if (FUNC_3(VAR_5, &VAR_13)) {

   VAR_10->name = FUNC_9(VAR_13.str);
  }
 }
 if (FUNC_3(VAR_6, &VAR_13)) {
  if (!FUNC_8(VAR_10->type, "string")) {
   FUNC_0("arrays cannot be declared as arguments to procedures -- use typedef");
  }
  VAR_10->rel = VAR_3;
  if (FUNC_3(VAR_7, &VAR_13)) {
   VAR_10->array_max = "~0";

  } else {
   FUNC_5(&VAR_13);
   VAR_10->array_max = VAR_13.str;
   FUNC_4(VAR_7, &VAR_13);
  }
 }
 if (FUNC_8(VAR_10->type, "string")) {
  if (VAR_10->rel != VAR_3) {





   VAR_10->rel = VAR_3;
   VAR_10->array_max = "~0";
  }
 }
}
