
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int dummy; } ;
struct ib_smp {int data; int attr_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ib_smp*) ;
 int FUNC_1 (struct ib_smp*) ;
 struct ib_smp* FUNC_2 (int,int ) ;
 struct ib_smp* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct mlx5_ib_dev*,int,int,int,int *,int *,struct ib_smp*,struct ib_smp*) ;

int FUNC_6(struct mlx5_ib_dev *VAR_4, char *VAR_5)
{
 struct ib_smp *VAR_6 = ((void*)0);
 struct ib_smp *VAR_7 = ((void*)0);
 int VAR_8 = -VAR_0;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_6 || !VAR_7)
  goto out;

 FUNC_0(VAR_6);
 VAR_6->attr_id = VAR_3;

 VAR_8 = FUNC_5(VAR_4, 1, 1, 1, ((void*)0), ((void*)0), VAR_6, VAR_7);
 if (VAR_8)
  goto out;

 FUNC_4(VAR_5, VAR_7->data, VAR_2);
out:
 FUNC_1(VAR_6);
 FUNC_1(VAR_7);
 return VAR_8;
}
