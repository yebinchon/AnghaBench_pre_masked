
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int rx_ack; scalar_t__ r_count; } ;
struct sii8620 {TYPE_1__ burst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int,int) ;
 int* FUNC_2 (struct sii8620*,int) ;
 int FUNC_3 (struct sii8620*,int ,int*,int) ;

__attribute__((used)) static void FUNC_4(struct sii8620 *VAR_2)
{
 u8 VAR_3[3], *VAR_4;
 int VAR_5;

 FUNC_3(VAR_2, VAR_0, VAR_3, 2);
 VAR_5 = FUNC_0(VAR_3);
 while (VAR_5 > 0) {
  int VAR_6 = FUNC_1(VAR_5, 3);

  FUNC_3(VAR_2, VAR_1, VAR_3, VAR_6);
  VAR_5 -= VAR_6;
  VAR_2->burst.rx_ack += VAR_6 - 1;
  VAR_2->burst.r_count -= VAR_3[1];
  if (VAR_2->burst.r_count < 0)
   VAR_2->burst.r_count = 0;

  if (VAR_6 < 3 || !VAR_3[2])
   continue;

  VAR_6 = VAR_3[2];
  VAR_4 = FUNC_2(VAR_2, VAR_6);
  if (!VAR_4)
   continue;
  FUNC_3(VAR_2, VAR_1, VAR_4, VAR_6);
  VAR_5 -= VAR_6;
  VAR_2->burst.rx_ack += VAR_6;
 }
}
