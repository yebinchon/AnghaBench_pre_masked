
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bucket_size; } ;
struct cache_set {TYPE_1__ sb; } ;
struct TYPE_4__ {size_t first_bucket; size_t nbuckets; } ;
struct cache {TYPE_2__ sb; } ;
struct bkey {int dummy; } ;


 unsigned int FUNC_0 (struct bkey const*) ;
 scalar_t__ FUNC_1 (struct bkey const*) ;
 size_t FUNC_2 (struct cache_set*,struct bkey const*,unsigned int) ;
 struct cache* FUNC_3 (struct cache_set*,struct bkey const*,unsigned int) ;
 int FUNC_4 (struct bkey const*,unsigned int) ;
 size_t FUNC_5 (struct cache_set*,int ) ;
 scalar_t__ FUNC_6 (struct cache_set*,struct bkey const*,unsigned int) ;

__attribute__((used)) static bool FUNC_7(struct cache_set *VAR_0, const struct bkey *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  if (FUNC_6(VAR_0, VAR_1, VAR_2)) {
   struct cache *VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
   size_t VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
   size_t VAR_5 = FUNC_5(VAR_0, FUNC_4(VAR_1, VAR_2));

   if (FUNC_1(VAR_1) + VAR_5 > VAR_0->sb.bucket_size ||
       VAR_4 < VAR_3->sb.first_bucket ||
       VAR_4 >= VAR_3->sb.nbuckets)
    return 1;
  }

 return 0;
}
