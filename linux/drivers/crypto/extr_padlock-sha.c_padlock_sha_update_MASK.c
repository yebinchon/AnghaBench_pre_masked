
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct padlock_sha_desc {int fallback; } ;


 int FUNC_0 (int *,int const*,unsigned int) ;
 struct padlock_sha_desc* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_0,
         const u8 *VAR_1, unsigned int VAR_2)
{
 struct padlock_sha_desc *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(&VAR_3->fallback, VAR_1, VAR_2);
}
