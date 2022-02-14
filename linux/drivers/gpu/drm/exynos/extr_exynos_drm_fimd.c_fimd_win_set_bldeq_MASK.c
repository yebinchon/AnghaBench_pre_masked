
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimd_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (unsigned int) ;
 unsigned int VAR_4 ;



 int FUNC_3 (struct fimd_context*,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct fimd_context *VAR_5, unsigned int VAR_6,
          unsigned int VAR_7, unsigned int VAR_8)
{
 u32 VAR_9 = FUNC_0(0xf) | FUNC_1(0xf);
 u32 VAR_10 = 0;

 switch (VAR_8) {
 case 129:
 case 130:
  VAR_10 |= FUNC_0(VAR_1);
  VAR_10 |= FUNC_1(VAR_3);
  break;
 case 128:
 default:
  if (VAR_7 != VAR_4) {
   VAR_10 |= FUNC_0(VAR_0);
   VAR_10 |= FUNC_1(VAR_3);
  } else {
   VAR_10 |= FUNC_0(VAR_2);
   VAR_10 |= FUNC_1(VAR_3);
  }
  break;
 }
 FUNC_3(VAR_5, FUNC_2(VAR_6), VAR_9, VAR_10);
}
