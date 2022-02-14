
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct xiic_i2c {int nmsgs; int tx_pos; struct i2c_msg* tx_msg; struct i2c_msg* rx_msg; } ;
struct i2c_msg {scalar_t__ len; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct i2c_msg*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct xiic_i2c*,int) ;
 int FUNC_4 (struct xiic_i2c*,int ,int) ;
 int FUNC_5 (struct xiic_i2c*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct xiic_i2c *VAR_9)
{
 u8 VAR_10;
 struct i2c_msg *VAR_11 = VAR_9->rx_msg = VAR_9->tx_msg;
 unsigned long VAR_12;


 FUNC_3(VAR_9, VAR_4 | VAR_5);







 VAR_10 = VAR_11->len;
 if (VAR_10 > VAR_1)
  VAR_10 = VAR_1;
 FUNC_5(VAR_9, VAR_6, VAR_10 - 1);

 FUNC_2(VAR_12);
 if (!(VAR_11->flags & VAR_0))

  FUNC_4(VAR_9, VAR_2,
   FUNC_0(VAR_11) | VAR_7);

 FUNC_3(VAR_9, VAR_3);

 FUNC_4(VAR_9, VAR_2,
  VAR_11->len | ((VAR_9->nmsgs == 1) ? VAR_8 : 0));
 FUNC_1(VAR_12);

 if (VAR_9->nmsgs == 1)

  FUNC_3(VAR_9, VAR_3);


 VAR_9->tx_pos = VAR_11->len;
}
