
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sii8620 {int cbus_status; int sink_detected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sii8620*) ;
 int FUNC_1 (struct sii8620*) ;
 int FUNC_2 (struct sii8620*) ;
 int FUNC_3 (struct sii8620*) ;
 int FUNC_4 (struct sii8620*) ;
 int FUNC_5 (struct sii8620*) ;
 int FUNC_6 (struct sii8620*,int ) ;
 int FUNC_7 (struct sii8620*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct sii8620 *VAR_8)
{
 u8 VAR_9 = FUNC_6(VAR_8, VAR_6);

 if (VAR_9 & ~VAR_0)
  FUNC_7(VAR_8, VAR_6, VAR_9 & ~VAR_0);

 if (VAR_9 & VAR_0) {
  u8 VAR_10 = FUNC_6(VAR_8, VAR_7);

  if ((VAR_10 ^ VAR_8->cbus_status) & VAR_5) {
   FUNC_7(VAR_8, VAR_6, VAR_0);
  } else {
   VAR_9 ^= VAR_5;
   VAR_10 ^= VAR_5;
  }
  VAR_8->cbus_status = VAR_10;
 }

 if (VAR_9 & VAR_3)
  FUNC_4(VAR_8);

 if (VAR_9 & VAR_0) {
  if (VAR_8->cbus_status & VAR_5) {
   VAR_8->sink_detected = 1;
   FUNC_1(VAR_8);
  } else {
   FUNC_0(VAR_8);
  }
 }

 if (VAR_9 & VAR_2)
  FUNC_3(VAR_8);

 if (VAR_9 & VAR_4)
  FUNC_5(VAR_8);

 if (VAR_9 & VAR_1)
  FUNC_2(VAR_8);
}
