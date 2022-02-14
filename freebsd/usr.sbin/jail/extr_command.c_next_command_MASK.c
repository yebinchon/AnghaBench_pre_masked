
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct cfjail {int flags; int* comparam; TYPE_1__* comstring; TYPE_2__** intparams; } ;
typedef enum intparam { ____Placeholder_intparam } intparam ;
struct TYPE_10__ {int flags; int val; } ;
struct TYPE_9__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_5 (struct cfjail*) ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (struct cfjail*,int *) ;
 int FUNC_7 (struct cfjail*,int *) ;
 int FUNC_8 (struct cfjail*) ;
 int VAR_12 ;
 int VAR_13 ;

int
FUNC_9(struct cfjail *VAR_14)
{
 enum intparam VAR_15;
 int VAR_16, VAR_17;

 if (VAR_11 == 0) {
  if (VAR_14->flags & VAR_6)
   FUNC_7(VAR_14, &VAR_12);
  else
   FUNC_6(VAR_14, &VAR_12);
  return 1;
 }
 VAR_14->flags &= ~VAR_6;
 VAR_16 = (VAR_14->flags & (VAR_7 | VAR_5)) == VAR_5;
 VAR_17 = (VAR_14->flags & VAR_7) != 0;
 VAR_15 = *VAR_14->comparam;
 for (;;) {
  if (VAR_14->comstring == ((void*)0)) {
   VAR_14->comparam += VAR_16 ? -1 : 1;
   switch ((VAR_15 = *VAR_14->comparam)) {
   case 129:
    return 0;
   case 133:
    if (!FUNC_4(VAR_14->intparams[133]))
     continue;
    VAR_14->comstring = &VAR_10;
    break;
   case 132:
    if (!FUNC_4(VAR_14->intparams[132]))
     continue;
    VAR_14->comstring = &VAR_10;
    break;
   case 131:
    if (!FUNC_4(VAR_14->intparams[131]))
     continue;
    VAR_14->comstring = &VAR_10;
    break;
   case 128:
   case 130:
    VAR_14->comstring = &VAR_10;
    break;
   default:
    if (VAR_14->intparams[VAR_15] == ((void*)0))
     continue;
    VAR_14->comstring = VAR_16 || (VAR_17 &&
        (VAR_14->intparams[VAR_15]->flags & VAR_8))
        ? FUNC_1(&VAR_14->intparams[VAR_15]->val,
     VAR_9)
        : FUNC_0(&VAR_14->intparams[VAR_15]->val);
   }
  } else {
   VAR_14->comstring = VAR_14->comstring == &VAR_10 ? ((void*)0) :
       VAR_16 || (VAR_17 &&
       (VAR_14->intparams[VAR_15]->flags & VAR_8))
       ? FUNC_3(VAR_14->comstring, VAR_9, VAR_13)
       : FUNC_2(VAR_14->comstring, VAR_13);
  }
  if (VAR_14->comstring == ((void*)0) || VAR_14->comstring->len == 0 ||
      (VAR_16 && (VAR_15 == VAR_3 ||
      VAR_15 == VAR_1 || VAR_15 == VAR_4 ||
      VAR_15 == VAR_0 || VAR_15 == VAR_2)))
   continue;
  switch (FUNC_8(VAR_14)) {
  case -1:
   FUNC_5(VAR_14);

  case 1:
   return 1;
  }
 }
}
