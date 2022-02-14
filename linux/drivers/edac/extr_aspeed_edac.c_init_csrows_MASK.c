
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct mem_ctl_info {int pdev; struct csrow_info** csrows; } ;
struct dimm_info {int mtype; int nr_pages; int edac_mode; } ;
struct device_node {int dummy; } ;
struct csrow_info {int first_page; int last_page; int nr_channels; TYPE_1__** channels; } ;
struct TYPE_2__ {struct dimm_info* dimm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int,int,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct device_node*,int ,struct resource*) ;
 struct device_node* FUNC_3 (char*) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (struct resource*) ;

__attribute__((used)) static int FUNC_7(struct mem_ctl_info *VAR_8)
{
 struct csrow_info *VAR_9 = VAR_8->csrows[0];
 u32 VAR_10, VAR_11;
 struct dimm_info *VAR_12;
 struct device_node *VAR_13;
 struct resource VAR_14;
 u32 VAR_15;
 int VAR_16;


 VAR_13 = FUNC_3("/memory");
 if (!VAR_13) {
  FUNC_1(VAR_8->pdev, "dt: missing /memory node\n");
  return -VAR_3;
 };

 VAR_16 = FUNC_2(VAR_13, 0, &VAR_14);

 FUNC_4(VAR_13);

 if (VAR_16) {
  FUNC_1(VAR_8->pdev, "dt: failed requesting resource for /memory node\n");
  return VAR_16;
 };

 FUNC_0(VAR_8->pdev, "dt: /memory node resources: first page r.start=0x%x, resource_size=0x%x, PAGE_SHIFT macro=0x%x\n",
  VAR_14.start, FUNC_6(&VAR_14), VAR_6);

 VAR_9->first_page = VAR_14.start >> VAR_6;
 VAR_10 = FUNC_6(&VAR_14) >> VAR_6;
 VAR_9->last_page = VAR_9->first_page + VAR_10 - 1;

 FUNC_5(VAR_7, VAR_0, &VAR_15);
 VAR_11 = (VAR_15 & VAR_1) ? VAR_5 : VAR_4;

 VAR_12 = VAR_9->channels[0]->dimm;
 VAR_12->mtype = VAR_11;
 VAR_12->edac_mode = VAR_2;
 VAR_12->nr_pages = VAR_10 / VAR_9->nr_channels;

 FUNC_0(VAR_8->pdev, "initialized dimm with first_page=0x%lx and nr_pages=0x%x\n",
  VAR_9->first_page, VAR_10);

 return 0;
}
