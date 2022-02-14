
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7298_state {unsigned int ext_ref; int * rx_buf; int scan_single_msg; int spi; int * tx_buf; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct ad7298_state *VAR_1, unsigned VAR_2)
{
 int VAR_3;
 VAR_1->tx_buf[0] = FUNC_2(VAR_0 | VAR_1->ext_ref |
       (FUNC_0(0) >> VAR_2));

 VAR_3 = FUNC_3(VAR_1->spi, &VAR_1->scan_single_msg);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_1->rx_buf[0]);
}
