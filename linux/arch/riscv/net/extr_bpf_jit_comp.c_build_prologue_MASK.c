
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rv_jit_context {int stack_size; TYPE_2__* prog; } ;
struct TYPE_4__ {TYPE_1__* aux; } ;
struct TYPE_3__ {int stack_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,struct rv_jit_context*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int,int ) ;
 scalar_t__ FUNC_4 (struct rv_jit_context*) ;
 scalar_t__ FUNC_5 (int ,struct rv_jit_context*) ;
 scalar_t__ FUNC_6 (struct rv_jit_context*) ;

__attribute__((used)) static void FUNC_7(struct rv_jit_context *VAR_13)
{
 int VAR_14 = 0, VAR_15, VAR_16;

 if (FUNC_5(VAR_2, VAR_13))
  VAR_14 += 8;
 VAR_14 += 8;
 if (FUNC_5(VAR_3, VAR_13))
  VAR_14 += 8;
 if (FUNC_5(VAR_4, VAR_13))
  VAR_14 += 8;
 if (FUNC_5(VAR_5, VAR_13))
  VAR_14 += 8;
 if (FUNC_5(VAR_6, VAR_13))
  VAR_14 += 8;
 if (FUNC_5(VAR_7, VAR_13))
  VAR_14 += 8;
 if (FUNC_5(VAR_8, VAR_13))
  VAR_14 += 8;

 VAR_14 = FUNC_1(VAR_14, 16);
 VAR_16 = FUNC_1(VAR_13->prog->aux->stack_depth, 16);
 VAR_14 += VAR_16;

 VAR_15 = VAR_14 - 8;




 FUNC_0(FUNC_2(VAR_10, VAR_12, VAR_0), VAR_13);

 FUNC_0(FUNC_2(VAR_9, VAR_9, -VAR_14), VAR_13);

 if (FUNC_5(VAR_2, VAR_13)) {
  FUNC_0(FUNC_3(VAR_9, VAR_15, VAR_2), VAR_13);
  VAR_15 -= 8;
 }
 FUNC_0(FUNC_3(VAR_9, VAR_15, VAR_1), VAR_13);
 VAR_15 -= 8;
 if (FUNC_5(VAR_3, VAR_13)) {
  FUNC_0(FUNC_3(VAR_9, VAR_15, VAR_3), VAR_13);
  VAR_15 -= 8;
 }
 if (FUNC_5(VAR_4, VAR_13)) {
  FUNC_0(FUNC_3(VAR_9, VAR_15, VAR_4), VAR_13);
  VAR_15 -= 8;
 }
 if (FUNC_5(VAR_5, VAR_13)) {
  FUNC_0(FUNC_3(VAR_9, VAR_15, VAR_5), VAR_13);
  VAR_15 -= 8;
 }
 if (FUNC_5(VAR_6, VAR_13)) {
  FUNC_0(FUNC_3(VAR_9, VAR_15, VAR_6), VAR_13);
  VAR_15 -= 8;
 }
 if (FUNC_5(VAR_7, VAR_13)) {
  FUNC_0(FUNC_3(VAR_9, VAR_15, VAR_7), VAR_13);
  VAR_15 -= 8;
 }
 if (FUNC_5(VAR_8, VAR_13)) {
  FUNC_0(FUNC_3(VAR_9, VAR_15, VAR_8), VAR_13);
  VAR_15 -= 8;
 }

 FUNC_0(FUNC_2(VAR_1, VAR_9, VAR_14), VAR_13);

 if (VAR_16)
  FUNC_0(FUNC_2(VAR_7, VAR_9, VAR_16), VAR_13);




 if (FUNC_6(VAR_13) && FUNC_4(VAR_13))
  FUNC_0(FUNC_2(VAR_11, VAR_10, 0), VAR_13);

 VAR_13->stack_size = VAR_14;
}
