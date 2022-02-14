
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dns_srvinfo {int weight; int finalweight; } ;


 int FUNC_0 (int*) ;
 int* FUNC_1 (int) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct dns_srvinfo **VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 int *VAR_6;

 VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 <= VAR_2; VAR_3++)
  VAR_5 += VAR_0[VAR_3]->weight;

 if (VAR_5 == 0)
  return;

 VAR_6 = FUNC_1(sizeof(int) * (VAR_2 - VAR_1 + 1));

 for (VAR_3 = 0; VAR_3 <= VAR_2; VAR_3++) {
  for (;;) {
   VAR_6[VAR_3] = FUNC_2() % (VAR_0[VAR_3]->weight * 100 / VAR_5);
   for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    if (VAR_6[VAR_3] == VAR_6[VAR_4])
     break;
   }
   if (VAR_4 == VAR_3) {
    VAR_0[VAR_3]->finalweight = VAR_6[VAR_3];
    break;
   }
  }
 }

 FUNC_0(VAR_6);
}
