
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iio_dev {int name; } ;
struct TYPE_2__ {int rx_buf_sz; int watermark; int dma_ts; size_t buf_idx; int * rx_buf; } ;
struct at91_adc_state {TYPE_1__ dma_st; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct at91_adc_state*,int *,int) ;
 int FUNC_1 (struct at91_adc_state*) ;
 int FUNC_2 (struct at91_adc_state*,int ) ;
 int FUNC_3 (int,int) ;
 void* FUNC_4 (struct iio_dev*) ;
 struct at91_adc_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*,int *,int) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static void FUNC_8(struct iio_dev *VAR_2)
{
 struct at91_adc_state *VAR_3 = FUNC_5(VAR_2);
 int VAR_4 = FUNC_1(VAR_3);
 s64 VAR_5 = FUNC_4(VAR_2);
 s64 VAR_6;
 int VAR_7 = 0, VAR_8, VAR_9;

 u32 VAR_10 = FUNC_2(VAR_3, VAR_1);

 if (VAR_10 & VAR_0)
  FUNC_7("%s: conversion overrun detected\n",
        VAR_2->name);

 VAR_9 = FUNC_3(VAR_3->dma_st.rx_buf_sz, VAR_3->dma_st.watermark);

 VAR_8 = FUNC_3(VAR_4, VAR_9);





 VAR_6 = FUNC_3((VAR_5 - VAR_3->dma_st.dma_ts), VAR_8);

 while (VAR_4 >= VAR_9) {




  FUNC_0(VAR_3,
     &VAR_3->dma_st.rx_buf[VAR_3->dma_st.buf_idx],
     VAR_9);

  FUNC_6(VAR_2,
    (VAR_3->dma_st.rx_buf + VAR_3->dma_st.buf_idx),
    (VAR_3->dma_st.dma_ts + VAR_6 * VAR_7));

  VAR_4 -= VAR_9;

  VAR_3->dma_st.buf_idx += VAR_9;

  if (VAR_3->dma_st.buf_idx >= VAR_3->dma_st.rx_buf_sz)
   VAR_3->dma_st.buf_idx = 0;
  VAR_7++;
 }

 VAR_3->dma_st.dma_ts = FUNC_4(VAR_2);
}
