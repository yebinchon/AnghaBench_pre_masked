
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int done; } ;
union cvmx_mio_boot_dma_intx {scalar_t__ u64; TYPE_2__ s; } ;
struct TYPE_3__ {int size; } ;
union cvmx_mio_boot_dma_cfgx {scalar_t__ u64; TYPE_1__ s; } ;
struct octeon_cf_port {int c0; scalar_t__ dma_base; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 struct octeon_cf_port* FUNC_2 (struct device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_4)
{
 union cvmx_mio_boot_dma_cfgx VAR_5;
 union cvmx_mio_boot_dma_intx VAR_6;

 struct octeon_cf_port *VAR_7 = FUNC_2(VAR_4);

 if (VAR_7->dma_base) {

  VAR_5.u64 = 0;
  VAR_5.s.size = -1;
  FUNC_1(VAR_7->dma_base + VAR_1, VAR_5.u64);


  VAR_6.u64 = 0;
  FUNC_1(VAR_7->dma_base + VAR_3, VAR_6.u64);


  VAR_6.s.done = 1;
  FUNC_1(VAR_7->dma_base + VAR_2, VAR_6.u64);

  FUNC_0(0, VAR_7->c0);
  FUNC_4(20);
  FUNC_0(VAR_0, VAR_7->c0);
  FUNC_4(20);
  FUNC_0(0, VAR_7->c0);
  FUNC_3(100);
 }
}
