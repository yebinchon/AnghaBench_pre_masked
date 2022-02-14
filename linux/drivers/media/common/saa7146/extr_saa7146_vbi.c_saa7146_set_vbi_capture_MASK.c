
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct saa7146_vv {scalar_t__ current_hps_sync; } ;
struct saa7146_video_dma {int pitch; int base_page; int num_line_byte; scalar_t__ prot_addr; scalar_t__ base_odd; scalar_t__ base_even; } ;
struct TYPE_4__ {int dma_handle; } ;
struct saa7146_dev {TYPE_2__ d_rps1; struct saa7146_vv* vv_data; } ;
struct saa7146_buf {TYPE_1__* pt; } ;
struct TYPE_3__ {int dma; scalar_t__ offset; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (struct saa7146_dev*,unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct saa7146_dev*,int,int) ;
 int FUNC_3 (struct saa7146_dev*,int,struct saa7146_video_dma*) ;
 int VAR_20 ;

__attribute__((used)) static void FUNC_4(struct saa7146_dev *VAR_21, struct saa7146_buf *VAR_22, struct saa7146_buf *VAR_23)
{
 struct saa7146_vv *VAR_24 = VAR_21->vv_data;

 struct saa7146_video_dma VAR_25;

 int VAR_26 = 0;
 unsigned long VAR_27 = VAR_24->current_hps_sync == VAR_19 ? VAR_0 : VAR_1;
 unsigned long VAR_28 = VAR_24->current_hps_sync == VAR_19 ? VAR_3 : VAR_4;
 VAR_25 = VAR_22->pt[2].offset;
 VAR_25 = VAR_22->pt[2].offset + 16 * VAR_20;
 VAR_25 = VAR_22->pt[2].offset + 16 * 2 * VAR_20;
 VAR_25 = VAR_20;
 VAR_25 = VAR_22->pt[2].dma | VAR_17;
 VAR_25 = (16 << 16) | VAR_20;

 FUNC_3(VAR_21, 3, &VAR_25);


 VAR_26 = 0;
 FUNC_1(VAR_7 | (1 << 8) | (VAR_16/4));
 FUNC_1(VAR_13 | VAR_10);


 FUNC_1(VAR_8 | (VAR_15/4));
 FUNC_1(VAR_9 | VAR_12);
 FUNC_1(VAR_9 | VAR_12);


 FUNC_1(VAR_5 | VAR_28);
 FUNC_1(VAR_5 | VAR_27);


 FUNC_1(VAR_2);


 FUNC_1(VAR_6);


 FUNC_0(VAR_21, VAR_13);


 FUNC_2(VAR_21, VAR_18, VAR_21->d_rps1.dma_handle);


 FUNC_2(VAR_21, VAR_15, (VAR_11 | VAR_14));
}
