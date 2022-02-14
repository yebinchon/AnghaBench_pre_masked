
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_7 = -VAR_1;
 int VAR_8;

 if (FUNC_0(&VAR_3, VAR_4))
  return -VAR_1;





 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  if (!FUNC_1(&VAR_6[VAR_8], VAR_5, VAR_2[VAR_8]))
   VAR_7 = 0;

 return VAR_7;
}
