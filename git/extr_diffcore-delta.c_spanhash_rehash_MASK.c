
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spanhash_top {int alloc_log2; int free; struct spanhash* data; } ;
struct spanhash {int hashval; scalar_t__ cnt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct spanhash_top*) ;
 int FUNC_2 (struct spanhash*,int ,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int) ;
 struct spanhash_top* FUNC_5 (int ) ;

__attribute__((used)) static struct spanhash_top *FUNC_6(struct spanhash_top *VAR_0)
{
 struct spanhash_top *VAR_1;
 int VAR_2;
 int VAR_3 = 1 << VAR_0->alloc_log2;
 int VAR_4 = VAR_3 << 1;

 VAR_1 = FUNC_5(FUNC_3(sizeof(*VAR_0),
        FUNC_4(sizeof(struct spanhash), VAR_4)));
 VAR_1->alloc_log2 = VAR_0->alloc_log2 + 1;
 VAR_1->free = FUNC_0(VAR_1->alloc_log2);
 FUNC_2(VAR_1->data, 0, sizeof(struct spanhash) * VAR_4);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  struct spanhash *VAR_5 = &(VAR_0->data[VAR_2]);
  int VAR_6;
  if (!VAR_5->cnt)
   continue;
  VAR_6 = VAR_5->hashval & (VAR_4 - 1);
  while (1) {
   struct spanhash *VAR_7 = &(VAR_1->data[VAR_6++]);
   if (!VAR_7->cnt) {
    VAR_7->hashval = VAR_5->hashval;
    VAR_7->cnt = VAR_5->cnt;
    VAR_1->free--;
    break;
   }
   if (VAR_4 <= VAR_6)
    VAR_6 = 0;
  }
 }
 FUNC_1(VAR_0);
 return VAR_1;
}
