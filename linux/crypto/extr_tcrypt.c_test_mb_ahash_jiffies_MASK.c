
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct test_mb_ahash_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct test_mb_ahash_data*,int,int*) ;
 unsigned long VAR_3 ;
 int* FUNC_1 (int,int,int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (char*,int,int,long) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct test_mb_ahash_data *VAR_4, int VAR_5,
     int VAR_6, u32 VAR_7)
{
 unsigned long VAR_8, VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 int *VAR_12;

 VAR_12 = FUNC_1(VAR_7, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 for (VAR_8 = VAR_3, VAR_9 = VAR_8 + VAR_6 * VAR_2, VAR_10 = 0;
      FUNC_4(VAR_3, VAR_9); VAR_10++) {
  VAR_11 = FUNC_0(VAR_4, VAR_7, VAR_12);
  if (VAR_11)
   goto out;
 }

 FUNC_3("%d operations in %d seconds (%ld bytes)\n",
  VAR_10 * VAR_7, VAR_6, (long)VAR_10 * VAR_5 * VAR_7);

out:
 FUNC_2(VAR_12);
 return VAR_11;
}
