
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adc108s102_state {int * rx_buf; int scan_single_msg; int spi; int * tx_buf; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct adc108s102_state *VAR_0, unsigned int VAR_1)
{
 int VAR_2;

 VAR_0->tx_buf[0] = FUNC_2(FUNC_0(VAR_1));
 VAR_2 = FUNC_3(VAR_0->spi, &VAR_0->scan_single_msg);
 if (VAR_2)
  return VAR_2;


 return FUNC_1(VAR_0->rx_buf[1]);
}
