
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct decon_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_2 ;



 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct decon_context*,int ,int,int) ;

__attribute__((used)) static void FUNC_6(struct decon_context *VAR_8, unsigned int VAR_9,
     unsigned int VAR_10, unsigned int VAR_11)
{
 u32 VAR_12 = VAR_10 >> 8;
 u32 VAR_13 = 0;

 switch (VAR_11) {
 case 129:
  break;
 case 130:
 case 128:
 default:
  VAR_13 |= VAR_5;
  VAR_13 |= VAR_6;
  VAR_13 |= VAR_4;
  break;
 }
 FUNC_5(VAR_8, FUNC_1(VAR_9), VAR_7, VAR_13);

 if (VAR_10 != VAR_2) {
  VAR_13 = FUNC_4(VAR_12) |
        FUNC_3(VAR_12) |
        FUNC_2(VAR_12);
  FUNC_5(VAR_8, FUNC_0(VAR_9),
          VAR_3, VAR_13);
  FUNC_5(VAR_8, VAR_1, VAR_0, VAR_0);
 }
}
