
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct dsi_data {TYPE_1__* vc; } ;
typedef enum fifo_size { ____Placeholder_fifo_size } fifo_size ;
struct TYPE_2__ {int rx_fifo_size; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (struct dsi_data*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct dsi_data *VAR_1,
  enum fifo_size VAR_2, enum fifo_size VAR_3,
  enum fifo_size VAR_4, enum fifo_size VAR_5)
{
 u32 VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8;

 VAR_1->vc[0].rx_fifo_size = VAR_2;
 VAR_1->vc[1].rx_fifo_size = VAR_3;
 VAR_1->vc[2].rx_fifo_size = VAR_4;
 VAR_1->vc[3].rx_fifo_size = VAR_5;

 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  u8 VAR_9;
  int VAR_10 = VAR_1->vc[VAR_8].rx_fifo_size;

  if (VAR_7 + VAR_10 > 4) {
   FUNC_1("Illegal FIFO configuration\n");
   FUNC_0();
   return;
  }

  VAR_9 = FUNC_2(VAR_7, 2, 0) | FUNC_2(VAR_10, 7, 4);
  VAR_6 |= VAR_9 << (8 * VAR_8);

  VAR_7 += VAR_10;
 }

 FUNC_3(VAR_1, VAR_0, VAR_6);
}
