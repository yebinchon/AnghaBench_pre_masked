
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stv {int receive_mode; scalar_t__ fectype; scalar_t__ mod_cod; scalar_t__ regoff; int pilots; scalar_t__ nr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;


 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct stv*,scalar_t__,int ) ;
 int FUNC_1 (struct stv*,scalar_t__,int*) ;
 int FUNC_2 (struct stv*,scalar_t__,int) ;
 int FUNC_3 (struct stv*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct stv *VAR_11)
{
 u8 VAR_12;

 FUNC_1(VAR_11, VAR_9 + VAR_11->regoff, &VAR_12);
 VAR_12 &= ~0xC0;

 switch (VAR_11->receive_mode) {
 case 129:
  VAR_12 |= 0x40;
  break;
 case 128:
  VAR_12 |= 0x80;
  break;
 default:
  VAR_12 |= 0xC0;
  break;
 }
 FUNC_2(VAR_11, VAR_9 + VAR_11->regoff, VAR_12);

 if (VAR_11->receive_mode == 128) {

  FUNC_3(VAR_11,
     VAR_10, VAR_11->nr ? 0x02 : 0x01,
     0x03);

  if (VAR_11->fectype == VAR_0) {
   u8 VAR_13 = FUNC_0(VAR_11, VAR_11->mod_cod,
        VAR_11->pilots);

   if (VAR_11->mod_cod <= VAR_4) {
    FUNC_2(VAR_11, VAR_8 +
       VAR_11->regoff, VAR_13);
   } else if (VAR_11->mod_cod <= VAR_3) {
    FUNC_2(VAR_11, VAR_8 +
       VAR_11->regoff, 0x2a);
    FUNC_2(VAR_11, VAR_7 +
       VAR_11->regoff, VAR_13);
   } else if (VAR_11->mod_cod <= VAR_1) {
    FUNC_2(VAR_11, VAR_8 +
       VAR_11->regoff, 0x2a);
    FUNC_2(VAR_11, VAR_5 +
       VAR_11->regoff, VAR_13);
   } else if (VAR_11->mod_cod <= VAR_2) {
    FUNC_2(VAR_11, VAR_8 +
       VAR_11->regoff, 0x2a);
    FUNC_2(VAR_11, VAR_6 +
       VAR_11->regoff, VAR_13);
   }
  }
 }
 return 0;
}
