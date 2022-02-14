
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct test_mb_ahash_data {int dummy; } ;
typedef scalar_t__ cycles_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct test_mb_ahash_data*,int,int*) ;
 scalar_t__ FUNC_1 () ;
 int* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (char*,unsigned long,int) ;

__attribute__((used)) static int FUNC_5(struct test_mb_ahash_data *VAR_2, int VAR_3,
    u32 VAR_4)
{
 unsigned long VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7;
 int *VAR_8;

 VAR_8 = FUNC_2(VAR_4, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;


 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  VAR_6 = FUNC_0(VAR_2, VAR_4, VAR_8);
  if (VAR_6)
   goto out;
 }


 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  cycles_t VAR_9, VAR_10;

  VAR_9 = FUNC_1();
  VAR_6 = FUNC_0(VAR_2, VAR_4, VAR_8);
  VAR_10 = FUNC_1();

  if (VAR_6)
   goto out;

  VAR_5 += VAR_10 - VAR_9;
 }

 FUNC_4("1 operation in %lu cycles (%d bytes)\n",
  (VAR_5 + 4) / (8 * VAR_4), VAR_3);

out:
 FUNC_3(VAR_8);
 return VAR_6;
}
