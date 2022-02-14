
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int dev; } ;
struct mthca_dev {int* rate; TYPE_1__ ib_dev; } ;
struct ib_port_attr {int active_speed; int active_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (TYPE_1__*,int,struct ib_port_attr*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ib_port_attr*) ;
 struct ib_port_attr* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct mthca_dev *VAR_2, u8 VAR_3)
{
 struct ib_port_attr *VAR_4 = ((void*)0);
 int VAR_5;

 VAR_4 = FUNC_4(sizeof *VAR_4, VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_1(&VAR_2->ib_dev, VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_0(&VAR_2->ib_dev.dev,
    "ib_query_port failed (%d) forport %d\n", VAR_5,
    VAR_3);
  goto out;
 }

 VAR_2->rate[VAR_3 - 1] = VAR_4->active_speed *
      FUNC_2(VAR_4->active_width);

out:
 FUNC_3(VAR_4);
 return VAR_5;
}
