
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int dummy; } ;
typedef int gfp_t ;


 struct bio* FUNC_0 (int ,int) ;
 struct bio* FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

struct bio *FUNC_3(gfp_t VAR_1)
{
 struct bio *VAR_2;

 if (!FUNC_2(&VAR_0))
  return FUNC_0(VAR_1, 1);

 VAR_2 = FUNC_1(VAR_1, 1, &VAR_0);
 if (!VAR_2)
  return ((void*)0);
 return VAR_2;
}
