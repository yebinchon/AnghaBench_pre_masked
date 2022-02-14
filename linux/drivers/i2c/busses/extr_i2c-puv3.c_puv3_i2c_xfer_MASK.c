
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int addr; int flags; int len; unsigned char* buf; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct i2c_adapter*,unsigned char*,int) ;
 int FUNC_3 (struct i2c_adapter*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_10, struct i2c_msg *VAR_11,
  int VAR_12)
{
 int VAR_13, VAR_14;
 unsigned char VAR_15;


 FUNC_1(VAR_5, VAR_4);


 FUNC_1(VAR_1 | VAR_3 | VAR_2, VAR_0);

 FUNC_1(VAR_11->addr, VAR_8);


 FUNC_1(VAR_6, VAR_4);

 FUNC_0(&VAR_10->dev, "puv3_i2c_xfer: processing %d messages:\n", VAR_12);

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  FUNC_0(&VAR_10->dev, " #%d: %sing %d byte%s %s 0x%02x\n", VAR_13,
   VAR_11->flags & VAR_7 ? "read" : "writ",
   VAR_11->len, VAR_11->len > 1 ? "s" : "",
   VAR_11->flags & VAR_7 ? "from" : "to", VAR_11->addr);

  if (VAR_11->len && VAR_11->buf) {
   if (VAR_11->flags & VAR_7)
    VAR_14 = FUNC_2(VAR_10, VAR_11->buf, VAR_11->len);
   else
    VAR_14 = FUNC_3(VAR_10, VAR_11->buf, VAR_11->len);

   if (VAR_14)
    return VAR_14;

  }
  FUNC_0(&VAR_10->dev, "transfer complete\n");
  VAR_11++;
 }


 if (VAR_11->addr == VAR_9) {
  VAR_15 = VAR_11->buf[0];
  VAR_11->buf[0] = VAR_11->buf[1];
  VAR_11->buf[1] = VAR_15;
 }

 return VAR_13;
}
