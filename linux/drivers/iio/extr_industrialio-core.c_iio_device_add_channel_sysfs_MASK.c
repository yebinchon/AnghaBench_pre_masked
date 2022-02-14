
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int channel_attr_list; int dev; } ;
struct iio_chan_spec_ext_info {int shared; scalar_t__ write; scalar_t__ read; scalar_t__ name; } ;
struct iio_chan_spec {scalar_t__ channel; struct iio_chan_spec_ext_info* ext_info; int info_mask_shared_by_all_available; int info_mask_shared_by_all; int info_mask_shared_by_dir_available; int info_mask_shared_by_dir; int info_mask_shared_by_type_available; int info_mask_shared_by_type; int info_mask_separate_available; int info_mask_separate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,struct iio_chan_spec const*,int *,int *,unsigned int,int ,int *,int *) ;
 int FUNC_1 (struct iio_dev*,struct iio_chan_spec const*,int ,int *) ;
 int FUNC_2 (struct iio_dev*,struct iio_chan_spec const*,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_7,
     struct iio_chan_spec const *VAR_8)
{
 int VAR_9, VAR_10 = 0;
 const struct iio_chan_spec_ext_info *VAR_11;

 if (VAR_8->channel < 0)
  return 0;
 VAR_9 = FUNC_1(VAR_7, VAR_8,
         VAR_1,
         &VAR_8->info_mask_separate);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_10 += VAR_9;

 VAR_9 = FUNC_2(VAR_7, VAR_8,
        VAR_1,
        &VAR_8->
        info_mask_separate_available);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_10 += VAR_9;

 VAR_9 = FUNC_1(VAR_7, VAR_8,
         VAR_4,
         &VAR_8->info_mask_shared_by_type);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_10 += VAR_9;

 VAR_9 = FUNC_2(VAR_7, VAR_8,
        VAR_4,
        &VAR_8->
        info_mask_shared_by_type_available);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_10 += VAR_9;

 VAR_9 = FUNC_1(VAR_7, VAR_8,
         VAR_3,
         &VAR_8->info_mask_shared_by_dir);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_10 += VAR_9;

 VAR_9 = FUNC_2(VAR_7, VAR_8,
        VAR_3,
        &VAR_8->info_mask_shared_by_dir_available);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_10 += VAR_9;

 VAR_9 = FUNC_1(VAR_7, VAR_8,
         VAR_2,
         &VAR_8->info_mask_shared_by_all);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_10 += VAR_9;

 VAR_9 = FUNC_2(VAR_7, VAR_8,
        VAR_2,
        &VAR_8->info_mask_shared_by_all_available);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_10 += VAR_9;

 if (VAR_8->ext_info) {
  unsigned int VAR_12 = 0;
  for (VAR_11 = VAR_8->ext_info; VAR_11->name; VAR_11++) {
   VAR_9 = FUNC_0(VAR_11->name,
     VAR_8,
     VAR_11->read ?
         &VAR_5 : ((void*)0),
     VAR_11->write ?
         &VAR_6 : ((void*)0),
     VAR_12,
     VAR_11->shared,
     &VAR_7->dev,
     &VAR_7->channel_attr_list);
   VAR_12++;
   if (VAR_9 == -VAR_0 && VAR_11->shared)
    continue;

   if (VAR_9)
    return VAR_9;

   VAR_10++;
  }
 }

 return VAR_10;
}
