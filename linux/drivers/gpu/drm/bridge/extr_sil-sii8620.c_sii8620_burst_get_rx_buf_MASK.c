
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* rx_buf; size_t rx_count; scalar_t__ tx_count; int tx_buf; } ;
struct sii8620 {TYPE_1__ burst; int error; int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static u8 *FUNC_2(struct sii8620 *VAR_1, int VAR_2)
{
 u8 *VAR_3 = &VAR_1->burst.rx_buf[VAR_1->burst.rx_count];
 int VAR_4 = VAR_2 + 1;

 if (VAR_1->burst.tx_count + VAR_4 > FUNC_0(VAR_1->burst.tx_buf)) {
  FUNC_1(VAR_1->dev, "RX-BLK buffer exhausted\n");
  VAR_1->error = -VAR_0;
  return ((void*)0);
 }

 VAR_1->burst.rx_count += VAR_4;
 VAR_3[0] = VAR_2;

 return VAR_3 + 1;
}
