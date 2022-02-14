
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mib ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int,int*,size_t*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(int *VAR_0, int VAR_1, int *VAR_2, size_t *VAR_3)
{
 int VAR_4[12];

 if (VAR_1 > (int)(sizeof(VAR_4) / sizeof(int) - 2))
  return (-1);

 VAR_4[0] = 0;
 VAR_4[1] = 2;
 FUNC_0(VAR_4 + 2, VAR_0, VAR_1 * sizeof(int));

 if (FUNC_1(VAR_4, VAR_1 + 2, VAR_2, VAR_3, 0, 0) == -1)
  return (-1);

 return (0);
}
