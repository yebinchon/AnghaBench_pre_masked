
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mv_cesa_ahash_req {int len; scalar_t__ algo_le; } ;
typedef int bits ;
typedef int __le64 ;
typedef int __be64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int *,int) ;
 int FUNC_3 (int*,int ,unsigned int) ;
 unsigned int FUNC_4 (struct mv_cesa_ahash_req*) ;

__attribute__((used)) static int FUNC_5(struct mv_cesa_ahash_req *VAR_0, u8 *VAR_1)
{
 unsigned int VAR_2;

 VAR_1[0] = 0x80;

 VAR_2 = FUNC_4(VAR_0);
 FUNC_3(VAR_1 + 1, 0, VAR_2 - 1);

 if (VAR_0->algo_le) {
  __le64 VAR_3 = FUNC_1(VAR_0->len << 3);
  FUNC_2(VAR_1 + VAR_2, &VAR_3, sizeof(VAR_3));
 } else {
  __be64 VAR_4 = FUNC_0(VAR_0->len << 3);
  FUNC_2(VAR_1 + VAR_2, &VAR_4, sizeof(VAR_4));
 }

 return VAR_2 + 8;
}
