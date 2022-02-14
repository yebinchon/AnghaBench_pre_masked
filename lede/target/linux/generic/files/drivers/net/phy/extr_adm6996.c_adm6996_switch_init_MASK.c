
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct switch_dev {char const* alias; int name; TYPE_2__* ops; int vlans; int ports; int cpu_port; } ;
struct net_device {int dummy; } ;
struct adm6996_priv {size_t model; int reg_mutex; struct switch_dev dev; } ;
struct TYPE_3__ {scalar_t__ n_attr; } ;
struct TYPE_4__ {int * get_port_link; TYPE_1__ attr_port; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 TYPE_2__ VAR_9 ;
 int FUNC_0 (struct adm6996_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char const*,int ) ;
 int FUNC_4 (struct adm6996_priv*,int ) ;
 int FUNC_5 (struct switch_dev*,struct net_device*) ;
 int FUNC_6 (struct adm6996_priv*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct adm6996_priv *VAR_10, const char *VAR_11, struct net_device *VAR_12)
{
 struct switch_dev *VAR_13;
 u16 VAR_14, VAR_15;

 if (!VAR_10->model) {

  VAR_15 = FUNC_4(VAR_10, VAR_6);
  VAR_14 = VAR_15 ^ (1 << 12);
  FUNC_6(VAR_10, VAR_6, VAR_14);
  VAR_14 ^= FUNC_4(VAR_10, VAR_6);
  if (VAR_14 & (1 << 12)) {




   VAR_10->model = VAR_0;
  } else {

   VAR_10->model = VAR_2;
   FUNC_6(VAR_10, VAR_6, VAR_15);
  }
 }

 VAR_13 = &VAR_10->dev;
 VAR_13->name = (VAR_8[VAR_10->model]);
 VAR_13->cpu_port = VAR_3;
 VAR_13->ports = VAR_4;
 VAR_13->vlans = VAR_5;
 VAR_13->ops = &VAR_9;
 VAR_13->alias = VAR_11;



 if (VAR_10->model == VAR_1) {
  VAR_9.attr_port.n_attr = 0;
  VAR_9.get_port_link = ((void*)0);
 }

 FUNC_3 ("%s: %s model PHY found.\n", VAR_11, VAR_13->name);

 FUNC_1(&VAR_10->reg_mutex);
 FUNC_0 (VAR_10);
 FUNC_2(&VAR_10->reg_mutex);

 if (VAR_10->model == VAR_2 || VAR_10->model == VAR_1) {
  return FUNC_5(VAR_13, VAR_12);
 }

 return -VAR_7;
}
