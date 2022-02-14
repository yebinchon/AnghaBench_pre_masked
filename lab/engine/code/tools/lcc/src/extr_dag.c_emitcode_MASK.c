
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int (* defaddress ) (int ) ;int (* stabsym ) (int ) ;int (* emit ) (int ) ;int (* stabline ) (int *) ;int (* stabblock ) (char,scalar_t__,int ) ;} ;
struct TYPE_13__ {TYPE_5__* next; } ;
struct TYPE_10__ {int size; long* values; int * labels; int deflab; int table; } ;
struct TYPE_9__ {int src; } ;
struct TYPE_8__ {int locals; scalar_t__ level; int types; int identifiers; } ;
struct TYPE_11__ {TYPE_3__ swtch; int var; int forest; TYPE_2__ point; TYPE_1__ block; TYPE_5__* begin; } ;
struct TYPE_12__ {int kind; TYPE_4__ u; struct TYPE_12__* next; } ;
typedef int Coordinate ;
typedef TYPE_5__* Code ;





 int VAR_0 ;


 TYPE_7__* VAR_1 ;

 int VAR_2 ;
 scalar_t__ VAR_3 ;
 long VAR_4 ;



 int FUNC_0 (int ) ;
 TYPE_6__ VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,scalar_t__,int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (char,scalar_t__,int ) ;
 int FUNC_5 (char,scalar_t__,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_9 ;

void FUNC_13(void) {
 Code VAR_10;
 Coordinate VAR_11;

 VAR_11 = VAR_8;
 VAR_10 = VAR_5.next;
 for ( ; VAR_6 <= 0 && VAR_10; VAR_10 = VAR_10->next)
  switch (VAR_10->kind) {
  case 136: break;
  case 135: if (VAR_7 && VAR_1->stabblock) {
           (*VAR_1->stabblock)('{', VAR_10->u.block.level - VAR_3, VAR_10->u.block.locals);
           FUNC_12(VAR_0);
          }
 break;
  case 134: if (VAR_7 && VAR_1->stabblock) {
           Code VAR_12 = VAR_10->u.begin;
           FUNC_3(VAR_12->u.block.identifiers, VAR_12->u.block.level, VAR_9, ((void*)0));
           FUNC_3(VAR_12->u.block.types, VAR_12->u.block.level, VAR_9, ((void*)0));
           (*VAR_1->stabblock)('}', VAR_12->u.block.level - VAR_3, VAR_12->u.block.locals);
           FUNC_12(VAR_0);
          }
 break;
  case 133: VAR_8 = VAR_10->u.point.src;
          if (VAR_7 > 0 && VAR_1->stabline) {
           (*VAR_1->stabline)(&VAR_10->u.point.src); FUNC_12(VAR_0); } break;
  case 132: case 131:
  case 130: if (VAR_10->u.forest)
           (*VAR_1->emit)(VAR_10->u.forest); break;
  case 129: if (VAR_7 && VAR_1->stabsym) {
           (*VAR_1->stabsym)(VAR_10->u.var);
           FUNC_12(VAR_0);
          } break;
  case 128: { int VAR_13;
           FUNC_1(VAR_10->u.swtch.table, VAR_2);
           (*VAR_1->defaddress)(FUNC_2(VAR_10->u.swtch.labels[0]));
           for (VAR_13 = 1; VAR_13 < VAR_10->u.swtch.size; VAR_13++) {
            long VAR_14 = VAR_10->u.swtch.values[VAR_13-1];
            while (++VAR_14 < VAR_10->u.swtch.values[VAR_13])
             FUNC_0(VAR_14 < VAR_4),
             (*VAR_1->defaddress)(FUNC_2(VAR_10->u.swtch.deflab));
            (*VAR_1->defaddress)(FUNC_2(VAR_10->u.swtch.labels[VAR_13]));
           }
           FUNC_12(VAR_0);
          } break;
  default: FUNC_0(0);
  }
 VAR_8 = VAR_11;
}
