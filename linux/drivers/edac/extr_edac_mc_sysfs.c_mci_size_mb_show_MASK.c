
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {int nr_csrows; struct csrow_info** csrows; } ;
struct dimm_info {scalar_t__ nr_pages; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct csrow_info {int nr_channels; TYPE_1__** channels; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct dimm_info* dimm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 struct mem_ctl_info* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct mem_ctl_info *VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = 0, VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3->nr_csrows; VAR_5++) {
  struct csrow_info *VAR_7 = VAR_3->csrows[VAR_5];

  for (VAR_6 = 0; VAR_6 < VAR_7->nr_channels; VAR_6++) {
   struct dimm_info *VAR_8 = VAR_7->channels[VAR_6]->dimm;

   VAR_4 += VAR_8->nr_pages;
  }
 }

 return FUNC_1(VAR_2, "%u\n", FUNC_0(VAR_4));
}
