
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct shash_desc {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_0, u8 *VAR_1)
{
 u32 *VAR_2 = FUNC_1(VAR_0);

 *(__le32 *)VAR_1 = FUNC_0(VAR_2);
 return 0;
}
