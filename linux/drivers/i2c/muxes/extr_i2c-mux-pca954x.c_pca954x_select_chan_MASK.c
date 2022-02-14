
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pca954x {int last_chan; struct chip_desc* chip; struct i2c_client* client; } ;
struct i2c_mux_core {int parent; } ;
struct i2c_client {int dummy; } ;
struct chip_desc {scalar_t__ muxtype; int enable; } ;


 struct pca954x* FUNC_0 (struct i2c_mux_core*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_mux_core *VAR_1, u32 VAR_2)
{
 struct pca954x *VAR_3 = FUNC_0(VAR_1);
 struct i2c_client *VAR_4 = VAR_3->client;
 const struct chip_desc *VAR_5 = VAR_3->chip;
 u8 VAR_6;
 int VAR_7 = 0;


 if (VAR_5->muxtype == VAR_0)
  VAR_6 = VAR_2 | VAR_5->enable;
 else
  VAR_6 = 1 << VAR_2;


 if (VAR_3->last_chan != VAR_6) {
  VAR_7 = FUNC_1(VAR_1->parent, VAR_4, VAR_6);
  VAR_3->last_chan = VAR_7 < 0 ? 0 : VAR_6;
 }

 return VAR_7;
}
