
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_ib_diag_counters {int offset; int name; int num_counters; } ;
struct mlx4_ib_dev {int ib_dev; TYPE_2__* dev; struct mlx4_ib_diag_counters* diag_counters; } ;
struct TYPE_3__ {int flags2; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_ib_dev*,int *,int *,int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx4_ib_dev*,int ,int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct mlx4_ib_dev *VAR_3)
{
 struct mlx4_ib_diag_counters *VAR_4 = VAR_3->diag_counters;
 int VAR_5;
 int VAR_6;
 bool VAR_7 = !!(VAR_3->dev->caps.flags2 &
  VAR_0);

 if (FUNC_4(VAR_3->dev))
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {

  if (VAR_5 && !VAR_7)
   continue;

  VAR_6 = FUNC_0(VAR_3, &VAR_4[VAR_5].name,
          &VAR_4[VAR_5].offset,
          &VAR_4[VAR_5].num_counters, VAR_5);
  if (VAR_6)
   goto err_alloc;

  FUNC_3(VAR_3, VAR_4[VAR_5].name,
        VAR_4[VAR_5].offset, VAR_5);
 }

 FUNC_1(&VAR_3->ib_dev, &VAR_2);

 return 0;

err_alloc:
 if (VAR_5) {
  FUNC_2(VAR_4[VAR_5 - 1].name);
  FUNC_2(VAR_4[VAR_5 - 1].offset);
 }

 return VAR_6;
}
