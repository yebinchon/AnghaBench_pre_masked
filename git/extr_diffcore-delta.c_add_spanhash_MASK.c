
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spanhash_top {int alloc_log2; scalar_t__ free; struct spanhash* data; } ;
struct spanhash {int cnt; unsigned int hashval; } ;


 struct spanhash_top* FUNC_0 (struct spanhash_top*) ;

__attribute__((used)) static struct spanhash_top *FUNC_1(struct spanhash_top *VAR_0,
      unsigned int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 struct spanhash *VAR_5;

 VAR_4 = (1 << VAR_0->alloc_log2);
 VAR_3 = VAR_1 & (VAR_4 - 1);
 while (1) {
  VAR_5 = &(VAR_0->data[VAR_3++]);
  if (!VAR_5->cnt) {
   VAR_5->hashval = VAR_1;
   VAR_5->cnt = VAR_2;
   VAR_0->free--;
   if (VAR_0->free < 0)
    return FUNC_0(VAR_0);
   return VAR_0;
  }
  if (VAR_5->hashval == VAR_1) {
   VAR_5->cnt += VAR_2;
   return VAR_0;
  }
  if (VAR_4 <= VAR_3)
   VAR_3 = 0;
 }
}
