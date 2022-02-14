
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roce_hem_item {int count; int start; int end; int sibling; int list; int addr; int dma_addr; } ;
struct hns_roce_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int *,int ) ;
 int FUNC_2 (struct roce_hem_item*) ;
 struct roce_hem_item* FUNC_3 (int,int ) ;

__attribute__((used)) static struct roce_hem_item *FUNC_4(struct hns_roce_dev *VAR_2,
         int VAR_3, int VAR_4,
         int VAR_5, bool VAR_6,
         int VAR_7)
{
 struct roce_hem_item *VAR_8;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return ((void*)0);

 if (VAR_6) {
  VAR_8->addr = FUNC_1(VAR_2->dev,
         VAR_5 * VAR_0,
         &VAR_8->dma_addr, VAR_1);
  if (!VAR_8->addr) {
   FUNC_2(VAR_8);
   return ((void*)0);
  }
 }

 VAR_8->count = VAR_5;
 VAR_8->start = VAR_3;
 VAR_8->end = VAR_4;
 FUNC_0(&VAR_8->list);
 FUNC_0(&VAR_8->sibling);

 return VAR_8;
}
