
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {struct ps2_gpio_data* port_data; } ;
struct ps2_gpio_data {int tx_mutex; int tx_done; } ;


 int VAR_0 ;
 int FUNC_0 (struct serio*,unsigned char) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct serio *VAR_1, unsigned char VAR_2)
{
 struct ps2_gpio_data *VAR_3 = VAR_1->port_data;
 int VAR_4 = 0;

 if (FUNC_1()) {
  FUNC_3(&VAR_3->tx_mutex);
  FUNC_0(VAR_1, VAR_2);
  if (!FUNC_5(&VAR_3->tx_done,
       FUNC_2(10000)))
   VAR_4 = VAR_0;
  FUNC_4(&VAR_3->tx_mutex);
 } else {
  FUNC_0(VAR_1, VAR_2);
 }

 return VAR_4;
}
