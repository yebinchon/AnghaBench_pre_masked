
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct r5l_meta_block {void* position; void* seq; void* meta_size; int version; void* magic; } ;
struct r5l_log {int dummy; } ;
struct page {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct r5l_meta_block*) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 struct r5l_meta_block* FUNC_3 (struct page*) ;

__attribute__((used)) static void
FUNC_4(struct r5l_log *VAR_2,
         struct page *VAR_3,
         sector_t VAR_4, u64 VAR_5)
{
 struct r5l_meta_block *VAR_6;

 VAR_6 = FUNC_3(VAR_3);
 FUNC_0(VAR_6);
 VAR_6->magic = FUNC_1(VAR_0);
 VAR_6->version = VAR_1;
 VAR_6->meta_size = FUNC_1(sizeof(struct r5l_meta_block));
 VAR_6->seq = FUNC_2(VAR_5);
 VAR_6->position = FUNC_2(VAR_4);
}
