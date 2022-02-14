
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_soc {struct ipu_smfc_priv* smfc_priv; } ;
struct ipu_smfc_priv {int lock; struct ipu_smfc* channel; } ;
struct ipu_smfc {int inuse; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipu_smfc* FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct ipu_smfc *FUNC_3(struct ipu_soc *VAR_2, unsigned int VAR_3)
{
 struct ipu_smfc_priv *VAR_4 = VAR_2->smfc_priv;
 struct ipu_smfc *VAR_5, *VAR_6;
 unsigned long VAR_7;

 if (VAR_3 >= 4)
  return FUNC_0(-VAR_1);

 VAR_5 = &VAR_4->channel[VAR_3];
 VAR_6 = VAR_5;

 FUNC_1(&VAR_4->lock, VAR_7);

 if (VAR_5->inuse) {
  VAR_6 = FUNC_0(-VAR_0);
  goto unlock;
 }

 VAR_5->inuse = 1;
unlock:
 FUNC_2(&VAR_4->lock, VAR_7);
 return VAR_6;
}
