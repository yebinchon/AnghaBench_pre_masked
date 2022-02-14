
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int emitter_t ;
typedef int emitter_row_t ;
struct TYPE_6__ {int member_1; int member_0; } ;
struct TYPE_5__ {int member_0; } ;
struct TYPE_7__ {int member_1; char* str_val; int int_val; int bool_val; void* type; TYPE_2__ member_4; TYPE_1__ member_3; void* member_2; int member_0; } ;
typedef TYPE_3__ emitter_col_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static void
FUNC_5(emitter_t *VAR_6) {
 FUNC_0(VAR_6);
 emitter_row_t VAR_7;
 emitter_col_t VAR_8 = {VAR_0, 10, VAR_5, 0, {0, 0}};
 VAR_8.str_val = "ABC title";
 emitter_col_t VAR_9 = {VAR_1, 15, VAR_5, 0, {0, 0}};
 VAR_9.str_val = "DEF title";
 emitter_col_t VAR_10 = {VAR_1, 5, VAR_5, 0, {0, 0}};
 VAR_10.str_val = "GHI";

 FUNC_3(&VAR_7);
 FUNC_1(&VAR_8, &VAR_7);
 FUNC_1(&VAR_9, &VAR_7);
 FUNC_1(&VAR_10, &VAR_7);

 FUNC_4(VAR_6, &VAR_7);

 VAR_8.type = VAR_3;
 VAR_9.type = VAR_2;
 VAR_10.type = VAR_3;

 VAR_8.int_val = 123;
 VAR_9.bool_val = 1;
 VAR_10.int_val = 456;
 FUNC_4(VAR_6, &VAR_7);

 VAR_8.int_val = 789;
 VAR_9.bool_val = 0;
 VAR_10.int_val = 1011;
 FUNC_4(VAR_6, &VAR_7);

 VAR_8.type = VAR_4;
 VAR_8.str_val = "a string";
 VAR_9.bool_val = 0;
 VAR_10.type = VAR_5;
 VAR_10.str_val = "ghi";
 FUNC_4(VAR_6, &VAR_7);

 FUNC_2(VAR_6);
}
