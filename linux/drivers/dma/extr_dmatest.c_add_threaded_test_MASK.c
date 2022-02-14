
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmatest_params {int polled; int transfer_size; int alignment; int norandom; int noverify; int timeout; int pq_sources; int xor_sources; int iterations; int max_channels; int threads_per_chan; int device; int channel; int buf_size; } ;
struct dmatest_info {struct dmatest_params params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct dmatest_info*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void FUNC_3(struct dmatest_info *VAR_18)
{
 struct dmatest_params *VAR_19 = &VAR_18->params;


 VAR_19->buf_size = VAR_11;
 FUNC_2(VAR_19->channel, FUNC_1(VAR_12), sizeof(VAR_19->channel));
 FUNC_2(VAR_19->device, FUNC_1(VAR_13), sizeof(VAR_19->device));
 VAR_19->threads_per_chan = VAR_14;
 VAR_19->max_channels = VAR_6;
 VAR_19->iterations = VAR_5;
 VAR_19->xor_sources = VAR_17;
 VAR_19->pq_sources = VAR_10;
 VAR_19->timeout = VAR_15;
 VAR_19->noverify = VAR_8;
 VAR_19->norandom = VAR_7;
 VAR_19->alignment = VAR_4;
 VAR_19->transfer_size = VAR_16;
 VAR_19->polled = VAR_9;

 FUNC_0(VAR_18, VAR_0);
 FUNC_0(VAR_18, VAR_1);
 FUNC_0(VAR_18, VAR_3);
 FUNC_0(VAR_18, VAR_2);
}
