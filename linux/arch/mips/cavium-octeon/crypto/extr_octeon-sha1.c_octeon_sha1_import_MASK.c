
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int dummy; } ;
struct sha1_state {int dummy; } ;


 int FUNC_0 (struct sha1_state*,void const*,int) ;
 struct sha1_state* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_0, const void *VAR_1)
{
 struct sha1_state *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, VAR_1, sizeof(*VAR_2));
 return 0;
}
