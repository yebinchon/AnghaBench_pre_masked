
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpi2c_imx_struct {unsigned int txfifosize; scalar_t__ delivered; scalar_t__ msglen; unsigned int* tx_buf; int complete; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpi2c_imx_struct*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct lpi2c_imx_struct *VAR_4)
{
 unsigned int VAR_5, VAR_6;

 VAR_6 = FUNC_2(VAR_4->base + VAR_0) & 0xff;

 while (VAR_6 < VAR_4->txfifosize) {
  if (VAR_4->delivered == VAR_4->msglen)
   break;

  VAR_5 = VAR_4->tx_buf[VAR_4->delivered++];
  FUNC_3(VAR_5, VAR_4->base + VAR_1);
  VAR_6++;
 }

 if (VAR_4->delivered < VAR_4->msglen)
  FUNC_1(VAR_4, VAR_3 | VAR_2);
 else
  FUNC_0(&VAR_4->complete);
}
