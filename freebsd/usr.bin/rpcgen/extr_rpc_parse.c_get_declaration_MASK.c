
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ kind; char* str; } ;
typedef TYPE_1__ token ;
typedef int defkind ;
struct TYPE_9__ {scalar_t__ rel; char* name; char* array_max; int type; int prefix; } ;
typedef TYPE_2__ declaration ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (scalar_t__,int ,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,char*) ;

__attribute__((used)) static void
FUNC_8(declaration *VAR_10, defkind VAR_11)
{
 token VAR_12;

 FUNC_2(&VAR_10->prefix, &VAR_10->type, VAR_11);
 VAR_10->rel = VAR_0;
 if (FUNC_7(VAR_10->type, "void")) {
  return;
 }

 FUNC_0(VAR_10->type, 0);
 FUNC_5(VAR_9, VAR_4, &VAR_12);
 if (VAR_12.kind == VAR_9) {
  VAR_10->rel = VAR_2;
  FUNC_4(VAR_4, &VAR_12);
 }
 VAR_10->name = VAR_12.str;
 if (FUNC_3(VAR_6, &VAR_12)) {
  if (VAR_10->rel == VAR_2) {
   FUNC_1("no array-of-pointer declarations -- use typedef");
  }
  VAR_10->rel = VAR_3;
  FUNC_6(&VAR_12);
  VAR_10->array_max = VAR_12.str;
  FUNC_4(VAR_8, &VAR_12);
 } else if (FUNC_3(VAR_5, &VAR_12)) {
  if (VAR_10->rel == VAR_2) {
   FUNC_1("no array-of-pointer declarations -- use typedef");
  }
  VAR_10->rel = VAR_1;
  if (FUNC_3(VAR_7, &VAR_12)) {
   VAR_10->array_max = "~0";
  } else {
   FUNC_6(&VAR_12);
   VAR_10->array_max = VAR_12.str;
   FUNC_4(VAR_7, &VAR_12);
  }
 }
 if (FUNC_7(VAR_10->type, "opaque")) {
  if (VAR_10->rel != VAR_1 && VAR_10->rel != VAR_3) {
   FUNC_1("array declaration expected");
  }
 } else if (FUNC_7(VAR_10->type, "string")) {
  if (VAR_10->rel != VAR_1) {
   FUNC_1("variable-length array declaration expected");
  }
 }
}
