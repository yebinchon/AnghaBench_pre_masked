
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {size_t buddy_got; int * buddy_data; int s; } ;


 int FUNC_0 (struct params*) ;
 int FUNC_1 (int ,int *,int,int ) ;

int FUNC_2(struct params *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0->s, &VAR_0->buddy_data[VAR_0->buddy_got], VAR_1, 0);
 if (VAR_2 <= 0) {
  FUNC_0(VAR_0);
  return 0;
 }

 VAR_0->buddy_got += VAR_2;
 return VAR_2 == VAR_1;
}
