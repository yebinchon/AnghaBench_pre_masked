
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct llan_softc {int rx_valid_val; int rx_buf_len; int rx_buf_phys; int io_lock; TYPE_1__* ifp; int unit; int * rx_xfer; int filter_buf_phys; int input_buf_phys; int mac_address; scalar_t__ rx_dma_slot; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct llan_softc*,int *) ;
 int FUNC_1 (struct llan_softc*) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,...) ;

__attribute__((used)) static void
FUNC_6(void *VAR_7)
{
 struct llan_softc *VAR_8 = VAR_7;
 uint64_t VAR_9;
 uint64_t VAR_10;
 int VAR_11, VAR_12;

 FUNC_3(&VAR_8->io_lock);

 FUNC_5(VAR_0, VAR_8->unit);


 VAR_8->rx_dma_slot = 0;
 VAR_8->rx_valid_val = 1;

 VAR_9 = VAR_5;
 VAR_9 |= (VAR_8->rx_buf_len << 32);
 VAR_9 |= VAR_8->rx_buf_phys;
 FUNC_2(&VAR_10, VAR_8->mac_address, 8);
 VAR_11 = FUNC_5(VAR_1, VAR_8->unit, VAR_8->input_buf_phys,
     VAR_9, VAR_8->filter_buf_phys, VAR_10);

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
  FUNC_0(VAR_8, &VAR_8->rx_xfer[VAR_12]);

 FUNC_5(VAR_2, VAR_8->unit, 1);


 VAR_8->ifp->if_drv_flags |= VAR_4;
 VAR_8->ifp->if_drv_flags &= ~VAR_3;

 FUNC_4(&VAR_8->io_lock);


 FUNC_1(VAR_8);
}
