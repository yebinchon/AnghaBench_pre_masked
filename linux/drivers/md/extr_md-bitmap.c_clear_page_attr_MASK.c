
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int filemap_attr; } ;
struct bitmap {TYPE_1__ storage; } ;
typedef enum bitmap_page_attr { ____Placeholder_bitmap_page_attr } bitmap_page_attr ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static inline void FUNC_1(struct bitmap *VAR_0, int VAR_1,
       enum bitmap_page_attr VAR_2)
{
 FUNC_0((VAR_1<<2) + VAR_2, VAR_0->storage.filemap_attr);
}
