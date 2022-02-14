
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ vec3_t ;


 int FUNC_0 (int,int,int,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__,TYPE_1__,TYPE_1__) ;
 float FUNC_2 (TYPE_1__,TYPE_1__) ;
 int FUNC_3 (TYPE_1__,TYPE_1__) ;
 int FUNC_4 (TYPE_1__,int,TYPE_1__,TYPE_1__) ;
 int FUNC_5 (TYPE_1__) ;
 int FUNC_6 (TYPE_1__,int,int ,int ) ;
 int FUNC_7 (TYPE_1__,TYPE_1__,TYPE_1__) ;

__attribute__((used)) static void FUNC_8(int VAR_0, vec3_t VAR_1, vec3_t VAR_2, int VAR_3) {
 vec3_t VAR_4[4], VAR_5, VAR_6, VAR_7 = {0, 0, 1};
 float VAR_8;

 FUNC_3(VAR_1, VAR_4[0]);
 FUNC_3(VAR_1, VAR_4[1]);

 FUNC_3(VAR_2, VAR_4[2]);

 FUNC_3(VAR_2, VAR_4[3]);


 FUNC_7(VAR_2, VAR_1, VAR_5);
 FUNC_5(VAR_5);
 VAR_8 = FUNC_2(VAR_5, VAR_7);
 if (VAR_8 > 0.99 || VAR_8 < -0.99) FUNC_6(VAR_6, 1, 0, 0);
 else FUNC_1(VAR_5, VAR_7, VAR_6);

 FUNC_5(VAR_6);

 FUNC_4(VAR_4[0], 2, VAR_6, VAR_4[0]);
 FUNC_4(VAR_4[1], -2, VAR_6, VAR_4[1]);
 FUNC_4(VAR_4[2], -2, VAR_6, VAR_4[2]);
 FUNC_4(VAR_4[3], 2, VAR_6, VAR_4[3]);

 FUNC_0(VAR_0, VAR_3, 4, VAR_4);
}
