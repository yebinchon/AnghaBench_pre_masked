
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct test_mb_aead_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct test_mb_aead_data*,int,int,int*) ;
 unsigned long VAR_3 ;
 int* FUNC_1 (int,int,int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (char*,int,int,long) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct test_mb_aead_data *VAR_4, int VAR_5,
    int VAR_6, int VAR_7, u32 VAR_8)
{
 unsigned long VAR_9, VAR_10;
 int VAR_11;
 int VAR_12 = 0;
 int *VAR_13;

 VAR_13 = FUNC_1(VAR_8, sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 for (VAR_9 = VAR_3, VAR_10 = VAR_9 + VAR_7 * VAR_2, VAR_11 = 0;
      FUNC_4(VAR_3, VAR_10); VAR_11++) {
  VAR_12 = FUNC_0(VAR_4, VAR_5, VAR_8, VAR_13);
  if (VAR_12)
   goto out;
 }

 FUNC_3("%d operations in %d seconds (%ld bytes)\n",
  VAR_11 * VAR_8, VAR_7, (long)VAR_11 * VAR_6 * VAR_8);

out:
 FUNC_2(VAR_13);
 return VAR_12;
}
