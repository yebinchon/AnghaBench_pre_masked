
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrng {int ref; } ;


 int VAR_0 ;
 struct hwrng* FUNC_0 (int ) ;
 struct hwrng* VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

__attribute__((used)) static struct hwrng *FUNC_4(void)
{
 struct hwrng *VAR_3;

 if (FUNC_2(&VAR_2))
  return FUNC_0(-VAR_0);

 VAR_3 = VAR_1;
 if (VAR_3)
  FUNC_1(&VAR_3->ref);

 FUNC_3(&VAR_2);
 return VAR_3;
}
