
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tx_count; int* tx_buf; scalar_t__ r_count; scalar_t__ r_size; scalar_t__ rx_ack; } ;
struct sii8620 {TYPE_1__ burst; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct sii8620*,int ,int*,int) ;

__attribute__((used)) static void FUNC_2(struct sii8620 *VAR_1)
{
 int VAR_2 = VAR_1->burst.tx_count;
 u8 *VAR_3 = VAR_1->burst.tx_buf;

 while (VAR_2 > 0) {
  int VAR_4 = VAR_3[1] + 2;

  if (VAR_1->burst.r_count + VAR_4 > VAR_1->burst.r_size)
   break;
  VAR_3[0] = FUNC_0(VAR_1->burst.rx_ack, 255);
  VAR_1->burst.rx_ack -= VAR_3[0];
  FUNC_1(VAR_1, VAR_0, VAR_3, VAR_4);
  VAR_1->burst.r_count += VAR_4;
  VAR_2 -= VAR_4;
  VAR_3 += VAR_4;
 }

 VAR_1->burst.tx_count = VAR_2;

 while (VAR_1->burst.rx_ack > 0) {
  u8 VAR_5[2] = { FUNC_0(VAR_1->burst.rx_ack, 255), 0 };

  if (VAR_1->burst.r_count + 2 > VAR_1->burst.r_size)
   break;
  VAR_1->burst.rx_ack -= VAR_5[0];
  FUNC_1(VAR_1, VAR_0, VAR_5, 2);
  VAR_1->burst.r_count += 2;
 }
}
