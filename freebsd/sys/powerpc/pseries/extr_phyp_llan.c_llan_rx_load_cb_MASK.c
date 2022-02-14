
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct llan_softc {scalar_t__ filter_buf_phys; scalar_t__ input_buf_phys; scalar_t__ rx_buf_len; scalar_t__ rx_buf_phys; } ;
struct TYPE_3__ {scalar_t__ ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(void *VAR_1, bus_dma_segment_t *VAR_2, int VAR_3, int VAR_4)
{
 struct llan_softc *VAR_5 = VAR_1;

 VAR_5->rx_buf_phys = VAR_2[0].ds_addr;
 VAR_5->rx_buf_len = VAR_2[0].ds_len - 2*VAR_0;
 VAR_5->input_buf_phys = VAR_2[0].ds_addr + VAR_2[0].ds_len - VAR_0;
 VAR_5->filter_buf_phys = VAR_2[0].ds_addr + VAR_2[0].ds_len - 2*VAR_0;
}
