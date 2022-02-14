
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_soc {struct ipu_dc_priv* dc_priv; } ;
struct ipu_dc_priv {int mutex; struct ipu_dc* channels; } ;
struct ipu_dc {int in_use; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipu_dc* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct ipu_dc *FUNC_3(struct ipu_soc *VAR_3, int VAR_4)
{
 struct ipu_dc_priv *VAR_5 = VAR_3->dc_priv;
 struct ipu_dc *VAR_6;

 if (VAR_4 >= VAR_2)
  return FUNC_0(-VAR_1);

 VAR_6 = &VAR_5->channels[VAR_4];

 FUNC_1(&VAR_5->mutex);

 if (VAR_6->in_use) {
  FUNC_2(&VAR_5->mutex);
  return FUNC_0(-VAR_0);
 }

 VAR_6->in_use = 1;

 FUNC_2(&VAR_5->mutex);

 return VAR_6;
}
