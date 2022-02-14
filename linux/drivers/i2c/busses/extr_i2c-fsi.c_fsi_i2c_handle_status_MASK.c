
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i2c_msg {int flags; scalar_t__ len; } ;
struct fsi_i2c_port {scalar_t__ xfrd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct fsi_i2c_port*,int) ;
 int FUNC_2 (struct fsi_i2c_port*,struct i2c_msg*,int ) ;
 int FUNC_3 (struct fsi_i2c_port*,struct i2c_msg*,int ) ;

__attribute__((used)) static int FUNC_4(struct fsi_i2c_port *VAR_19,
     struct i2c_msg *VAR_20, u32 VAR_21)
{
 int VAR_22;
 u8 VAR_23;

 if (VAR_21 & VAR_12) {
  VAR_22 = FUNC_1(VAR_19, VAR_21);
  if (VAR_22)
   return VAR_22;

  if (VAR_21 & VAR_14)
   return -VAR_2;

  if (VAR_21 & (VAR_17 | VAR_9 |
      VAR_8))
   return -VAR_6;

  if (VAR_21 & VAR_16)
   return -VAR_5;

  if (VAR_21 & VAR_15)
   return -VAR_0;

  if (VAR_21 & VAR_18)
   return -VAR_1;

  return -VAR_3;
 }

 if (VAR_21 & VAR_11) {
  VAR_23 = FUNC_0(VAR_13, VAR_21);

  if (VAR_20->flags & VAR_7)
   return FUNC_2(VAR_19, VAR_20, VAR_23);

  return FUNC_3(VAR_19, VAR_20, VAR_23);
 }

 if (VAR_21 & VAR_10) {
  if (VAR_19->xfrd < VAR_20->len)
   return -VAR_4;

  return VAR_20->len;
 }

 return 0;
}
