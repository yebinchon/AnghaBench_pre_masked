
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {char* p; } ;
typedef TYPE_3__ Value ;
struct TYPE_8__ {int * loc; } ;
struct TYPE_9__ {TYPE_1__ c; } ;
struct TYPE_11__ {int type; TYPE_2__ u; } ;
typedef TYPE_4__* Symbol ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int VAR_2 ;
 TYPE_4__* FUNC_1 (int ,TYPE_3__) ;
 int * FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (char*) ;

Symbol FUNC_4(char *VAR_3) {
 Value VAR_4;
 Symbol VAR_5;

 VAR_4.p = VAR_3;
 VAR_5 = FUNC_1(FUNC_0(VAR_2, FUNC_3(VAR_4.p) + 1, 0), VAR_4);
 if (VAR_5->u.c.loc == ((void*)0))
  VAR_5->u.c.loc = FUNC_2(VAR_1, VAR_5->type, VAR_0);
 return VAR_5;
}
