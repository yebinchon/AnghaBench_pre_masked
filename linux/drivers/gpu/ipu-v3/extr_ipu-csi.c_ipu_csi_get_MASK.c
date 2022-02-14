
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_soc {struct ipu_csi** csi_priv; } ;
struct ipu_csi {int inuse; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipu_csi* FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct ipu_csi *FUNC_3(struct ipu_soc *VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 struct ipu_csi *VAR_5, *VAR_6;

 if (VAR_3 > 1)
  return FUNC_0(-VAR_1);

 VAR_5 = VAR_2->csi_priv[VAR_3];
 VAR_6 = VAR_5;

 FUNC_1(&VAR_5->lock, VAR_4);

 if (VAR_5->inuse) {
  VAR_6 = FUNC_0(-VAR_0);
  goto unlock;
 }

 VAR_5->inuse = 1;
unlock:
 FUNC_2(&VAR_5->lock, VAR_4);
 return VAR_6;
}
