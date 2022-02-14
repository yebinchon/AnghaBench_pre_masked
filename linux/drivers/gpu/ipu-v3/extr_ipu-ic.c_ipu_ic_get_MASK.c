
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_soc {struct ipu_ic_priv* ic_priv; } ;
struct ipu_ic_priv {int lock; struct ipu_ic* task; } ;
struct ipu_ic {int in_use; } ;
typedef enum ipu_ic_task { ____Placeholder_ipu_ic_task } ipu_ic_task ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipu_ic* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct ipu_ic *FUNC_3(struct ipu_soc *VAR_3, enum ipu_ic_task VAR_4)
{
 struct ipu_ic_priv *VAR_5 = VAR_3->ic_priv;
 unsigned long VAR_6;
 struct ipu_ic *VAR_7, *VAR_8;

 if (VAR_4 >= VAR_2)
  return FUNC_0(-VAR_1);

 VAR_7 = &VAR_5->task[VAR_4];

 FUNC_1(&VAR_5->lock, VAR_6);

 if (VAR_7->in_use) {
  VAR_8 = FUNC_0(-VAR_0);
  goto unlock;
 }

 VAR_7->in_use = 1;
 VAR_8 = VAR_7;

unlock:
 FUNC_2(&VAR_5->lock, VAR_6);
 return VAR_8;
}
