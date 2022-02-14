
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_chan_spec {int indexed; int channel; void* info_mask_shared_by_type; void* info_mask_separate; int type; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct iio_chan_spec *VAR_3, int VAR_4)
{
 VAR_3->type = VAR_2;
 VAR_3->info_mask_separate = FUNC_0(VAR_0);
 VAR_3->info_mask_shared_by_type = FUNC_0(VAR_1);
 VAR_3->indexed = 1;
 VAR_3->channel = VAR_4;
}
