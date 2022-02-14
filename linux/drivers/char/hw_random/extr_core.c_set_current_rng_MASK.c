
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrng {int dummy; } ;


 int FUNC_0 (int) ;
 struct hwrng* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct hwrng*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct hwrng *VAR_2)
{
 int VAR_3;

 FUNC_0(!FUNC_3(&VAR_1));

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_1();
 VAR_0 = VAR_2;

 return 0;
}
