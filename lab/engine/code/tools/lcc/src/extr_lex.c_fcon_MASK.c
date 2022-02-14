
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct TYPE_16__ {scalar_t__ d; } ;
struct TYPE_17__ {TYPE_1__ v; } ;
struct TYPE_18__ {TYPE_2__ c; } ;
struct TYPE_24__ {TYPE_11__* type; TYPE_3__ u; } ;
struct TYPE_23__ {TYPE_7__* sym; } ;
struct TYPE_19__ {scalar_t__ d; } ;
struct TYPE_20__ {TYPE_4__ max; } ;
struct TYPE_21__ {TYPE_5__ limits; } ;
struct TYPE_22__ {TYPE_6__ u; } ;
struct TYPE_15__ {TYPE_8__ u; } ;
typedef TYPE_9__* Symbol ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 TYPE_11__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int,char*) ;
 TYPE_11__* VAR_5 ;
 TYPE_11__* VAR_6 ;
 int* VAR_7 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,int *) ;
 int VAR_8 ;
 TYPE_9__ VAR_9 ;
 int FUNC_3 (char*,int,char*) ;

__attribute__((used)) static Symbol FUNC_4(void) {
 if (*VAR_2 == '.')
  do
   VAR_2++;
  while (VAR_7[*VAR_2]&VAR_0);
 if (*VAR_2 == 'e' || *VAR_2 == 'E') {
  if (*++VAR_2 == '-' || *VAR_2 == '+')
   VAR_2++;
  if (VAR_7[*VAR_2]&VAR_0)
   do
    VAR_2++;
   while (VAR_7[*VAR_2]&VAR_0);
  else
   FUNC_0("invalid floating constant `%S'\n", VAR_8,
    (char*)VAR_2 - VAR_8);
 }

 VAR_4 = 0;
 VAR_9.u.c.v.d = FUNC_2(VAR_8, ((void*)0));
 if (VAR_4 == VAR_1)
  FUNC_3("overflow in floating constant `%S'\n", VAR_8,
   (char*)VAR_2 - VAR_8);
 if (*VAR_2 == 'f' || *VAR_2 == 'F') {
  ++VAR_2;
  if (VAR_9.u.c.v.d > VAR_5->u.sym->u.limits.max.d)
   FUNC_3("overflow in floating constant `%S'\n", VAR_8,
    (char*)VAR_2 - VAR_8);
  VAR_9.type = VAR_5;
 } else if (*VAR_2 == 'l' || *VAR_2 == 'L') {
  VAR_2++;
  VAR_9.type = VAR_6;
 } else {
  if (VAR_9.u.c.v.d > VAR_3->u.sym->u.limits.max.d)
   FUNC_3("overflow in floating constant `%S'\n", VAR_8,
    (char*)VAR_2 - VAR_8);
  VAR_9.type = VAR_3;
 }
 FUNC_1("floating");
 return &VAR_9;
}
