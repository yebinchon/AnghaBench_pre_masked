
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct jit_ctx {int stack_size; } ;
typedef int s8 ;


 int const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,int ) ;
 int FUNC_1 (int const,int const) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int const,int const,int ) ;
 int FUNC_4 (int const,int,int) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int const) ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int** VAR_12 ;
 int FUNC_6 (int ,struct jit_ctx*) ;
 int FUNC_7 (int const,int ,struct jit_ctx*) ;
 int FUNC_8 (int const,int,struct jit_ctx*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct jit_ctx *VAR_13)
{
 const s8 VAR_14 = VAR_12[VAR_4][1];
 const s8 VAR_15 = VAR_12[VAR_5][1];
 const s8 VAR_16 = VAR_12[VAR_5][0];
 const s8 VAR_17 = VAR_12[VAR_6][1];
 const s8 VAR_18 = VAR_12[VAR_7][1];
 const s8 VAR_19 = VAR_12[VAR_7][0];
 const s8 *VAR_20 = VAR_12[VAR_11];
 FUNC_6(FUNC_2(VAR_8), VAR_13);
 FUNC_6(FUNC_1(VAR_0, VAR_3), VAR_13);


 FUNC_6(FUNC_4(VAR_1, VAR_3, VAR_9), VAR_13);

 VAR_13->stack_size = FUNC_9(VAR_10);


 FUNC_6(FUNC_4(VAR_3, VAR_3, VAR_13->stack_size), VAR_13);


 FUNC_8(VAR_18, VAR_1, VAR_13);
 FUNC_7(VAR_19, 0, VAR_13);


 FUNC_6(FUNC_0(VAR_17, 0), VAR_13);


 FUNC_6(FUNC_1(VAR_16, VAR_17), VAR_13);
 FUNC_6(FUNC_1(VAR_15, VAR_14), VAR_13);

 FUNC_6(FUNC_3(VAR_17, VAR_0, FUNC_5(VAR_20[0])), VAR_13);
 FUNC_6(FUNC_3(VAR_17, VAR_0, FUNC_5(VAR_20[1])), VAR_13);

}
