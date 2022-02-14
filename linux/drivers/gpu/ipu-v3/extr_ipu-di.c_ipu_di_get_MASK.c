
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_soc {struct ipu_di** di_priv; } ;
struct ipu_di {int inuse; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipu_di* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct ipu_di *FUNC_3(struct ipu_soc *VAR_3, int VAR_4)
{
 struct ipu_di *VAR_5;

 if (VAR_4 > 1)
  return FUNC_0(-VAR_1);

 VAR_5 = VAR_3->di_priv[VAR_4];

 FUNC_1(&VAR_2);

 if (VAR_5->inuse) {
  VAR_5 = FUNC_0(-VAR_0);
  goto out;
 }

 VAR_5->inuse = 1;
out:
 FUNC_2(&VAR_2);

 return VAR_5;
}
