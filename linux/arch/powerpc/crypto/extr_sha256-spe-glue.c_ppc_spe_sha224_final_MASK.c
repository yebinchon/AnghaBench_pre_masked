
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct shash_desc {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct shash_desc*,int *) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_1, u8 *VAR_2)
{
 u32 VAR_3[VAR_0 >> 2];
 __be32 *VAR_4 = (__be32 *)VAR_2;

 FUNC_1(VAR_1, (u8 *)VAR_3);


 VAR_4[0] = VAR_3[0];
 VAR_4[1] = VAR_3[1];
 VAR_4[2] = VAR_3[2];
 VAR_4[3] = VAR_3[3];
 VAR_4[4] = VAR_3[4];
 VAR_4[5] = VAR_3[5];
 VAR_4[6] = VAR_3[6];


 FUNC_0(VAR_3, VAR_0);
 return 0;
}
