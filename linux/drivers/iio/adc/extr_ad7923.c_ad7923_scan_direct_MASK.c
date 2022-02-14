
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7923_state {int settings; int * rx_buf; int scan_single_msg; int spi; int * tx_buf; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct ad7923_state *VAR_3, unsigned VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = VAR_2 | FUNC_0(VAR_4) |
  FUNC_1(VAR_0) |
  VAR_3->settings;
 VAR_6 <<= VAR_1;
 VAR_3->tx_buf[0] = FUNC_3(VAR_6);

 VAR_5 = FUNC_4(VAR_3->spi, &VAR_3->scan_single_msg);
 if (VAR_5)
  return VAR_5;

 return FUNC_2(VAR_3->rx_buf[0]);
}
