
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int Type ;
struct TYPE_7__ {int (* defsymbol ) (TYPE_1__*) ;} ;
struct TYPE_6__ {int scope; int sclass; int generated; int type; int name; } ;
typedef TYPE_1__* Symbol ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

Symbol FUNC_4(int VAR_5, Type VAR_6, int VAR_7) {
 Symbol VAR_8;

 FUNC_0(VAR_8, VAR_7 >= VAR_3 ? VAR_0 : VAR_4);
 VAR_8->name = FUNC_2(FUNC_1(1));
 VAR_8->scope = VAR_7;
 VAR_8->sclass = VAR_5;
 VAR_8->type = VAR_6;
 VAR_8->generated = 1;
 if (VAR_7 == VAR_1)
  (*VAR_2->defsymbol)(VAR_8);
 return VAR_8;
}
