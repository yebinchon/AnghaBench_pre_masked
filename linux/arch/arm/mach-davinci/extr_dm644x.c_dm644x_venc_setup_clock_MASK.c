
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum vpbe_enc_timings_type { ____Placeholder_vpbe_enc_timings_type } vpbe_enc_timings_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(enum vpbe_enc_timings_type VAR_5,
       unsigned int VAR_6)
{
 int VAR_7 = 0;
 u32 VAR_8 = VAR_2;

 switch (VAR_5) {
 case 128:
  VAR_8 |= VAR_0;
  FUNC_1(VAR_8, FUNC_0(VAR_4));
  break;
 case 129:
  if (VAR_6 <= 27000000) {
   VAR_8 |= VAR_0;
   FUNC_1(VAR_8, FUNC_0(VAR_4));
  } else {




   VAR_8 |= VAR_1;
   FUNC_1(VAR_8, FUNC_0(VAR_4));
  }
  break;
 default:
  VAR_7 = -VAR_3;
 }

 return VAR_7;
}
