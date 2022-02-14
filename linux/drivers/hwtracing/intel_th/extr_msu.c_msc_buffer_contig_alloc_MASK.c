
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_6__ {int sgl; } ;
struct msc {unsigned long nr_pages; TYPE_2__ single_sgt; int base_addr; int base; } ;
struct TYPE_7__ {TYPE_1__* parent; } ;
struct TYPE_5__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct page*,unsigned int) ;
 struct page* FUNC_1 (int,unsigned int) ;
 int FUNC_2 (int ,int ,int,int ) ;
 unsigned int FUNC_3 (unsigned long) ;
 TYPE_4__* FUNC_4 (struct msc*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (TYPE_2__*,int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,int ,unsigned long) ;
 int FUNC_10 (struct page*,unsigned int) ;

__attribute__((used)) static int FUNC_11(struct msc *VAR_6, unsigned long VAR_7)
{
 unsigned long VAR_8 = VAR_7 >> VAR_4;
 unsigned int VAR_9 = FUNC_3(VAR_7);
 struct page *VAR_10;
 int VAR_11;

 if (!VAR_7)
  return 0;

 VAR_11 = FUNC_6(&VAR_6->single_sgt, 1, VAR_3);
 if (VAR_11)
  goto err_out;

 VAR_11 = -VAR_1;
 VAR_10 = FUNC_1(VAR_3 | VAR_5 | VAR_2, VAR_9);
 if (!VAR_10)
  goto err_free_sgt;

 FUNC_10(VAR_10, VAR_9);
 FUNC_9(VAR_6->single_sgt.sgl, FUNC_5(VAR_10), VAR_7);

 VAR_11 = FUNC_2(FUNC_4(VAR_6)->parent->parent, VAR_6->single_sgt.sgl, 1,
    VAR_0);
 if (VAR_11 < 0)
  goto err_free_pages;

 VAR_6->nr_pages = VAR_8;
 VAR_6->base = FUNC_5(VAR_10);
 VAR_6->base_addr = FUNC_7(VAR_6->single_sgt.sgl);

 return 0;

err_free_pages:
 FUNC_0(VAR_10, VAR_9);

err_free_sgt:
 FUNC_8(&VAR_6->single_sgt);

err_out:
 return VAR_11;
}
