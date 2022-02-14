
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int * mapping; } ;
struct TYPE_5__ {int sgl; } ;
struct msc {unsigned long nr_pages; scalar_t__ base; TYPE_2__ single_sgt; } ;
struct TYPE_6__ {TYPE_1__* parent; } ;
struct TYPE_4__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ,int ,int,int ) ;
 TYPE_3__* FUNC_2 (struct msc*) ;
 int FUNC_3 (TYPE_2__*) ;
 struct page* FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct msc *VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(FUNC_2(VAR_3)->parent->parent, VAR_3->single_sgt.sgl,
       1, VAR_0);
 FUNC_3(&VAR_3->single_sgt);

 for (VAR_4 = 0; VAR_4 < VAR_3->nr_pages << VAR_1; VAR_4 += VAR_2) {
  struct page *VAR_5 = FUNC_4(VAR_3->base + VAR_4);

  VAR_5->mapping = ((void*)0);
  FUNC_0(VAR_5);
 }

 VAR_3->nr_pages = 0;
}
