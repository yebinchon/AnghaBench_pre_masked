
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct cblock_range {int end; int begin; } ;
struct cache {int cache_size; } ;


 int FUNC_0 (char*,int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct cache*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct cache *VAR_1, struct cblock_range *VAR_2)
{
 uint64_t VAR_3 = FUNC_2(VAR_2->begin);
 uint64_t VAR_4 = FUNC_2(VAR_2->end);
 uint64_t VAR_5 = FUNC_2(VAR_1->cache_size);

 if (VAR_3 >= VAR_5) {
  FUNC_0("%s: begin cblock out of range: %llu >= %llu",
        FUNC_1(VAR_1), VAR_3, VAR_5);
  return -VAR_0;
 }

 if (VAR_4 > VAR_5) {
  FUNC_0("%s: end cblock out of range: %llu > %llu",
        FUNC_1(VAR_1), VAR_4, VAR_5);
  return -VAR_0;
 }

 if (VAR_3 >= VAR_4) {
  FUNC_0("%s: invalid cblock range: %llu >= %llu",
        FUNC_1(VAR_1), VAR_3, VAR_4);
  return -VAR_0;
 }

 return 0;
}
