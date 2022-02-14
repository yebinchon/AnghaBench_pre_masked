
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_msg {int flags; int len; int addr; } ;
struct fsi_i2c_port {scalar_t__ xfrd; struct fsi_i2c_master* master; } ;
struct fsi_i2c_master {int fsi; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct fsi_i2c_port *VAR_9, struct i2c_msg *VAR_10,
    bool VAR_11)
{
 struct fsi_i2c_master *VAR_12 = VAR_9->master;
 u32 VAR_13 = VAR_4 | VAR_3;

 VAR_9->xfrd = 0;

 if (VAR_10->flags & VAR_7)
  VAR_13 |= VAR_2;

 if (VAR_11 || VAR_10->flags & VAR_8)
  VAR_13 |= VAR_5;

 VAR_13 |= FUNC_0(VAR_0, VAR_10->addr);
 VAR_13 |= FUNC_0(VAR_1, VAR_10->len);

 return FUNC_1(VAR_12->fsi, VAR_6, &VAR_13);
}
