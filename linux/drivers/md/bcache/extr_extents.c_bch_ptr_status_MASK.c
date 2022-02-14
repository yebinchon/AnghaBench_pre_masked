
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
 int VAR_0 ;
 int FUNC_5 (struct bkey const*,int *) ;
 size_t FUNC_6 (struct cache_set*,int ) ;
 scalar_t__ FUNC_7 (struct cache_set*,struct bkey const*,unsigned int) ;
 scalar_t__ FUNC_8 (struct cache_set*,struct bkey const*,unsigned int) ;

__attribute__((used)) static const char *FUNC_9(struct cache_set *VAR_1, const struct bkey *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++)
  if (FUNC_7(VAR_1, VAR_2, VAR_3)) {
   struct cache *VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
   size_t VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
   size_t VAR_6 = FUNC_6(VAR_1, FUNC_4(VAR_2, VAR_3));

   if (FUNC_1(VAR_2) + VAR_6 > VAR_1->sb.bucket_size)
    return "bad, length too big";
   if (VAR_5 < VAR_4->sb.first_bucket)
    return "bad, short offset";
   if (VAR_5 >= VAR_4->sb.nbuckets)
    return "bad, offset past end of device";
   if (FUNC_8(VAR_1, VAR_2, VAR_3))
    return "stale";
  }

 if (!FUNC_5(VAR_2, &VAR_0))
  return "bad, null key";
 if (!FUNC_0(VAR_2))
  return "bad, no pointers";
 if (!FUNC_1(VAR_2))
  return "zeroed key";
 return "";
}
