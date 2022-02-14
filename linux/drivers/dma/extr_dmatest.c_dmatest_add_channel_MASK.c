
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmatest_info {int nr_channels; int channels; } ;
struct dmatest_chan {int node; int threads; struct dma_chan* chan; } ;
struct dma_device {int cap_mask; } ;
struct dma_chan {struct dma_device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dma_chan*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct dmatest_info*,struct dmatest_chan*,int ) ;
 struct dmatest_chan* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*,unsigned int,int ) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int FUNC_8(struct dmatest_info *VAR_7,
  struct dma_chan *VAR_8)
{
 struct dmatest_chan *VAR_9;
 struct dma_device *VAR_10 = VAR_8->device;
 unsigned int VAR_11 = 0;
 int VAR_12;

 VAR_9 = FUNC_4(sizeof(struct dmatest_chan), VAR_5);
 if (!VAR_9) {
  FUNC_7("No memory for %s\n", FUNC_1(VAR_8));
  return -VAR_4;
 }

 VAR_9->chan = VAR_8;
 FUNC_0(&VAR_9->threads);

 if (FUNC_2(VAR_0, VAR_10->cap_mask)) {
  if (VAR_6 == 0) {
   VAR_12 = FUNC_3(VAR_7, VAR_9, VAR_0);
   VAR_11 += VAR_12 > 0 ? VAR_12 : 0;
  }
 }

 if (FUNC_2(VAR_1, VAR_10->cap_mask)) {
  if (VAR_6 == 1) {
   VAR_12 = FUNC_3(VAR_7, VAR_9, VAR_1);
   VAR_11 += VAR_12 > 0 ? VAR_12 : 0;
  }
 }

 if (FUNC_2(VAR_3, VAR_10->cap_mask)) {
  VAR_12 = FUNC_3(VAR_7, VAR_9, VAR_3);
  VAR_11 += VAR_12 > 0 ? VAR_12 : 0;
 }
 if (FUNC_2(VAR_2, VAR_10->cap_mask)) {
  VAR_12 = FUNC_3(VAR_7, VAR_9, VAR_2);
  VAR_11 += VAR_12 > 0 ? VAR_12 : 0;
 }

 FUNC_6("Added %u threads using %s\n",
  VAR_11, FUNC_1(VAR_8));

 FUNC_5(&VAR_9->node, &VAR_7->channels);
 VAR_7->nr_channels++;

 return 0;
}
