
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0367_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stv0367_state*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct stv0367_state *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_2) +
   (FUNC_0(VAR_3, VAR_1) << 8) +
   (FUNC_0(VAR_3, VAR_0) << 16);

 VAR_5 /= 256;
 VAR_5 *= (VAR_4 / 1000);
 VAR_5 += 1;
 VAR_5 /= 32768;

 return VAR_5;
}
