
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_18__ {TYPE_1__** kids; scalar_t__ emitted; } ;
struct TYPE_21__ {char** kids; TYPE_13__** syms; TYPE_2__ x; } ;
struct TYPE_20__ {int name; } ;
struct TYPE_19__ {short** _nts; char** _templates; int (* _kids ) (TYPE_5__*,int,TYPE_5__**) ;int (* emit2 ) (TYPE_5__*) ;scalar_t__* _isinstruction; } ;
struct TYPE_17__ {TYPE_13__** syms; } ;
struct TYPE_16__ {TYPE_3__ x; } ;
struct TYPE_15__ {TYPE_4__ x; } ;
typedef TYPE_5__* Node ;


 TYPE_14__* VAR_0 ;
 char FUNC_0 (TYPE_13__**) ;
 size_t VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char) ;
 TYPE_5__* FUNC_6 (TYPE_5__*,int) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,int,TYPE_5__**) ;

__attribute__((used)) static unsigned FUNC_9(Node VAR_4, int VAR_5) {
 int VAR_6;
 short *VAR_7;
 char *VAR_8;
 Node VAR_9[10];

 VAR_4 = FUNC_6(VAR_4, VAR_5);
 VAR_6 = FUNC_3(VAR_4, VAR_5);
 VAR_7 = VAR_0->x._nts[VAR_6];
 VAR_8 = VAR_0->x._templates[VAR_6];
 FUNC_1(VAR_8);
 if (VAR_0->x._isinstruction[VAR_6] && VAR_4->x.emitted)
  FUNC_4("%s", VAR_4->syms[VAR_1]->x.name);
 else if (*VAR_8 == '#')
  (*VAR_0->x.emit2)(VAR_4);
 else {
  if (*VAR_8 == '?') {
   VAR_8++;
   FUNC_1(VAR_4->kids[0]);
   if (VAR_4->syms[VAR_1] == VAR_4->x.kids[0]->syms[VAR_1])
    while (*VAR_8++ != '\n')
     ;
  }
  for ((*VAR_0->x._kids)(VAR_4, VAR_6, VAR_9); *VAR_8; VAR_8++)
   if (*VAR_8 != '%')
    (void)FUNC_5(*VAR_8);
   else if (*++VAR_8 == 'F')
    FUNC_4("%d", VAR_2);
   else if (*VAR_8 >= '0' && *VAR_8 <= '9')
    FUNC_9(VAR_9[*VAR_8 - '0'], VAR_7[*VAR_8 - '0']);
   else if (*VAR_8 >= 'a' && *VAR_8 < 'a' + FUNC_0(VAR_4->syms))
    FUNC_2(VAR_4->syms[*VAR_8 - 'a']->x.name, VAR_3);
   else
    (void)FUNC_5(*VAR_8);
 }
 return 0;
}
