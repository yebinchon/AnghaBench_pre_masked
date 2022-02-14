
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_3__* Tree ;
struct TYPE_11__ {TYPE_4__* loc; } ;
struct TYPE_12__ {TYPE_1__ c; } ;
struct TYPE_14__ {int type; TYPE_2__ u; } ;
struct TYPE_13__ {struct TYPE_13__** kids; } ;
typedef TYPE_4__* Symbol ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ,int ,TYPE_3__*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (scalar_t__,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(Symbol VAR_7) {
 Tree *VAR_8;
 Symbol VAR_9;

 *VAR_6 = 0;
 VAR_9 = FUNC_3(FUNC_5(VAR_4));
 for (VAR_8 = &VAR_2; *VAR_8; VAR_8 = &(*VAR_8)->kids[1])
  ;
 *VAR_8 = FUNC_6(VAR_0+VAR_1, VAR_3, FUNC_4(FUNC_2(VAR_9->u.c.loc)), 0);
 FUNC_7(FUNC_0(FUNC_4(FUNC_2(VAR_7)), FUNC_1(VAR_7->type), VAR_2, ((void*)0)), 0, 0);
 VAR_2 = 0;
 VAR_6 = VAR_5 = 0;
}
