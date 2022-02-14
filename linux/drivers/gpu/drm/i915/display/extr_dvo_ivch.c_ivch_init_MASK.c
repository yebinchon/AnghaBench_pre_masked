
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ivch_priv {int quiet; int width; int height; int* reg_backup; } ;
struct intel_dvo_device {int slave_addr; struct ivch_priv* dev_priv; struct i2c_adapter* i2c_bus; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (struct intel_dvo_device*) ;
 int FUNC_3 (struct intel_dvo_device*,int ,int*) ;
 int FUNC_4 (struct ivch_priv*) ;
 struct ivch_priv* FUNC_5 (int,int ) ;

__attribute__((used)) static bool FUNC_6(struct intel_dvo_device *VAR_6,
        struct i2c_adapter *VAR_7)
{
 struct ivch_priv *VAR_8;
 u16 VAR_9;
 int VAR_10;

 VAR_8 = FUNC_5(sizeof(struct ivch_priv), VAR_0);
 if (VAR_8 == ((void*)0))
  return 0;

 VAR_6->i2c_bus = VAR_7;
 VAR_6->dev_priv = VAR_8;
 VAR_8->quiet = 1;

 if (!FUNC_3(VAR_6, VAR_1, &VAR_9))
  goto out;
 VAR_8->quiet = 0;





 if ((VAR_9 & VAR_2) != VAR_6->slave_addr) {
  FUNC_1("ivch detect failed due to address mismatch "
     "(%d vs %d)\n",
     (VAR_9 & VAR_2), VAR_6->slave_addr);
  goto out;
 }

 FUNC_3(VAR_6, VAR_3, &VAR_8->width);
 FUNC_3(VAR_6, VAR_4, &VAR_8->height);




 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_5); VAR_10++)
  FUNC_3(VAR_6, VAR_5[VAR_10], VAR_8->reg_backup + VAR_10);

 FUNC_2(VAR_6);

 return 1;

out:
 FUNC_4(VAR_8);
 return 0;
}
