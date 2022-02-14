
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib7000p_state {int dummy; } ;





 int FUNC_0 (struct dib7000p_state*,int) ;
 int FUNC_1 (struct dib7000p_state*,int,int) ;
 int FUNC_2 (struct dib7000p_state*,int,int,int,int ,int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct dib7000p_state *VAR_0, int VAR_1)
{
 u16 VAR_2 = FUNC_0(VAR_0, 1288) & ~(0x7 << 7);

 switch (VAR_1) {
 case 128:
   FUNC_3("SET MPEG ON DIBSTREAM TX\n");
   FUNC_2(VAR_0, 8, 5, 0, 0, 0, 0);
   VAR_2 |= (1<<9);
   break;
 case 129:
   FUNC_3("SET DIV_OUT ON DIBSTREAM TX\n");
   FUNC_2(VAR_0, 5, 5, 0, 0, 0, 0);
   VAR_2 |= (1<<8);
   break;
 case 130:
   FUNC_3("SET ADC_OUT ON DIBSTREAM TX\n");
   FUNC_2(VAR_0, 20, 5, 10, 0, 0, 0);
   VAR_2 |= (1<<7);
   break;
 default:
   break;
 }
 FUNC_1(VAR_0, 1288, VAR_2);
}
