
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,int,int,int const*) ;
 scalar_t__ FUNC_1 (char*,scalar_t__,char*) ;

__attribute__((used)) static ssize_t FUNC_2(char *VAR_2, const int *VAR_3,
         int VAR_4, int VAR_5)
{
 int VAR_6;
 ssize_t VAR_7 = 0;

 switch (VAR_4) {
 case 128:
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   VAR_7 += FUNC_0(VAR_2 + VAR_7, VAR_1 - VAR_7,
        VAR_4, 1, &VAR_3[VAR_6]);
   if (VAR_7 >= VAR_1)
    return -VAR_0;
   if (VAR_6 < VAR_5 - 1)
    VAR_7 += FUNC_1(VAR_2 + VAR_7, VAR_1 - VAR_7,
      " ");
   else
    VAR_7 += FUNC_1(VAR_2 + VAR_7, VAR_1 - VAR_7,
      "\n");
   if (VAR_7 >= VAR_1)
    return -VAR_0;
  }
  break;
 default:
  for (VAR_6 = 0; VAR_6 < VAR_5 / 2; VAR_6++) {
   VAR_7 += FUNC_0(VAR_2 + VAR_7, VAR_1 - VAR_7,
        VAR_4, 2, &VAR_3[VAR_6 * 2]);
   if (VAR_7 >= VAR_1)
    return -VAR_0;
   if (VAR_6 < VAR_5 / 2 - 1)
    VAR_7 += FUNC_1(VAR_2 + VAR_7, VAR_1 - VAR_7,
      " ");
   else
    VAR_7 += FUNC_1(VAR_2 + VAR_7, VAR_1 - VAR_7,
      "\n");
   if (VAR_7 >= VAR_1)
    return -VAR_0;
  }
 }

 return VAR_7;
}
