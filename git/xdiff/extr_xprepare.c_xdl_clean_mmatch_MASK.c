
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;

__attribute__((used)) static int FUNC_0(char const *VAR_2, long VAR_3, long VAR_4, long VAR_5) {
 long VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 if (VAR_3 - VAR_4 > VAR_1)
  VAR_4 = VAR_3 - VAR_1;
 if (VAR_5 - VAR_3 > VAR_1)
  VAR_5 = VAR_3 + VAR_1;







 for (VAR_6 = 1, VAR_7 = 0, VAR_8 = 1; (VAR_3 - VAR_6) >= VAR_4; VAR_6++) {
  if (!VAR_2[VAR_3 - VAR_6])
   VAR_7++;
  else if (VAR_2[VAR_3 - VAR_6] == 2)
   VAR_8++;
  else
   break;
 }






 if (VAR_7 == 0)
  return 0;
 for (VAR_6 = 1, VAR_9 = 0, VAR_10 = 1; (VAR_3 + VAR_6) <= VAR_5; VAR_6++) {
  if (!VAR_2[VAR_3 + VAR_6])
   VAR_9++;
  else if (VAR_2[VAR_3 + VAR_6] == 2)
   VAR_10++;
  else
   break;
 }




 if (VAR_9 == 0)
  return 0;
 VAR_9 += VAR_7;
 VAR_10 += VAR_8;

 return VAR_10 * VAR_0 < (VAR_10 + VAR_9);
}
