
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sii8620 {int dummy; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct sii8620*) ;
 int FUNC_1 (struct sii8620*) ;
 int FUNC_2 (struct sii8620*) ;
 int FUNC_3 (struct sii8620*,int ) ;
 int FUNC_4 (struct sii8620*,int ,int) ;
 int FUNC_5 (struct sii8620*,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_6(struct sii8620 *VAR_15)
{
 u8 VAR_16 = FUNC_3(VAR_15, VAR_9);

 if (VAR_16 & VAR_13)
  FUNC_0(VAR_15);

 if (VAR_16 & VAR_7) {
  u8 VAR_17 = FUNC_3(VAR_15, VAR_12);

  if ((VAR_17 & VAR_8) == VAR_14) {
   FUNC_1(VAR_15);
  } else {
   FUNC_5(VAR_15,
    VAR_11, VAR_3
     | VAR_2
     | VAR_4,
    VAR_10, VAR_7
     | VAR_1
     | VAR_0
     | VAR_6
   );
  }
 }
 if (VAR_16 & VAR_5)
  FUNC_2(VAR_15);

 FUNC_4(VAR_15, VAR_9, VAR_16);
}
