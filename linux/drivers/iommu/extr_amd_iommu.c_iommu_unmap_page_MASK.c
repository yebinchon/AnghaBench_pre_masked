
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct protection_domain {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 unsigned long long* FUNC_2 (struct protection_domain*,unsigned long,unsigned long*) ;
 int FUNC_3 (unsigned long long) ;

__attribute__((used)) static unsigned long FUNC_4(struct protection_domain *VAR_0,
          unsigned long VAR_1,
          unsigned long VAR_2)
{
 unsigned long long VAR_3;
 unsigned long VAR_4;
 u64 *VAR_5;

 FUNC_0(!FUNC_3(VAR_2));

 VAR_3 = 0;

 while (VAR_3 < VAR_2) {

  VAR_5 = FUNC_2(VAR_0, VAR_1, &VAR_4);

  if (VAR_5) {
   int VAR_6, VAR_7;

   VAR_7 = FUNC_1(VAR_4);
   for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
    VAR_5[VAR_6] = 0ULL;
  }

  VAR_1 = (VAR_1 & ~(VAR_4 - 1)) + VAR_4;
  VAR_3 += VAR_4;
 }

 FUNC_0(VAR_3 && !FUNC_3(VAR_3));

 return VAR_3;
}
