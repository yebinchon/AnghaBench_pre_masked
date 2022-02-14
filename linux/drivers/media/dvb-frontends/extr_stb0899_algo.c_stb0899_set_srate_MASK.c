
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct stb0899_state {int verbose; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct stb0899_state*,int ,int*,int) ;

__attribute__((used)) static u32 FUNC_3(struct stb0899_state *VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;
 u8 VAR_6[3];

 FUNC_0(VAR_2->verbose, VAR_0, 1, "-->");
 VAR_5 = FUNC_1((((u64)VAR_4) << 21) + VAR_3, 2 * VAR_3);
 VAR_5 <<= 4;

 VAR_6[0] = VAR_5 >> 16;
 VAR_6[1] = VAR_5 >> 8;
 VAR_6[2] = VAR_5;

 FUNC_2(VAR_2, VAR_1, VAR_6, 3);

 return VAR_4;
}
