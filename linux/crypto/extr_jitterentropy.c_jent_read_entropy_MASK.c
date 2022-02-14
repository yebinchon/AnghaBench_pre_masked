
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rand_data {int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct rand_data*) ;
 int FUNC_1 (struct rand_data*) ;
 int FUNC_2 (unsigned char*,int *,unsigned int) ;

int FUNC_3(struct rand_data *VAR_1, unsigned char *VAR_2,
        unsigned int VAR_3)
{
 unsigned char *VAR_4 = VAR_2;

 if (!VAR_1)
  return -1;

 while (0 < VAR_3) {
  unsigned int VAR_5;

  FUNC_1(VAR_1);
  FUNC_0(VAR_1);
  if ((VAR_0 / 8) < VAR_3)
   VAR_5 = (VAR_0 / 8);
  else
   VAR_5 = VAR_3;
  FUNC_2(VAR_4, &VAR_1->data, VAR_5);

  VAR_3 -= VAR_5;
  VAR_4 += VAR_5;
 }

 return 0;
}
