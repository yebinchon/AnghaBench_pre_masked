
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ vec3_t ;


 int FUNC_0 (TYPE_1__,TYPE_1__,TYPE_1__) ;
 float FUNC_1 (TYPE_1__,TYPE_1__) ;
 int FUNC_2 (TYPE_1__,TYPE_1__) ;
 int FUNC_3 (TYPE_1__,int,TYPE_1__,TYPE_1__) ;
 int FUNC_4 (TYPE_1__) ;
 int FUNC_5 (TYPE_1__,int,int ,int ) ;
 int FUNC_6 (TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_7 (int,int,TYPE_1__*) ;

int FUNC_8(vec3_t VAR_0, vec3_t VAR_1, int VAR_2) {
 vec3_t VAR_3[4], VAR_4, VAR_5, VAR_6 = {0, 0, 1};
 float VAR_7;

 FUNC_2(VAR_0, VAR_3[0]);
 FUNC_2(VAR_0, VAR_3[1]);

 FUNC_2(VAR_1, VAR_3[2]);

 FUNC_2(VAR_1, VAR_3[3]);


 FUNC_6(VAR_1, VAR_0, VAR_4);
 FUNC_4(VAR_4);
 VAR_7 = FUNC_1(VAR_4, VAR_6);
 if (VAR_7 > 0.99 || VAR_7 < -0.99) FUNC_5(VAR_5, 1, 0, 0);
 else FUNC_0(VAR_4, VAR_6, VAR_5);

 FUNC_4(VAR_5);

 FUNC_3(VAR_3[0], 2, VAR_5, VAR_3[0]);
 FUNC_3(VAR_3[1], -2, VAR_5, VAR_3[1]);
 FUNC_3(VAR_3[2], -2, VAR_5, VAR_3[2]);
 FUNC_3(VAR_3[3], 2, VAR_5, VAR_3[3]);

 return FUNC_7(VAR_2, 4, VAR_3);
}
