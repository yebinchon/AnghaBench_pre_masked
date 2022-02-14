
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_context {int sc; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct fimc_context*,int ,int ) ;
 int FUNC_1 (struct fimc_context*,int) ;
 int FUNC_2 (struct fimc_context*,int) ;
 int FUNC_3 (struct fimc_context*,int) ;
 int FUNC_4 (struct fimc_context*,int ) ;
 int FUNC_5 (struct fimc_context*,int ,int ) ;
 int FUNC_6 (struct fimc_context*,int *) ;
 int FUNC_7 (struct fimc_context*) ;
 int FUNC_8 (struct fimc_context*,int,int ) ;

__attribute__((used)) static void FUNC_9(struct fimc_context *VAR_16)
{
 u32 VAR_17, VAR_18;

 FUNC_3(VAR_16, 1);


 FUNC_1(VAR_16, 0);
 FUNC_6(VAR_16, &VAR_16->sc);

 FUNC_7(VAR_16);
 FUNC_2(VAR_16, 0);


 VAR_17 = FUNC_4(VAR_16, VAR_12);
 VAR_17 &= ~VAR_14;
 VAR_17 |= VAR_15;
 FUNC_8(VAR_16, VAR_17, VAR_12);


 FUNC_8(VAR_16, 0x0, VAR_11);

 VAR_17 = FUNC_4(VAR_16, VAR_2);
 VAR_17 &= ~VAR_4;
 VAR_17 |= VAR_4;


 VAR_18 = FUNC_4(VAR_16, VAR_7);
 VAR_18 &= ~VAR_10;
 VAR_18 |= (VAR_8 |
  VAR_9);

 FUNC_8(VAR_16, VAR_18, VAR_7);


 VAR_17 |= VAR_3;
 FUNC_8(VAR_16, VAR_17, VAR_2);


 FUNC_0(VAR_16, VAR_0, VAR_1);

 FUNC_0(VAR_16, VAR_5, VAR_6);

 FUNC_5(VAR_16, VAR_12, VAR_13);
}
