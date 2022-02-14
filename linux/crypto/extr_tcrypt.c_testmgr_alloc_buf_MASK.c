
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static int FUNC_2(char *VAR_3[VAR_2])
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3[VAR_4] = (void *)FUNC_0(VAR_1);
  if (!VAR_3[VAR_4])
   goto err_free_buf;
 }

 return 0;

err_free_buf:
 while (VAR_4-- > 0)
  FUNC_1((unsigned long)VAR_3[VAR_4]);

 return -VAR_0;
}
