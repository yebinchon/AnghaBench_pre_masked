
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,int,int,int const*) ;
 scalar_t__ FUNC_1 (char*,scalar_t__,char*) ;

__attribute__((used)) static ssize_t FUNC_2(char *VAR_2, const int *VAR_3, int VAR_4)
{
 int VAR_5;
 ssize_t VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_1, "[");
 switch (VAR_4) {
 case 128:
  for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
   VAR_6 += FUNC_0(VAR_2 + VAR_6, VAR_1 - VAR_6,
        VAR_4, 1, &VAR_3[VAR_5]);
   if (VAR_6 >= VAR_1)
    return -VAR_0;
   if (VAR_5 < 2)
    VAR_6 += FUNC_1(VAR_2 + VAR_6, VAR_1 - VAR_6,
      " ");
   else
    VAR_6 += FUNC_1(VAR_2 + VAR_6, VAR_1 - VAR_6,
      "]\n");
   if (VAR_6 >= VAR_1)
    return -VAR_0;
  }
  break;
 default:
  for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
   VAR_6 += FUNC_0(VAR_2 + VAR_6, VAR_1 - VAR_6,
        VAR_4, 2, &VAR_3[VAR_5 * 2]);
   if (VAR_6 >= VAR_1)
    return -VAR_0;
   if (VAR_5 < 2)
    VAR_6 += FUNC_1(VAR_2 + VAR_6, VAR_1 - VAR_6,
      " ");
   else
    VAR_6 += FUNC_1(VAR_2 + VAR_6, VAR_1 - VAR_6,
      "]\n");
   if (VAR_6 >= VAR_1)
    return -VAR_0;
  }
 }

 return VAR_6;
}
