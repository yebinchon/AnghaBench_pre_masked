
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct test_mb_aead_data {int dummy; } ;
typedef scalar_t__ cycles_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct test_mb_aead_data*,int,int,int*) ;
 scalar_t__ FUNC_1 () ;
 int* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (char*,unsigned long,int) ;

__attribute__((used)) static int FUNC_5(struct test_mb_aead_data *VAR_2, int VAR_3,
          int VAR_4, u32 VAR_5)
{
 unsigned long VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8;
 int *VAR_9;

 VAR_9 = FUNC_2(VAR_5, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;


 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_5, VAR_9);
  if (VAR_7)
   goto out;
 }


 for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
  cycles_t VAR_10, VAR_11;

  VAR_10 = FUNC_1();
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_5, VAR_9);
  VAR_11 = FUNC_1();

  if (VAR_7)
   goto out;

  VAR_6 += VAR_11 - VAR_10;
 }

 FUNC_4("1 operation in %lu cycles (%d bytes)\n",
  (VAR_6 + 4) / (8 * VAR_5), VAR_4);

out:
 FUNC_3(VAR_9);
 return VAR_7;
}
