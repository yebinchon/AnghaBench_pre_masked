
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int emitter_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char*,int ,int*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(emitter_t *VAR_1) {
 int VAR_2 = 123;
 FUNC_0(VAR_1);
 FUNC_1(VAR_1, "json1", "Dict 1");
 FUNC_1(VAR_1, "json2", "Dict 2");
 FUNC_4(VAR_1, "primitive", "A primitive", VAR_0, &VAR_2);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1, "json3", "Dict 3");
 FUNC_2(VAR_1);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1, "json4", "Dict 4");
 FUNC_4(VAR_1, "primitive", "Another primitive",
     VAR_0, &VAR_2);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
}
