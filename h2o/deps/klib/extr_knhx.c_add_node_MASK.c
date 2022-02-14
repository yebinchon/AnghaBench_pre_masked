
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n; int parent; double d; char* name; } ;
typedef TYPE_1__ knhx1_t ;
struct TYPE_6__ {int n; int max; int error; TYPE_1__* node; } ;
typedef TYPE_2__ knaux_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 double FUNC_5 (char*,char**) ;

__attribute__((used)) static inline char *FUNC_6(const char *VAR_1, knaux_t *VAR_2, int VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6 = 0;
 knhx1_t *VAR_7;
 if (VAR_2->n == VAR_2->max) {
  VAR_2->max = VAR_2->max? VAR_2->max<<1 : 8;
  VAR_2->node = (knhx1_t*)FUNC_2(VAR_2->node, sizeof(knhx1_t) * VAR_2->max);
 }
 VAR_7 = VAR_2->node + (VAR_2->n++);
 VAR_7->n = VAR_3; VAR_7->parent = -1;
 for (VAR_4 = (char*)VAR_1, VAR_5 = VAR_4, VAR_7->d = -1.0; *VAR_4 && *VAR_4 != ',' && *VAR_4 != ')'; ++VAR_4) {
  if (*VAR_4 == '[') {
   if (VAR_6 == 0) VAR_6 = VAR_4;
   do ++VAR_4; while (*VAR_4 && *VAR_4 != ']');
   if (*VAR_4 == 0) {
    VAR_2->error |= VAR_0;
    break;
   }
  } else if (*VAR_4 == ':') {
   if (VAR_6 == 0) VAR_6 = VAR_4;
   VAR_7->d = FUNC_5(VAR_4 + 1, &VAR_4);
   --VAR_4;
  } else if (!FUNC_1(*VAR_4)) if (VAR_6 == 0) VAR_6 = VAR_4;
 }
 if (VAR_6 == 0) VAR_6 = VAR_4;
 if (VAR_6 != VAR_5) {
  VAR_7->name = (char*)FUNC_0(VAR_6 - VAR_5 + 1, 1);
  FUNC_4(VAR_7->name, VAR_5, VAR_6 - VAR_5);
 } else VAR_7->name = FUNC_3("");
 return VAR_4;
}
