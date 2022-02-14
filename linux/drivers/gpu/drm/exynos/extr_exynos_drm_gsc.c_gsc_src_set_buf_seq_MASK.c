
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct gsc_context *VAR_3, u32 VAR_4,
          bool VAR_5)
{
 bool VAR_6 = !VAR_5;
 u32 VAR_7;
 u32 VAR_8 = 0x00000001 << VAR_4;


 VAR_7 = FUNC_0(VAR_2);


 VAR_7 &= ~VAR_8;
 VAR_7 |= VAR_6 << VAR_4;
 FUNC_1(VAR_7, VAR_2);
 FUNC_1(VAR_7, VAR_0);
 FUNC_1(VAR_7, VAR_1);
}
