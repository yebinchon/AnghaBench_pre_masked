
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct mixer_context {int dummy; } ;


 unsigned int VAR_0 ;



 int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (struct mixer_context*,int ,unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct mixer_context *VAR_6, unsigned int VAR_7,
    unsigned int VAR_8, unsigned int VAR_9)
{
 u32 VAR_10 = VAR_9 >> 8;
 u32 VAR_11;

 VAR_11 = VAR_2;
 switch (VAR_8) {
 case 129:
  break;
 case 130:
  VAR_11 |= VAR_4;
  break;
 case 128:
 default:
  VAR_11 |= VAR_1;
  VAR_11 |= VAR_4;
  break;
 }

 if (VAR_9 != VAR_0) {
  VAR_11 |= VAR_5;
  VAR_11 |= VAR_10;
 }
 FUNC_1(VAR_6, FUNC_0(VAR_7),
       VAR_11, VAR_3);
}
