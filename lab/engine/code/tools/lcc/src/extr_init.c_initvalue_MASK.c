
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef char* Type ;
typedef TYPE_1__* Tree ;
struct TYPE_8__ {int op; int type; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,...) ;
 TYPE_1__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_6 (int ,char*) ;

__attribute__((used)) static Tree FUNC_7(Type VAR_3) {
 Type VAR_4;
 Tree VAR_5;

 VAR_2++;
 VAR_5 = FUNC_4(0);
 if ((VAR_4 = FUNC_0(VAR_3, VAR_5)) != ((void*)0))
  VAR_5 = FUNC_1(VAR_5, VAR_4);
 else {
  FUNC_3("invalid initialization type; found `%t' expected `%t'\n",
   VAR_5->type, VAR_3);
  VAR_5 = FUNC_6(FUNC_2(0, VAR_1), VAR_3);
 }
 VAR_2--;
 if (FUNC_5(VAR_5->op) != VAR_0) {
  FUNC_3("initializer must be constant\n");
  VAR_5 = FUNC_6(FUNC_2(0, VAR_1), VAR_3);
 }
 return VAR_5;
}
