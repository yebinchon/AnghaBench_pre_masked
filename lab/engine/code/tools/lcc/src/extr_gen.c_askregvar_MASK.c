
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {char* name; TYPE_1__* regnode; } ;
struct TYPE_11__ {scalar_t__ sclass; int name; TYPE_2__ x; scalar_t__ temporary; int type; } ;
struct TYPE_9__ {TYPE_3__* vbl; } ;
typedef TYPE_3__* Symbol ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;

int FUNC_5(Symbol VAR_3, Symbol VAR_4) {
 Symbol VAR_5;

 FUNC_1(VAR_3);
 if (VAR_3->sclass != VAR_1)
  return 0;
 else if (!FUNC_4(VAR_3->type)) {
  VAR_3->sclass = VAR_0;
  return 0;
 }
 else if (VAR_3->temporary) {
  VAR_3->x.name = "?";
  return 1;
 }
 else if ((VAR_5 = FUNC_0(VAR_4, VAR_2)) != ((void*)0)) {
  VAR_3->x.regnode = VAR_5->x.regnode;
  VAR_3->x.regnode->vbl = VAR_3;
  VAR_3->x.name = VAR_5->x.name;
  FUNC_2(FUNC_3("(allocating %s to symbol %s)\n", VAR_3->x.name, VAR_3->name));
  return 1;
 }
 else {
  VAR_3->sclass = VAR_0;
  return 0;
 }
}
