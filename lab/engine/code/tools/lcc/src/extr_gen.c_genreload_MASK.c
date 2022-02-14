
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


struct TYPE_21__ {TYPE_5__** kids; } ;
struct TYPE_23__ {TYPE_3__ x; int * kids; int op; } ;
struct TYPE_19__ {int name; } ;
struct TYPE_22__ {TYPE_1__ x; } ;
struct TYPE_20__ {int size; } ;
struct TYPE_18__ {TYPE_2__ ptrmetric; } ;
typedef TYPE_4__* Symbol ;
typedef TYPE_5__* Node ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_17__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_5__*,TYPE_5__*) ;
 void* FUNC_4 (scalar_t__,TYPE_5__*,int *,TYPE_4__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_5__*,TYPE_5__**) ;
 int FUNC_7 (int *,int ,int,TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_10(Node VAR_5, Symbol VAR_6, int VAR_7) {
 Node VAR_8;
 int VAR_9;

 FUNC_0(FUNC_2(VAR_4, "(replacing %x with a reload from %s)\n", VAR_5->x.kids[VAR_7], VAR_6->x.name));
 FUNC_0(FUNC_2(VAR_4, "(genreload: "));
 FUNC_0(FUNC_1(VAR_5->x.kids[VAR_7]));
 FUNC_0(FUNC_2(VAR_4, ")\n"));
 VAR_9 = FUNC_5(VAR_5->x.kids[VAR_7]->op);
 VAR_8 = FUNC_4(VAR_0+VAR_3 + FUNC_9(VAR_2->ptrmetric.size), ((void*)0), ((void*)0), VAR_6);
 VAR_5->x.kids[VAR_7] = FUNC_4(VAR_1 + VAR_9, VAR_8, ((void*)0), ((void*)0));
 FUNC_8(VAR_5->x.kids[VAR_7]);
 FUNC_6(VAR_5->x.kids[VAR_7], &VAR_8);
 FUNC_7(&VAR_5->kids[1], FUNC_7(&VAR_5->kids[0], 0, VAR_7, VAR_5), VAR_7, VAR_5);
 FUNC_6(VAR_5, &VAR_8);
 FUNC_3(VAR_5->x.kids[VAR_7], VAR_5);
}
