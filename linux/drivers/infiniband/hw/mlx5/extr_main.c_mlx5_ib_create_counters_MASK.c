
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {int dummy; } ;
struct ib_counters {int dummy; } ;
struct mlx5_ib_mcounters {struct ib_counters ibcntrs; int mcntrs_mutex; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 struct ib_counters* FUNC_0 (int ) ;
 int VAR_1 ;
 struct mlx5_ib_mcounters* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct ib_counters *FUNC_3(struct ib_device *VAR_2,
         struct uverbs_attr_bundle *VAR_3)
{
 struct mlx5_ib_mcounters *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 FUNC_2(&VAR_4->mcntrs_mutex);

 return &VAR_4->ibcntrs;
}
