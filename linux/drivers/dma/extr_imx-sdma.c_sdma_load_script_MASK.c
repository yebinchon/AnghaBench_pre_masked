
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdma_engine {int dev; int channel_0_lock; struct sdma_buffer_descriptor* bd0; } ;
struct TYPE_2__ {int status; int count; int command; } ;
struct sdma_buffer_descriptor {int ext_buffer_addr; int buffer_addr; TYPE_1__ mode; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (int ,int,void*,int ) ;
 int FUNC_2 (void*,void*,int) ;
 int FUNC_3 (struct sdma_engine*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct sdma_engine *VAR_6, void *VAR_7, int VAR_8,
  u32 VAR_9)
{
 struct sdma_buffer_descriptor *VAR_10 = VAR_6->bd0;
 void *VAR_11;
 dma_addr_t VAR_12;
 int VAR_13;
 unsigned long VAR_14;

 VAR_11 = FUNC_0(VAR_6->dev, VAR_8, &VAR_12, VAR_5);
 if (!VAR_11) {
  return -VAR_4;
 }

 FUNC_4(&VAR_6->channel_0_lock, VAR_14);

 VAR_10->mode.command = VAR_3;
 VAR_10->mode.status = VAR_0 | VAR_2 | VAR_1;
 VAR_10->mode.count = VAR_8 / 2;
 VAR_10->buffer_addr = VAR_12;
 VAR_10->ext_buffer_addr = VAR_9;

 FUNC_2(VAR_11, VAR_7, VAR_8);

 VAR_13 = FUNC_3(VAR_6);

 FUNC_5(&VAR_6->channel_0_lock, VAR_14);

 FUNC_1(VAR_6->dev, VAR_8, VAR_11, VAR_12);

 return VAR_13;
}
