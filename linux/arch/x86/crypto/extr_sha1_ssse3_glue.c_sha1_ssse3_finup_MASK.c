
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
typedef int sha1_transform_fn ;


 int FUNC_0 (struct shash_desc*,int const*,unsigned int,int *,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct shash_desc *VAR_1, const u8 *VAR_2,
         unsigned int VAR_3, u8 *VAR_4)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
   (sha1_transform_fn *) VAR_0);
}
