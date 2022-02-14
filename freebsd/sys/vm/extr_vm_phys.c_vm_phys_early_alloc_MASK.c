
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
struct TYPE_2__ {scalar_t__ end; scalar_t__ start; int domain; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*) ;
 size_t* VAR_2 ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (size_t,int) ;

vm_paddr_t
FUNC_5(int VAR_3, size_t VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 vm_paddr_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;







 VAR_12 = 0;
 VAR_6 = 0;
 VAR_9 = 0;
 VAR_10 = -1;
 VAR_12 = 0;
 VAR_7 = 0;
 for (VAR_5 = 0; VAR_2[VAR_5 + 1] != 0; VAR_5 += 2) {

  if (VAR_2[VAR_5+1] - VAR_4 < VAR_9 ||
      VAR_2[VAR_5+1] > VAR_10)
   continue;
  VAR_11 = FUNC_3(VAR_5);
  if (VAR_11 > VAR_12) {
   VAR_7 = VAR_5;
   VAR_12 = VAR_11;
  }
 }
 VAR_4 = FUNC_1(VAR_4);




 if (VAR_4 == VAR_0) {
  VAR_8 = VAR_2[VAR_7];
  VAR_2[VAR_7] += VAR_0;
  FUNC_2(VAR_7);
  return (VAR_8);
 }




 VAR_13 = VAR_2[VAR_7 + 1] & (VAR_4 - 1);
 if (VAR_4 + VAR_13 > VAR_12)
  FUNC_0("cannot find a large enough size\n");
 if (VAR_13 != 0 &&
     FUNC_4(VAR_2[VAR_7 + 1] - VAR_13,
     VAR_7) != 0)

  VAR_2[VAR_7 + 1] -= VAR_13;

 VAR_2[VAR_7 + 1] -= VAR_4;
 FUNC_2(VAR_7);
 VAR_8 = VAR_2[VAR_7 + 1];
 return (VAR_8);
}
