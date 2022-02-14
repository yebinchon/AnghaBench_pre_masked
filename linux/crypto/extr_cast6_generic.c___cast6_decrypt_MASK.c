
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cast6_ctx {int ** Kr; int ** Km; } ;
typedef int __be32 ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct cast6_ctx *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 const __be32 *VAR_3 = (const __be32 *)VAR_2;
 __be32 *VAR_4 = (__be32 *)VAR_1;
 u32 VAR_5[4];
 u32 *VAR_6;
 u8 *VAR_7;

 VAR_5[0] = FUNC_2(VAR_3[0]);
 VAR_5[1] = FUNC_2(VAR_3[1]);
 VAR_5[2] = FUNC_2(VAR_3[2]);
 VAR_5[3] = FUNC_2(VAR_3[3]);

 VAR_6 = VAR_0->Km[11]; VAR_7 = VAR_0->Kr[11]; FUNC_0(VAR_5, VAR_7, VAR_6);
 VAR_6 = VAR_0->Km[10]; VAR_7 = VAR_0->Kr[10]; FUNC_0(VAR_5, VAR_7, VAR_6);
 VAR_6 = VAR_0->Km[9]; VAR_7 = VAR_0->Kr[9]; FUNC_0(VAR_5, VAR_7, VAR_6);
 VAR_6 = VAR_0->Km[8]; VAR_7 = VAR_0->Kr[8]; FUNC_0(VAR_5, VAR_7, VAR_6);
 VAR_6 = VAR_0->Km[7]; VAR_7 = VAR_0->Kr[7]; FUNC_0(VAR_5, VAR_7, VAR_6);
 VAR_6 = VAR_0->Km[6]; VAR_7 = VAR_0->Kr[6]; FUNC_0(VAR_5, VAR_7, VAR_6);
 VAR_6 = VAR_0->Km[5]; VAR_7 = VAR_0->Kr[5]; FUNC_1(VAR_5, VAR_7, VAR_6);
 VAR_6 = VAR_0->Km[4]; VAR_7 = VAR_0->Kr[4]; FUNC_1(VAR_5, VAR_7, VAR_6);
 VAR_6 = VAR_0->Km[3]; VAR_7 = VAR_0->Kr[3]; FUNC_1(VAR_5, VAR_7, VAR_6);
 VAR_6 = VAR_0->Km[2]; VAR_7 = VAR_0->Kr[2]; FUNC_1(VAR_5, VAR_7, VAR_6);
 VAR_6 = VAR_0->Km[1]; VAR_7 = VAR_0->Kr[1]; FUNC_1(VAR_5, VAR_7, VAR_6);
 VAR_6 = VAR_0->Km[0]; VAR_7 = VAR_0->Kr[0]; FUNC_1(VAR_5, VAR_7, VAR_6);

 VAR_4[0] = FUNC_3(VAR_5[0]);
 VAR_4[1] = FUNC_3(VAR_5[1]);
 VAR_4[2] = FUNC_3(VAR_5[2]);
 VAR_4[3] = FUNC_3(VAR_5[3]);
}
