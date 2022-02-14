
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int r_size; scalar_t__ rx_ack; } ;
struct sii8620 {TYPE_1__ burst; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sii8620*,int ) ;
 int VAR_8 ;
 int FUNC_1 (struct sii8620*,int) ;
 int FUNC_2 (struct sii8620*,int ) ;
 int FUNC_3 (struct sii8620*,int ) ;
 int FUNC_4 (struct sii8620*,int ,int) ;
 int FUNC_5 (struct sii8620*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct sii8620 *VAR_9)
{
 u8 VAR_10 = FUNC_3(VAR_9, VAR_4);
 u8 VAR_11 = FUNC_3(VAR_9, VAR_5);

 if ((VAR_11 & VAR_2) == VAR_7) {
  VAR_9->mode = VAR_1;
  VAR_9->burst.rx_ack = 0;
  VAR_9->burst.r_size = VAR_6;
  FUNC_0(VAR_9, VAR_6);
  FUNC_1(VAR_9, 1);
  FUNC_2(VAR_9, VAR_8);
 } else {
  FUNC_5(VAR_9,
   VAR_3, 0,
   VAR_3, VAR_0
  );
 }

 FUNC_4(VAR_9, VAR_4, VAR_10);
}
