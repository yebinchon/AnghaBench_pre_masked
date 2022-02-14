
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 unsigned char FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_7, unsigned char *VAR_8, int VAR_9)
{
 int VAR_10 = *VAR_8;


 while (VAR_9--) {
  if (!FUNC_1(VAR_6)) {
   FUNC_0(&VAR_7->dev, "Tx FIFO Not Full timeout\n");
   return -VAR_0;
  }


  FUNC_3(VAR_10 | VAR_4, VAR_1);


  VAR_10++;


  FUNC_3(VAR_3, VAR_1);


  if (!FUNC_1(VAR_5)) {
   FUNC_0(&VAR_7->dev, "RXRDY timeout\n");
   return -VAR_0;
  }


  *VAR_8 = (FUNC_2(VAR_1) & VAR_2);
  VAR_8++;
 }

 return 0;
}
