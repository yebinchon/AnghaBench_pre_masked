
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i2c_msg {int len; } ;
struct fsi_i2c_port {TYPE_1__* master; } ;
struct TYPE_2__ {int fsi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fsi_i2c_port*,struct i2c_msg*,int) ;
 int FUNC_1 (int ,int ,int*) ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct fsi_i2c_port *VAR_6, struct i2c_msg *VAR_7,
   unsigned long VAR_8)
{
 u32 VAR_9 = 0;
 int VAR_10;
 unsigned long VAR_11 = VAR_5;

 do {
  VAR_10 = FUNC_1(VAR_6->master->fsi, VAR_3,
          &VAR_9);
  if (VAR_10)
   return VAR_10;

  if (VAR_9 & VAR_4) {
   VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_9);
   if (VAR_10 < 0)
    return VAR_10;


   if (VAR_10 == VAR_7->len)
    return 0;


   continue;
  }

  FUNC_3(VAR_2, VAR_1);
 } while (FUNC_2(VAR_11 + VAR_8, VAR_5));

 return -VAR_0;
}
