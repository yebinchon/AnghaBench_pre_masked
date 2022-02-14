
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qce_dma_data {void* txchan; void* rxchan; scalar_t__ result_buf; scalar_t__ ignore_buf; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (struct device*,char*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;

int FUNC_5(struct device *VAR_4, struct qce_dma_data *VAR_5)
{
 int VAR_6;

 VAR_5->txchan = FUNC_3(VAR_4, "tx");
 if (FUNC_0(VAR_5->txchan))
  return FUNC_1(VAR_5->txchan);

 VAR_5->rxchan = FUNC_3(VAR_4, "rx");
 if (FUNC_0(VAR_5->rxchan)) {
  VAR_6 = FUNC_1(VAR_5->rxchan);
  goto error_rx;
 }

 VAR_5->result_buf = FUNC_4(VAR_3 + VAR_2,
      VAR_1);
 if (!VAR_5->result_buf) {
  VAR_6 = -VAR_0;
  goto error_nomem;
 }

 VAR_5->ignore_buf = VAR_5->result_buf + VAR_3;

 return 0;
error_nomem:
 FUNC_2(VAR_5->rxchan);
error_rx:
 FUNC_2(VAR_5->txchan);
 return VAR_6;
}
