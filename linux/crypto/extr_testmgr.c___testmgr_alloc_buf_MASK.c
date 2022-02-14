
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (unsigned long,int) ;

__attribute__((used)) static int FUNC_2(char *VAR_3[VAR_2], int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_3[VAR_5] = (char *)FUNC_0(VAR_1, VAR_4);
  if (!VAR_3[VAR_5])
   goto err_free_buf;
 }

 return 0;

err_free_buf:
 while (VAR_5-- > 0)
  FUNC_1((unsigned long)VAR_3[VAR_5], VAR_4);

 return -VAR_0;
}
