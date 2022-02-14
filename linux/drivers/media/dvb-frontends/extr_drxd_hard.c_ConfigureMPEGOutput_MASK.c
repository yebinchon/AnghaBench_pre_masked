
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drxd_state {scalar_t__ operation_mode; int m_EcOcRegOcModeLop; scalar_t__ enable_parallel; scalar_t__ insert_rs_byte; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct drxd_state*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct drxd_state *VAR_14, int VAR_15)
{
 int VAR_16;

 do {
  u16 VAR_17 = 0;
  u16 VAR_18 = 0;
  u16 VAR_19 = 0;
  u16 VAR_20 = 0;



  if (VAR_14->operation_mode == VAR_13) {
   if (VAR_15) {
    VAR_19 |=
        VAR_0;
   } else
    VAR_20 |= VAR_12;
   VAR_18 |=
       VAR_8;
  } else {
   VAR_18 = VAR_14->m_EcOcRegOcModeLop;

   if (VAR_15)
    VAR_20 &= (~(VAR_12));
   else
    VAR_20 |= VAR_12;


   if (VAR_14->insert_rs_byte) {
    VAR_18 &=
        (~(VAR_9));
    VAR_19 &=
        (~VAR_4);
    VAR_19 |=
        VAR_3;
   } else {
    VAR_18 |=
        VAR_8;
    VAR_19 &=
        (~VAR_4);
    VAR_19 |=
        VAR_2;
   }


   if (VAR_14->enable_parallel)
    VAR_18 &=
        (~(VAR_7));
   else
    VAR_18 |=
        VAR_6;
  }


  VAR_17 &= (~(0x00FF));



  VAR_17 &= (~(0x0100));



  VAR_17 &= (~(0x0200));



  VAR_17 &= (~(0x0400));



  VAR_17 &= (~(0x0800));


  VAR_16 = FUNC_0(VAR_14, VAR_1, VAR_17, 0);
  if (VAR_16 < 0)
   break;
  VAR_16 = FUNC_0(VAR_14, VAR_10, VAR_18, 0);
  if (VAR_16 < 0)
   break;
  VAR_16 = FUNC_0(VAR_14, VAR_5, VAR_19, 0x0000);
  if (VAR_16 < 0)
   break;
  VAR_16 = FUNC_0(VAR_14, VAR_11, VAR_20, 0);
  if (VAR_16 < 0)
   break;
 } while (0);
 return VAR_16;
}
