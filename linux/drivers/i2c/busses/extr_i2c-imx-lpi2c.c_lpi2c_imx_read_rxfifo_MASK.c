
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpi2c_imx_struct {unsigned int* rx_buf; int delivered; unsigned int msglen; scalar_t__ base; scalar_t__ block_data; int complete; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpi2c_imx_struct*,int ) ;
 int FUNC_2 (struct lpi2c_imx_struct*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct lpi2c_imx_struct *VAR_6)
{
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10;

 do {
  VAR_10 = FUNC_3(VAR_6->base + VAR_1);
  if (VAR_10 & VAR_4)
   break;

  VAR_6->rx_buf[VAR_6->delivered++] = VAR_10 & 0xff;
 } while (1);





 if (VAR_6->block_data) {
  VAR_7 = VAR_6->rx_buf[0];
  VAR_6->msglen += VAR_7;
 }

 VAR_8 = VAR_6->msglen - VAR_6->delivered;

 if (!VAR_8) {
  FUNC_0(&VAR_6->complete);
  return;
 }


 FUNC_2(VAR_6);


 if (VAR_6->block_data) {
  VAR_6->block_data = 0;
  VAR_9 = VAR_8;
  VAR_9 |= (VAR_5 << 8);
  FUNC_4(VAR_9, VAR_6->base + VAR_2);
 } else if (!(VAR_6->delivered & 0xff)) {
  VAR_9 = (VAR_8 > VAR_0 ? VAR_0 : VAR_8) - 1;
  VAR_9 |= (VAR_5 << 8);
  FUNC_4(VAR_9, VAR_6->base + VAR_2);
 }

 FUNC_1(VAR_6, VAR_3);
}
