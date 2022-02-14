
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct isl29501_private {int dummy; } ;


 size_t FUNC_0 (int**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int** VAR_3 ;
 int FUNC_1 (struct isl29501_private*,int ,size_t*) ;

__attribute__((used)) static int FUNC_2(struct isl29501_private *VAR_4,
    int *VAR_5, int *VAR_6)
{
 int VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_1(VAR_4, VAR_2, &VAR_8);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_8 >= FUNC_0(VAR_3))
  return -VAR_0;

 *VAR_5 = VAR_3[VAR_8][0];
 *VAR_6 = VAR_3[VAR_8][1];

 return VAR_1;
}
