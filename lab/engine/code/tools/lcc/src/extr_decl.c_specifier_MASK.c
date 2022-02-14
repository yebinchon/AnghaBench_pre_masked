
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


typedef TYPE_2__* Type ;
struct TYPE_30__ {TYPE_2__* type; } ;
struct TYPE_29__ {TYPE_1__* type; int size; } ;
struct TYPE_28__ {int size; } ;



 int VAR_0 ;






 int VAR_1 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int,TYPE_4__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_2__* FUNC_7 (int const,TYPE_2__*) ;
 TYPE_2__* VAR_7 ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_8 (int) ;
 int VAR_10 ;
 TYPE_4__* VAR_11 ;
 TYPE_2__* FUNC_9 (TYPE_2__*) ;
 TYPE_2__* VAR_12 ;
 TYPE_2__* VAR_13 ;
 TYPE_2__* VAR_14 ;
 TYPE_2__* VAR_15 ;
 TYPE_2__* VAR_16 ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (char*,TYPE_2__*) ;

__attribute__((used)) static Type FUNC_12(int *VAR_17) {
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 Type VAR_24 = ((void*)0);

 VAR_18 = VAR_23 = VAR_19 = VAR_20 = VAR_21 = VAR_22 = 0;
 if (VAR_17 == ((void*)0))
  VAR_18 = 147;
 for (;;) {
  int *VAR_25, VAR_26 = VAR_10;
  switch (VAR_10) {
  case 147:
  case 137: if (VAR_3 <= VAR_1 && VAR_18 == 0)
                  FUNC_1("invalid use of `%k'\n", VAR_10);
                 VAR_25 = &VAR_18; VAR_10 = FUNC_2(); break;
  case 134: case 142:
  case 132: VAR_25 = &VAR_18; VAR_10 = FUNC_2(); break;
  case 145: VAR_25 = &VAR_19; VAR_10 = FUNC_2(); break;
  case 128: VAR_25 = &VAR_23; VAR_10 = FUNC_2(); break;
  case 135:
  case 130: VAR_25 = &VAR_20; VAR_10 = FUNC_2(); break;
  case 138: if (VAR_21 == 138) {
                         VAR_21 = 0;
                         VAR_26 = 138 +138;
                 }
                 VAR_25 = &VAR_21; VAR_10 = FUNC_2(); break;
  case 136: VAR_25 = &VAR_21; VAR_10 = FUNC_2(); break;
  case 129: case 146: case 139: case 141:
  case 144: VAR_25 = &VAR_22; VAR_24 = VAR_11->type;
                            VAR_10 = FUNC_2(); break;
  case 143: VAR_25 = &VAR_22; VAR_24 = FUNC_0(); break;
  case 133:
  case 131: VAR_25 = &VAR_22; VAR_24 = FUNC_8(VAR_10); break;
  case 140:
   if (FUNC_5(VAR_10, VAR_11) && VAR_22 == 0
   && VAR_20 == 0 && VAR_21 == 0) {
    FUNC_10(VAR_11, VAR_9);
    VAR_24 = VAR_11->type;
    if (FUNC_4(VAR_24)
    && VAR_24->size != VAR_24->type->size) {
     VAR_24 = FUNC_9(VAR_24);
     if (FUNC_3(VAR_11->type))
      VAR_24 = FUNC_7(145, VAR_24);
     if (FUNC_6(VAR_11->type))
      VAR_24 = FUNC_7(128, VAR_24);
     VAR_11->type = VAR_24;
    }
    VAR_25 = &VAR_22;
    VAR_10 = FUNC_2();
   } else
    VAR_25 = ((void*)0);
   break;
  default: VAR_25 = ((void*)0);
  }
  if (VAR_25 == ((void*)0))
   break;
  if (*VAR_25)
   FUNC_1("invalid use of `%k'\n", VAR_26);
  *VAR_25 = VAR_26;
 }
 if (VAR_17)
  *VAR_17 = VAR_18;
 if (VAR_22 == 0) {
  VAR_22 = 139;
  VAR_24 = VAR_2;
 }
 if ((VAR_21 == 136 && VAR_22 != 139)
 || (VAR_21 == 138 +138 && VAR_22 != 139)
 || (VAR_21 == 138 && VAR_22 != 139 && VAR_22 != 144)
 || (VAR_20 && VAR_22 != 139 && VAR_22 != 146))
  FUNC_1("invalid type specification\n");
 if (VAR_22 == 146 && VAR_20)
  VAR_24 = VAR_20 == 130 ? VAR_12 : VAR_8;
 else if (VAR_21 == 136)
  VAR_24 = VAR_20 == 130 ? VAR_15 : VAR_7;
 else if (VAR_21 == 138 && VAR_22 == 144)
  VAR_24 = VAR_4;
 else if (VAR_21 == 138 +138) {
  VAR_24 = VAR_20 == 130 ? VAR_14 : VAR_5;
  if (VAR_0 >= 1)
   FUNC_11("`%t' is a non-ANSI type\n", VAR_24);
 } else if (VAR_21 == 138)
  VAR_24 = VAR_20 == 130 ? VAR_13 : VAR_6;
 else if (VAR_20 == 130 && VAR_22 == 139)
  VAR_24 = VAR_16;
 if (VAR_19 == 145)
  VAR_24 = FUNC_7(145, VAR_24);
 if (VAR_23 == 128)
  VAR_24 = FUNC_7(128, VAR_24);
 return VAR_24;
}
