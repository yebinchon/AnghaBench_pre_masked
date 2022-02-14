
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ type; int flags; } ;
typedef TYPE_1__ NODE ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int,char const*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;

__attribute__((used)) static int
FUNC_4(NODE *VAR_30, NODE *VAR_31, char const *VAR_32)
{
 int VAR_33;

 if (VAR_30 != ((void*)0) && VAR_30->type == VAR_4)
  VAR_30->flags &= ~VAR_6;
 if (VAR_31 != ((void*)0) && VAR_31->type == VAR_4)
  VAR_31->flags &= ~VAR_6;
 VAR_33 = 0;
 if (VAR_30 == ((void*)0) && VAR_31 != ((void*)0)) {
  VAR_33 = VAR_31->flags;
  FUNC_3(VAR_30, VAR_31, VAR_33, VAR_32);
  return (1);
 }
 if (VAR_30 != ((void*)0) && VAR_31 == ((void*)0)) {
  VAR_33 = VAR_30->flags;
  FUNC_3(VAR_30, VAR_31, VAR_33, VAR_32);
  return (1);
 }
 if (VAR_30->type != VAR_31->type) {
  VAR_33 = VAR_14;
  FUNC_3(VAR_30, VAR_31, VAR_33, VAR_32);
  return (1);
 }
 if (FUNC_0(VAR_30, VAR_31, VAR_0, VAR_17))
  VAR_33 |= VAR_0;
 if (FUNC_0(VAR_30, VAR_31, VAR_2, VAR_24))
  VAR_33 |= VAR_2;
 if (FUNC_0(VAR_30, VAR_31, VAR_3, VAR_24))
  VAR_33 |= VAR_3;
 if (FUNC_0(VAR_30, VAR_31, VAR_6, VAR_25))
  VAR_33 |= VAR_6;
 if (FUNC_0(VAR_30, VAR_31, VAR_7, VAR_27))
  VAR_33 |= VAR_7;
 if (FUNC_0(VAR_30, VAR_31, VAR_11, VAR_28))
  VAR_33 |= VAR_11;
 if (FUNC_2(VAR_30, VAR_31, VAR_12, VAR_22))
  VAR_33 |= VAR_12;
 if (FUNC_1(VAR_30, VAR_31, VAR_13, VAR_26))
  VAR_33 |= VAR_13;
 if (FUNC_0(VAR_30, VAR_31, VAR_15, VAR_29))
  VAR_33 |= VAR_15;
 if (FUNC_0(VAR_30, VAR_31, VAR_16, VAR_29))
  VAR_33 |= VAR_16;
 if (FUNC_2(VAR_30, VAR_31, VAR_5, VAR_18))
  VAR_33 |= VAR_5;
 if (FUNC_2(VAR_30, VAR_31, VAR_9, VAR_20))
  VAR_33 |= VAR_9;
 if (FUNC_2(VAR_30, VAR_31, VAR_8, VAR_19))
  VAR_33 |= VAR_8;
 if (FUNC_2(VAR_30, VAR_31, VAR_10, VAR_21))
  VAR_33 |= VAR_10;
 if (FUNC_0(VAR_30, VAR_31, VAR_1, VAR_23))
  VAR_33 |= VAR_1;
 if (VAR_33) {
  FUNC_3(VAR_30, VAR_31, VAR_33, VAR_32);
  return (1);
 }
 return (0);
}
