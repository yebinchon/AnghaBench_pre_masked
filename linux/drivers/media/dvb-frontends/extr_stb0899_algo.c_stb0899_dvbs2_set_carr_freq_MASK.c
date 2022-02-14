
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stb0899_state {struct stb0899_config* config; } ;
struct stb0899_config {int crl_nco_bits; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct stb0899_state*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct stb0899_state *VAR_4, s32 VAR_5, u32 VAR_6)
{
 struct stb0899_config *VAR_7 = VAR_4->config;
 s32 VAR_8;
 u32 VAR_9;

 VAR_8 = (1 << VAR_7->crl_nco_bits) / VAR_6;
 VAR_8 *= VAR_5;
 VAR_9 = FUNC_0(VAR_3, VAR_0);
 FUNC_1(VAR_0, VAR_9, VAR_8);
 FUNC_2(VAR_4, VAR_3, VAR_1, VAR_2, VAR_9);
}
