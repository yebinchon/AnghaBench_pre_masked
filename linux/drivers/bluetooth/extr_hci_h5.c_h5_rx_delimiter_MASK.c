
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart {struct h5* priv; } ;
struct h5 {int rx_func; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct hci_uart *VAR_2, unsigned char VAR_3)
{
 struct h5 *VAR_4 = VAR_2->priv;

 if (VAR_3 == VAR_0)
  VAR_4->rx_func = VAR_1;

 return 1;
}
