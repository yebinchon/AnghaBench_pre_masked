
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_roce_link_table_entry {int dummy; } ;
struct TYPE_3__ {int map; scalar_t__ buf; } ;
struct hns_roce_link_table {int npages; int pg_sz; TYPE_1__ table; TYPE_2__* pg_list; } ;
struct hns_roce_dev {struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int map; scalar_t__ buf; } ;


 int FUNC_0 (struct device*,int,scalar_t__,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_dev *VAR_0,
         struct hns_roce_link_table *VAR_1)
{
 struct device *VAR_2 = VAR_0->dev;
 int VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->npages * sizeof(struct hns_roce_link_table_entry);

 for (VAR_4 = 0; VAR_4 < VAR_1->npages; ++VAR_4)
  if (VAR_1->pg_list[VAR_4].buf)
   FUNC_0(VAR_2, VAR_1->pg_sz,
       VAR_1->pg_list[VAR_4].buf,
       VAR_1->pg_list[VAR_4].map);
 FUNC_1(VAR_1->pg_list);

 FUNC_0(VAR_2, VAR_3, VAR_1->table.buf,
     VAR_1->table.map);
}
