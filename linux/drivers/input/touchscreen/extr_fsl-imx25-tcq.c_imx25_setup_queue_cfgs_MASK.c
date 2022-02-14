
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mx25_tcq_priv {int sample_count; int core_regs; int regs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (unsigned int) ;
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
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct mx25_tcq_priv *VAR_21,
       unsigned int VAR_22)
{
 u32 VAR_23 =
   VAR_18 |
   FUNC_2(VAR_22);
 u32 VAR_24 =
   VAR_19 |
   FUNC_1(1) |
   FUNC_2(VAR_22);

 FUNC_3(VAR_21->core_regs, VAR_20, VAR_23);


 FUNC_3(VAR_21->regs, FUNC_0(VAR_14),
       VAR_23);


 FUNC_3(VAR_21->regs, FUNC_0(VAR_15),
       VAR_24);


 FUNC_3(VAR_21->regs, FUNC_0(VAR_16),
       VAR_13 |
       VAR_7 |
       VAR_9 |
       VAR_5 |
       VAR_2 |
       VAR_3 |
       FUNC_1(VAR_21->sample_count) |
       FUNC_2(VAR_22));


 FUNC_3(VAR_21->regs, FUNC_0(VAR_17),
       VAR_11 |
       VAR_12 |
       VAR_8 |
       VAR_10 |
       VAR_6 |
       VAR_1 |
       VAR_4 |
       FUNC_1(VAR_21->sample_count) |
       FUNC_2(VAR_22));


 FUNC_3(VAR_21->core_regs, VAR_20, VAR_24 |
       VAR_0);
}
