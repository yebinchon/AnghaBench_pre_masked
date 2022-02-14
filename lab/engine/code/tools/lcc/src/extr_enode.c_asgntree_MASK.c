
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_51__ TYPE_9__ ;
typedef struct TYPE_50__ TYPE_8__ ;
typedef struct TYPE_49__ TYPE_7__ ;
typedef struct TYPE_48__ TYPE_6__ ;
typedef struct TYPE_47__ TYPE_5__ ;
typedef struct TYPE_46__ TYPE_4__ ;
typedef struct TYPE_45__ TYPE_3__ ;
typedef struct TYPE_44__ TYPE_2__ ;
typedef struct TYPE_43__ TYPE_28__ ;
typedef struct TYPE_42__ TYPE_27__ ;
typedef struct TYPE_41__ TYPE_24__ ;
typedef struct TYPE_40__ TYPE_1__ ;


typedef scalar_t__ Type ;
typedef TYPE_8__* Tree ;
struct TYPE_46__ {TYPE_3__* sym; } ;
struct TYPE_51__ {scalar_t__ type; TYPE_4__ u; } ;
struct TYPE_47__ {long i; } ;
struct TYPE_49__ {TYPE_27__* sym; TYPE_28__* field; TYPE_5__ v; } ;
struct TYPE_50__ {scalar_t__ type; scalar_t__ op; TYPE_7__ u; TYPE_6__** kids; } ;
struct TYPE_48__ {TYPE_8__** kids; } ;
struct TYPE_40__ {scalar_t__ cfields; } ;
struct TYPE_44__ {TYPE_1__ s; } ;
struct TYPE_45__ {TYPE_2__ u; } ;
struct TYPE_43__ {TYPE_24__* type; } ;
struct TYPE_42__ {int name; int generated; int computed; } ;
struct TYPE_41__ {int size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (scalar_t__,TYPE_8__*) ;
 TYPE_8__* FUNC_1 (int ,TYPE_8__*,TYPE_8__*) ;
 TYPE_8__* FUNC_2 (TYPE_8__*,scalar_t__) ;
 TYPE_8__* FUNC_3 (scalar_t__,long) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (TYPE_28__*) ;
 unsigned long FUNC_6 (TYPE_28__*) ;
 TYPE_8__* FUNC_7 (TYPE_27__*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_8__*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (TYPE_24__*) ;
 TYPE_8__* FUNC_14 (TYPE_8__*) ;
 scalar_t__ FUNC_15 (int,scalar_t__) ;
 TYPE_8__* FUNC_16 (TYPE_8__*) ;
 TYPE_8__* FUNC_17 (TYPE_8__*,scalar_t__) ;
 TYPE_8__* FUNC_18 (int ,TYPE_8__*,TYPE_8__*) ;
 TYPE_8__* FUNC_19 (scalar_t__,scalar_t__,TYPE_8__*,TYPE_8__*) ;
 int FUNC_20 (int ,TYPE_8__*,TYPE_8__*) ;
 TYPE_9__* FUNC_21 (scalar_t__) ;
 scalar_t__ VAR_11 ;

Tree FUNC_22(int VAR_12, Tree VAR_13, Tree VAR_14) {
 Type VAR_15, VAR_16;

 VAR_14 = FUNC_16(VAR_14);
 VAR_16 = FUNC_0(VAR_13->type, VAR_14);
 if (VAR_16)
  VAR_14 = FUNC_2(VAR_14, VAR_16);
 else {
  FUNC_20(VAR_0, VAR_13, VAR_14);
  if (VAR_14->type == VAR_11)
   VAR_14 = FUNC_17(VAR_14, VAR_10);
  VAR_16 = VAR_14->type;
 }
 if (VAR_13->op != VAR_5)
  VAR_13 = FUNC_14(VAR_13);
 VAR_15 = VAR_13->type;
 if (FUNC_11(VAR_15))
  VAR_15 = FUNC_21(VAR_15)->type;
 if ( FUNC_10(VAR_15)
 || (FUNC_12(VAR_15) && FUNC_21(VAR_15)->u.sym->u.s.cfields)) {
  if (FUNC_8(VAR_13->op)
  && !VAR_13->u.sym->computed && !VAR_13->u.sym->generated)
   FUNC_4("assignment to const identifier `%s'\n",
    VAR_13->u.sym->name);
  else
   FUNC_4("assignment to const location\n");
 }
 if (VAR_13->op == VAR_5) {
  long VAR_17 = 8*VAR_13->u.field->type->size - FUNC_6(VAR_13->u.field);
  if (VAR_17 > 0 && FUNC_13(VAR_13->u.field->type))
   VAR_14 = FUNC_1(VAR_2, VAR_14,
    FUNC_3(VAR_14->type, (unsigned long)FUNC_5(VAR_13->u.field)));
  else if (VAR_17 > 0) {
   if (VAR_14->op == VAR_4+VAR_6) {
    VAR_17 = VAR_14->u.v.i;
    if (VAR_17&(1<<(FUNC_6(VAR_13->u.field)-1)))
     VAR_17 |= ~0UL<<FUNC_6(VAR_13->u.field);
    VAR_14 = FUNC_3(VAR_14->type, VAR_17);
   } else
    VAR_14 = FUNC_18(VAR_9,
     FUNC_18(VAR_7, VAR_14, FUNC_3(VAR_10, VAR_17)),
     FUNC_3(VAR_10, VAR_17));
  }
 }
 if (FUNC_12(VAR_16) && FUNC_8(VAR_13->op) && FUNC_9(VAR_14))
  return FUNC_19(VAR_8, VAR_16,
   FUNC_19(VAR_3+VAR_1, VAR_16, VAR_14->kids[0]->kids[0], VAR_13),
   FUNC_7(VAR_13->u.sym));
 return FUNC_19(FUNC_15(VAR_12,VAR_16), VAR_16, VAR_13, VAR_14);
}
