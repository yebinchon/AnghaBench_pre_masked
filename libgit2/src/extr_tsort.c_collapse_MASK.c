
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsort_store {int dummy; } ;
struct tsort_run {int length; } ;
typedef int ssize_t ;


 int FUNC_0 (void**,struct tsort_run*,int,struct tsort_store*) ;

__attribute__((used)) static ssize_t FUNC_1(void **VAR_0, struct tsort_run *VAR_1, ssize_t VAR_2, struct tsort_store *VAR_3, ssize_t VAR_4)
{
 ssize_t VAR_5, VAR_6, VAR_7;

 while (1) {

  if (VAR_2 <= 1)
   break;


  if ((VAR_2 == 2) && (VAR_1[0].length + VAR_1[1].length == VAR_4)) {
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
   VAR_1[0].length += VAR_1[1].length;
   VAR_2--;
   break;
  }


  else if ((VAR_2 == 2) && (VAR_1[0].length <= VAR_1[1].length)) {
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
   VAR_1[0].length += VAR_1[1].length;
   VAR_2--;
   break;
  }
  else if (VAR_2 == 2)
   break;

  VAR_5 = VAR_1[VAR_2 - 3].length;
  VAR_6 = VAR_1[VAR_2 - 2].length;
  VAR_7 = VAR_1[VAR_2 - 1].length;


  if (VAR_5 <= VAR_6 + VAR_7) {
   if (VAR_5 < VAR_7) {
    FUNC_0(VAR_0, VAR_1, VAR_2 - 1, VAR_3);
    VAR_1[VAR_2 - 3].length += VAR_1[VAR_2 - 2].length;
    VAR_1[VAR_2 - 2] = VAR_1[VAR_2 - 1];
    VAR_2--;
   } else {
    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
    VAR_1[VAR_2 - 2].length += VAR_1[VAR_2 - 1].length;
    VAR_2--;
   }
  } else if (VAR_6 <= VAR_7) {
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
   VAR_1[VAR_2 - 2].length += VAR_1[VAR_2 - 1].length;
   VAR_2--;
  } else
   break;
 }

 return VAR_2;
}
