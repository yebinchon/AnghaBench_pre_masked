
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int*,int*) ;
 void* FUNC_1 (void const*,int) ;

__attribute__((used)) static int FUNC_2(const void *VAR_1, int VAR_2, unsigned long *VAR_3,
          size_t *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 VAR_5 = FUNC_0(&VAR_6, &VAR_7);
 if (VAR_5)
  return VAR_5;

 if (VAR_2 < 4 * (VAR_6 + VAR_7))
  return -VAR_0;

 *VAR_3 = FUNC_1(VAR_1, VAR_6);
 *VAR_4 = FUNC_1(VAR_1 + 4 * VAR_6, VAR_7);

 return 0;
}
