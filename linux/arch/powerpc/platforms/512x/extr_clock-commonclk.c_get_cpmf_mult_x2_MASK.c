
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int spmr; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int FUNC_2(void)
{
 static int VAR_1[] = {

  72, 2, 2, 3, 4, 5, 6, 7,
 };
 static int VAR_2[] = {

  2, 2, 2, 3, 4, 5, 6, 7,
 };

 int *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_0->spmr, 16, 4);
 if (FUNC_1())
  VAR_3 = VAR_2;
 else
  VAR_3 = VAR_1;
 return VAR_3[VAR_4];
}
