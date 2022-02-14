
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
 int FUNC_0 (struct sii8620*,int ) ;
 int FUNC_1 (struct sii8620*,int ,int) ;
 int FUNC_2 (struct sii8620*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct sii8620 *VAR_9)
{
 u8 VAR_10 = FUNC_0(VAR_9, VAR_6);

 if (VAR_10 & VAR_0) {
  u8 VAR_11 = FUNC_0(VAR_9, VAR_7);

  VAR_11 &= VAR_1 | VAR_4;
  if (VAR_11 == (VAR_1 | 0x02)) {
   FUNC_2(VAR_9,
    VAR_5, 0,
    VAR_8, VAR_2
           | VAR_3
   );
  }
 }

 FUNC_1(VAR_9, VAR_6, VAR_10);
}
