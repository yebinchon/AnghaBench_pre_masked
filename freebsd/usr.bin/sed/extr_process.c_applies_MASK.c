
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s_command {scalar_t__ startline; scalar_t__ nonsel; TYPE_2__* a1; TYPE_2__* a2; } ;
struct TYPE_3__ {scalar_t__ l; } ;
struct TYPE_4__ {int type; TYPE_1__ u; } ;


 int VAR_0 ;

 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline int
FUNC_1(struct s_command *VAR_3)
{
 int VAR_4;

 VAR_1 = 0;
 if (VAR_3->a1 == ((void*)0) && VAR_3->a2 == ((void*)0))
  VAR_4 = 1;
 else if (VAR_3->a2)
  if (VAR_3->startline > 0) {
                        switch (VAR_3->a2->type) {
                        case 128:
                                if (VAR_2 - VAR_3->startline <= VAR_3->a2->u.l)
                                        VAR_4 = 1;
                                else {
            VAR_3->startline = 0;
            VAR_4 = 0;
                                }
                                break;
                        default:
                                if (FUNC_0(VAR_3->a2)) {
                                        VAR_3->startline = 0;
                                        VAR_1 = 1;
                                        VAR_4 = 1;
                                } else if (VAR_3->a2->type == VAR_0 &&
                                            VAR_2 > VAR_3->a2->u.l) {





                                        VAR_3->startline = 0;
                                        VAR_4 = 0;
                                } else
                                        VAR_4 = 1;
                        }
  } else if (VAR_3->a1 && FUNC_0(VAR_3->a1)) {







   if ((VAR_3->a2->type == VAR_0 &&
       VAR_2 >= VAR_3->a2->u.l) ||
       (VAR_3->a2->type == 128 && VAR_3->a2->u.l == 0))
    VAR_1 = 1;
   else {
    VAR_3->startline = VAR_2;
   }
   VAR_4 = 1;
  } else
   VAR_4 = 0;
 else
  VAR_4 = FUNC_0(VAR_3->a1);
 return (VAR_3->nonsel ? ! VAR_4 : VAR_4);
}
