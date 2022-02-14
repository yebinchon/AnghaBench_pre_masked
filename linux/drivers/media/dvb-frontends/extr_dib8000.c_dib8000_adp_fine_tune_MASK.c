
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib8000_state {int dummy; } ;




 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (struct dib8000_state*,int,int const) ;

__attribute__((used)) static u16 FUNC_1(struct dib8000_state *VAR_3, u16 VAR_4)
{
 u16 VAR_5, VAR_6 = 0;
 const u16 *VAR_7;


 switch (VAR_4) {
 case 128:
   VAR_6 = 0x7;
   VAR_7 = &VAR_1[0];
   break;
 case 129:
   VAR_6 = 0x7;
   VAR_7 = &VAR_0[0];
   break;
 default:
   VAR_6 = 0;
   VAR_7 = &VAR_2[0];
   break;
 }

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
  FUNC_0(VAR_3, 215 + VAR_5, VAR_7[VAR_5]);

 return VAR_6;
}
