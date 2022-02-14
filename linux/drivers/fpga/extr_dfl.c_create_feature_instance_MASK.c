
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct dfl_fpga_enum_dfl {scalar_t__ ioaddr; scalar_t__ len; scalar_t__ start; } ;
struct TYPE_2__ {scalar_t__ start; int flags; scalar_t__ end; } ;
struct dfl_feature_info {int node; scalar_t__ ioaddr; TYPE_1__ mmio_res; scalar_t__ fid; } ;
struct build_feature_devs_info {int feature_num; int sub_features; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct dfl_feature_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(struct build_feature_devs_info *VAR_4,
   struct dfl_fpga_enum_dfl *VAR_5, resource_size_t VAR_6,
   resource_size_t VAR_7, u64 VAR_8)
{
 struct dfl_feature_info *VAR_9;


 VAR_7 = VAR_7 ? VAR_7 : FUNC_1(VAR_5->ioaddr + VAR_6);
 VAR_8 = VAR_8 ? VAR_8 : FUNC_0(VAR_5->ioaddr + VAR_6);

 if (VAR_5->len - VAR_6 < VAR_7)
  return -VAR_0;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->fid = VAR_8;
 VAR_9->mmio_res.start = VAR_5->start + VAR_6;
 VAR_9->mmio_res.end = VAR_9->mmio_res.start + VAR_7 - 1;
 VAR_9->mmio_res.flags = VAR_3;
 VAR_9->ioaddr = VAR_5->ioaddr + VAR_6;

 FUNC_3(&VAR_9->node, &VAR_4->sub_features);
 VAR_4->feature_num++;

 return 0;
}
