
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_bitmap {int alloc_size; int buffer; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct ewah_bitmap*) ;
 struct ewah_bitmap* FUNC_2 (int) ;

struct ewah_bitmap *FUNC_3(void)
{
 struct ewah_bitmap *VAR_0;

 VAR_0 = FUNC_2(sizeof(struct ewah_bitmap));
 VAR_0->alloc_size = 32;
 FUNC_0(VAR_0->buffer, VAR_0->alloc_size);

 FUNC_1(VAR_0);
 return VAR_0;
}
