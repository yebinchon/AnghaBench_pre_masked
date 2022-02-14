
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct saa7146_vv {scalar_t__ last_field; } ;
struct saa7146_format {int trans; } ;
struct TYPE_4__ {int dma_handle; } ;
struct saa7146_dev {TYPE_2__ d_rps0; struct saa7146_vv* vv_data; } ;
struct saa7146_buf {TYPE_1__* fmt; } ;
struct TYPE_3__ {int field; int height; int width; int pixelformat; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct saa7146_dev*,struct saa7146_buf*) ;
 int FUNC_3 (struct saa7146_dev*,struct saa7146_buf*) ;
 int FUNC_4 (struct saa7146_dev*,int) ;
 int FUNC_5 (struct saa7146_dev*) ;
 struct saa7146_format* FUNC_6 (struct saa7146_dev*,int ) ;
 scalar_t__ FUNC_7 (struct saa7146_dev*,int ) ;
 int FUNC_8 (struct saa7146_dev*,int ) ;
 int FUNC_9 (struct saa7146_dev*,int ,int ,int ) ;
 int FUNC_10 (struct saa7146_dev*,int ,int) ;

void FUNC_11(struct saa7146_dev *VAR_10, struct saa7146_buf *VAR_11, struct saa7146_buf *VAR_12)
{
 struct saa7146_format *VAR_13 = FUNC_6(VAR_10,VAR_11->fmt->pixelformat);
 struct saa7146_vv *VAR_14 = VAR_10->vv_data;
 u32 VAR_15;

 FUNC_0("buf:%p, next:%p\n", VAR_11, VAR_12);

 VAR_15 = FUNC_7(VAR_10, VAR_5);
 if( 0 == VAR_15 ) {

  FUNC_0("forcing sync to new frame\n");
  FUNC_10(VAR_10, VAR_4, VAR_1 );
 }

 FUNC_9(VAR_10, VAR_11->fmt->width, VAR_11->fmt->height, VAR_11->fmt->field);
 FUNC_8(VAR_10, VAR_13->trans);
 FUNC_5(VAR_10);

 if ( VAR_14->last_field == VAR_8 ) {
 } else if ( VAR_14->last_field == VAR_9 ) {
  VAR_14->last_field = VAR_7;
 } else if ( VAR_14->last_field == VAR_7 ) {
  VAR_14->last_field = VAR_9;
 }

 if( 0 != FUNC_1(VAR_13->trans)) {
  FUNC_3(VAR_10, VAR_11);
  FUNC_4(VAR_10,1);
 } else {
  FUNC_2(VAR_10, VAR_11);
  FUNC_4(VAR_10,0);
 }
 FUNC_10(VAR_10, VAR_6, VAR_10->d_rps0.dma_handle);


 FUNC_10(VAR_10, VAR_3, (VAR_0 | VAR_2));
}
