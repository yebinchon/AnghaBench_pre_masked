
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap_index {int tags; int blobs; int trees; int commits; int result; } ;
typedef int show_reachable_fn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bitmap_index*,int ) ;
 int FUNC_2 (struct bitmap_index*,int ,int ,int ) ;

void FUNC_3(struct bitmap_index *VAR_4,
     show_reachable_fn VAR_5)
{
 FUNC_0(VAR_4->result);

 FUNC_2(VAR_4, VAR_4->commits,
  VAR_1, VAR_5);
 FUNC_2(VAR_4, VAR_4->trees,
  VAR_3, VAR_5);
 FUNC_2(VAR_4, VAR_4->blobs,
  VAR_0, VAR_5);
 FUNC_2(VAR_4, VAR_4->tags,
  VAR_2, VAR_5);

 FUNC_1(VAR_4, VAR_5);
}
