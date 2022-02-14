
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap_storage {scalar_t__ sb_page; } ;
typedef int bitmap_super_t ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_0(struct bitmap_storage *VAR_1,
          unsigned long VAR_2)
{
 if (VAR_1->sb_page)
  VAR_2 += sizeof(bitmap_super_t) << 3;
 return VAR_2 & (VAR_0 - 1);
}
