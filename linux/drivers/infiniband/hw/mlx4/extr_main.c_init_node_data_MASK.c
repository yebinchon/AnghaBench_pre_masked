
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int node_guid; int * node_desc; } ;
struct mlx4_ib_dev {TYPE_1__ ib_dev; TYPE_2__* dev; } ;
struct ib_smp {scalar_t__ data; int attr_id; } ;
typedef int __be32 ;
struct TYPE_4__ {int rev_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_smp*) ;
 int FUNC_2 (struct ib_smp*) ;
 struct ib_smp* FUNC_3 (int,int ) ;
 struct ib_smp* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,scalar_t__,int) ;
 int FUNC_6 (struct mlx4_ib_dev*,int,int,int *,int *,struct ib_smp*,struct ib_smp*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(struct mlx4_ib_dev *VAR_7)
{
 struct ib_smp *VAR_8 = ((void*)0);
 struct ib_smp *VAR_9 = ((void*)0);
 int VAR_10 = VAR_5;
 int VAR_11 = -VAR_0;

 VAR_8 = FUNC_4(sizeof *VAR_8, VAR_1);
 VAR_9 = FUNC_3(sizeof *VAR_9, VAR_1);
 if (!VAR_8 || !VAR_9)
  goto out;

 FUNC_1(VAR_8);
 VAR_8->attr_id = VAR_3;
 if (FUNC_7(VAR_7->dev))
  VAR_10 |= VAR_6;

 VAR_11 = FUNC_6(VAR_7, VAR_10, 1, ((void*)0), ((void*)0), VAR_8, VAR_9);
 if (VAR_11)
  goto out;

 FUNC_5(VAR_7->ib_dev.node_desc, VAR_9->data, VAR_2);

 VAR_8->attr_id = VAR_4;

 VAR_11 = FUNC_6(VAR_7, VAR_10, 1, ((void*)0), ((void*)0), VAR_8, VAR_9);
 if (VAR_11)
  goto out;

 VAR_7->dev->rev_id = FUNC_0((__be32 *) (VAR_9->data + 32));
 FUNC_5(&VAR_7->ib_dev.node_guid, VAR_9->data + 12, 8);

out:
 FUNC_2(VAR_8);
 FUNC_2(VAR_9);
 return VAR_11;
}
