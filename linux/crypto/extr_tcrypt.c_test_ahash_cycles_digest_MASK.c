
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahash_request {int dummy; } ;
typedef scalar_t__ cycles_t ;


 int FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ahash_request *VAR_0, int VAR_1,
        char *VAR_2)
{
 unsigned long VAR_3 = 0;
 int VAR_4, VAR_5;


 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  VAR_4 = FUNC_1(VAR_0, FUNC_0(VAR_0));
  if (VAR_4)
   goto out;
 }


 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  cycles_t VAR_6, VAR_7;

  VAR_6 = FUNC_2();

  VAR_4 = FUNC_1(VAR_0, FUNC_0(VAR_0));
  if (VAR_4)
   goto out;

  VAR_7 = FUNC_2();

  VAR_3 += VAR_7 - VAR_6;
 }

out:
 if (VAR_4)
  return VAR_4;

 FUNC_3("%6lu cycles/operation, %4lu cycles/byte\n",
  VAR_3 / 8, VAR_3 / (8 * VAR_1));

 return 0;
}
