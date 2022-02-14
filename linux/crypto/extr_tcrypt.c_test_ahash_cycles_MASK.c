
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahash_request {int dummy; } ;
typedef scalar_t__ cycles_t ;


 int FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct ahash_request*,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*,unsigned long,unsigned long) ;
 int FUNC_6 (struct ahash_request*,int,char*) ;

__attribute__((used)) static int FUNC_7(struct ahash_request *VAR_0, int VAR_1,
        int VAR_2, char *VAR_3)
{
 unsigned long VAR_4 = 0;
 int VAR_5, VAR_6, VAR_7;

 if (VAR_2 == VAR_1)
  return FUNC_6(VAR_0, VAR_1, VAR_3);


 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  VAR_7 = FUNC_3(VAR_0, FUNC_1(VAR_0));
  if (VAR_7)
   goto out;
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6 += VAR_2) {
   VAR_7 = FUNC_3(VAR_0, FUNC_2(VAR_0));
   if (VAR_7)
    goto out;
  }
  VAR_7 = FUNC_3(VAR_0, FUNC_0(VAR_0));
  if (VAR_7)
   goto out;
 }


 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  cycles_t VAR_8, VAR_9;

  VAR_8 = FUNC_4();

  VAR_7 = FUNC_3(VAR_0, FUNC_1(VAR_0));
  if (VAR_7)
   goto out;
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6 += VAR_2) {
   VAR_7 = FUNC_3(VAR_0, FUNC_2(VAR_0));
   if (VAR_7)
    goto out;
  }
  VAR_7 = FUNC_3(VAR_0, FUNC_0(VAR_0));
  if (VAR_7)
   goto out;

  VAR_9 = FUNC_4();

  VAR_4 += VAR_9 - VAR_8;
 }

out:
 if (VAR_7)
  return VAR_7;

 FUNC_5("%6lu cycles/operation, %4lu cycles/byte\n",
  VAR_4 / 8, VAR_4 / (8 * VAR_1));

 return 0;
}
