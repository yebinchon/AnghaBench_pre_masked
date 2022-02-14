
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct block_device {TYPE_1__* bd_inode; } ;
struct address_space {int dummy; } ;
typedef int sector_t ;
typedef int pgoff_t ;
struct TYPE_5__ {struct page* v; } ;
struct TYPE_4__ {struct address_space* i_mapping; } ;
typedef TYPE_2__ Sector ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 struct page* FUNC_4 (struct address_space*,int ,int *) ;

unsigned char *FUNC_5(struct block_device *VAR_1, sector_t VAR_2, Sector *VAR_3)
{
 struct address_space *VAR_4 = VAR_1->bd_inode->i_mapping;
 struct page *VAR_5;

 VAR_5 = FUNC_4(VAR_4, (pgoff_t)(VAR_2 >> (VAR_0-9)), ((void*)0));
 if (!FUNC_0(VAR_5)) {
  if (FUNC_1(VAR_5))
   goto fail;
  VAR_3->v = VAR_5;
  return (unsigned char *)FUNC_2(VAR_5) + ((VAR_2 & ((1 << (VAR_0 - 9)) - 1)) << 9);
fail:
  FUNC_3(VAR_5);
 }
 VAR_3->v = ((void*)0);
 return ((void*)0);
}
