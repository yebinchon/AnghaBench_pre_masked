
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int len; unsigned char* buf; int addr; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 int FUNC_0 (int *,char*,unsigned char,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int ) ;
 int FUNC_4 (struct i2c_adapter*,int,int,int ,unsigned char*,int) ;
 int FUNC_5 (struct i2c_adapter*,int,int,int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_9, struct i2c_msg *VAR_10, int VAR_11)
{
 unsigned char *VAR_12;
 struct i2c_msg *VAR_13;
 int VAR_14, VAR_15;

 FUNC_0(&VAR_9->dev, "master xfer %d messages:\n", VAR_11);

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_6);
 if (!VAR_12)
  return -VAR_4;

 for (VAR_14 = 0 ; VAR_14 < VAR_11 ; VAR_14++) {
  int VAR_16 = VAR_1;

  if (VAR_14 == 0)
   VAR_16 |= VAR_2;

  if (VAR_14 == VAR_11-1)
   VAR_16 |= VAR_3;

  VAR_13 = &VAR_10[VAR_14];

  FUNC_0(&VAR_9->dev,
   "  %d: %s (flags %d) %d bytes to 0x%02x\n",
   VAR_14, VAR_13->flags & VAR_7 ? "read" : "write",
   VAR_13->flags, VAR_13->len, VAR_13->addr);


  if (VAR_13->flags & VAR_7) {

   if (FUNC_4(VAR_9, VAR_16,
         VAR_13->flags, VAR_13->addr,
         VAR_13->buf, VAR_13->len) != VAR_13->len) {
    FUNC_1(&VAR_9->dev,
     "failure reading data\n");
    VAR_15 = -VAR_5;
    goto out;
   }
  } else {

   if (FUNC_5(VAR_9, VAR_16,
          VAR_13->flags, VAR_13->addr,
          VAR_13->buf, VAR_13->len) != VAR_13->len) {
    FUNC_1(&VAR_9->dev,
     "failure writing data\n");
    VAR_15 = -VAR_5;
    goto out;
   }
  }


  if (FUNC_4(VAR_9, VAR_0, 0, 0, VAR_12, 1) != 1) {
   FUNC_1(&VAR_9->dev, "failure reading status\n");
   VAR_15 = -VAR_5;
   goto out;
  }

  FUNC_0(&VAR_9->dev, "  status = %d\n", *VAR_12);
  if (*VAR_12 == VAR_8) {
   VAR_15 = -VAR_5;
   goto out;
  }
 }

 VAR_15 = VAR_14;
out:
 FUNC_2(VAR_12);
 return VAR_15;
}
