
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_desc {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int VAR_1 ;

int
FUNC_1(FILE *VAR_2)
{
 struct image_desc *VAR_3;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_0(VAR_2, &VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_2, &VAR_0);
 if (VAR_5)
  return VAR_5;

 return 0;
}
