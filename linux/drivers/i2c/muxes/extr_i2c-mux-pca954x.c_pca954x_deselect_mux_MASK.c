
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pca954x {scalar_t__ last_chan; int idle_state; struct i2c_client* client; } ;
struct i2c_mux_core {int parent; } ;
struct i2c_client {int dummy; } ;
typedef scalar_t__ s8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct pca954x* FUNC_1 (struct i2c_mux_core*) ;
 int FUNC_2 (int ,struct i2c_client*,scalar_t__) ;
 int FUNC_3 (struct i2c_mux_core*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct i2c_mux_core *VAR_1, u32 VAR_2)
{
 struct pca954x *VAR_3 = FUNC_1(VAR_1);
 struct i2c_client *VAR_4 = VAR_3->client;
 s8 VAR_5;

 VAR_5 = FUNC_0(VAR_3->idle_state);
 if (VAR_5 >= 0)

  return FUNC_3(VAR_1, VAR_5);

 if (VAR_5 == VAR_0) {

  VAR_3->last_chan = 0;
  return FUNC_2(VAR_1->parent, VAR_4,
      VAR_3->last_chan);
 }



 return 0;
}
