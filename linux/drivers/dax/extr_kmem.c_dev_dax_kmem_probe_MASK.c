
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; int name; int flags; } ;
struct device {int dummy; } ;
struct dev_dax {int target_node; struct resource* dax_kmem_res; TYPE_1__* region; } ;
typedef int resource_size_t ;
struct TYPE_2__ {struct resource res; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct resource*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct resource*) ;
 struct resource* FUNC_7 (int,int,int ) ;
 int FUNC_8 (struct resource*) ;
 struct dev_dax* FUNC_9 (struct device*) ;

int FUNC_10(struct device *VAR_3)
{
 struct dev_dax *VAR_4 = FUNC_9(VAR_3);
 struct resource *VAR_5 = &VAR_4->region->res;
 resource_size_t VAR_6;
 resource_size_t VAR_7;
 resource_size_t VAR_8;
 struct resource *VAR_9;
 int VAR_10;
 int VAR_11;







 VAR_10 = VAR_4->target_node;
 if (VAR_10 < 0) {
  FUNC_3(VAR_3, "rejecting DAX region %pR with invalid node: %d\n",
    VAR_5, VAR_10);
  return -VAR_1;
 }


 VAR_6 = FUNC_0(VAR_5->start, FUNC_5());

 VAR_7 = FUNC_8(VAR_5);

 VAR_7 -= VAR_6 - VAR_5->start;

 VAR_7 &= ~(FUNC_5() - 1);
 VAR_8 = VAR_6 + VAR_7;


 VAR_9 = FUNC_7(VAR_6, VAR_7, FUNC_2(VAR_3));
 if (!VAR_9) {
  FUNC_3(VAR_3, "could not reserve region [%pa-%pa]\n",
    &VAR_6, &VAR_8);
  return -VAR_0;
 }







 VAR_9->flags = VAR_2;
 VAR_9->name = FUNC_2(VAR_3);

 VAR_11 = FUNC_1(VAR_10, VAR_9->start, FUNC_8(VAR_9));
 if (VAR_11) {
  FUNC_6(VAR_9);
  FUNC_4(VAR_9);
  return VAR_11;
 }
 VAR_4->dax_kmem_res = VAR_9;

 return 0;
}
