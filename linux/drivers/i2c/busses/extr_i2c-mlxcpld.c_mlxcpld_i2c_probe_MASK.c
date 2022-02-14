
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct platform_device {int id; int dev; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_6__ {int nr; TYPE_1__ dev; int * quirks; int timeout; } ;
struct mlxcpld_i2c_priv {int smbus_block; int lock; TYPE_2__ adap; int base_addr; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct mlxcpld_i2c_priv* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,struct mlxcpld_i2c_priv*) ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct mlxcpld_i2c_priv*,int ,int*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct platform_device*,struct mlxcpld_i2c_priv*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_10)
{
 struct mlxcpld_i2c_priv *VAR_11;
 int VAR_12;
 u8 VAR_13;

 VAR_11 = FUNC_0(&VAR_10->dev, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 FUNC_5(&VAR_11->lock);
 FUNC_6(VAR_10, VAR_11);

 VAR_11->dev = &VAR_10->dev;
 VAR_11->base_addr = VAR_7;


 VAR_8.timeout = FUNC_7(VAR_5);

 FUNC_3(VAR_11, VAR_6, &VAR_13, 1);

 if ((VAR_13 & VAR_3) == VAR_2)
  VAR_8.quirks = &VAR_9;

 if (VAR_13 & VAR_4)
  VAR_11->smbus_block = 1;
 if (VAR_10->id >= -1)
  VAR_8.nr = VAR_10->id;
 VAR_11->adap = VAR_8;
 VAR_11->adap.dev.parent = &VAR_10->dev;
 FUNC_2(&VAR_11->adap, VAR_11);

 VAR_12 = FUNC_1(&VAR_11->adap);
 if (VAR_12)
  FUNC_4(&VAR_11->lock);

 return VAR_12;
}
