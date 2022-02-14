
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct llan_softc {TYPE_2__* ifp; int * mac_address; int media; TYPE_1__* rx_xfer; int rxbuf_dma_tag; int tx_dma_map; int tx_dma_tag; int rx_buf; int rx_buf_map; int rx_dma_tag; int io_lock; int irq_cookie; int irq; scalar_t__ irqid; int unit; int dev; } ;
typedef scalar_t__ ssize_t ;
typedef int phandle_t ;
typedef int device_t ;
struct TYPE_10__ {int ifq_drv_maxlen; } ;
struct TYPE_9__ {int if_flags; TYPE_6__ if_snd; int if_init; int if_ioctl; int if_start; scalar_t__ if_capenable; scalar_t__ if_capabilities; scalar_t__ if_hwassist; int if_mtu; struct llan_softc* if_softc; } ;
struct TYPE_8__ {int * rx_mbuf; int rx_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (int ,char*,int *,int) ;
 scalar_t__ FUNC_3 (int ,char*,int *,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 int FUNC_5 (int ,int ,scalar_t__*,int ) ;
 int FUNC_6 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ,int ,int ,int ,struct llan_softc*,int ) ;
 int FUNC_9 (int ,void**,int,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int,int *,int ,struct llan_softc*,int *) ;
 int * VAR_26 ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int ) ;
 struct llan_softc* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_18 (int ) ;
 int FUNC_19 (TYPE_2__*,int ,int ) ;
 int FUNC_20 (TYPE_2__*,int ) ;
 int FUNC_21 (int *,int,int ,int *) ;
 int FUNC_22 (int *,int ,int ,int ) ;
 int FUNC_23 (int *,int) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *,char*,int *,int ) ;
 int FUNC_26 (int ) ;

__attribute__((used)) static int
FUNC_27(device_t VAR_34)
{
 struct llan_softc *VAR_35;
 phandle_t VAR_36;
 int VAR_37, VAR_38;
 ssize_t VAR_39;

 VAR_35 = FUNC_14(VAR_34);
 VAR_35->dev = VAR_34;


 VAR_36 = FUNC_26(VAR_34);
 VAR_39 = FUNC_3(VAR_36, "local-mac-address", VAR_35->mac_address,
     sizeof(VAR_35->mac_address));



 if (VAR_39 == VAR_8) {
  FUNC_4(VAR_35->mac_address, &VAR_35->mac_address[2], VAR_39);

  FUNC_12(VAR_35->mac_address, 2);
 }
 FUNC_2(VAR_36, "reg", &VAR_35->unit, sizeof(VAR_35->unit));

 FUNC_25(&VAR_35->io_lock, "llan", ((void*)0), VAR_23);


 VAR_35->irqid = 0;
 VAR_35->irq = FUNC_5(VAR_34, VAR_25, &VAR_35->irqid,
     VAR_24);

 if (!VAR_35->irq) {
  FUNC_16(VAR_34, "Could not allocate IRQ\n");
  FUNC_24(&VAR_35->io_lock);
  return (VAR_6);
 }

 FUNC_11(VAR_34, VAR_35->irq, VAR_18 | VAR_17 |
     VAR_16, ((void*)0), VAR_28, VAR_35, &VAR_35->irq_cookie);


 VAR_37 = FUNC_6(FUNC_10(VAR_34), 16, 0,
            VAR_2, VAR_2, ((void*)0), ((void*)0),
     VAR_22, 1, VAR_5,
     0, ((void*)0), ((void*)0), &VAR_35->rx_dma_tag);
 VAR_37 = FUNC_6(FUNC_10(VAR_34), 4, 0,
            VAR_2, VAR_2, ((void*)0), ((void*)0),
     VAR_4, 1, VAR_5,
     0, ((void*)0), ((void*)0), &VAR_35->rxbuf_dma_tag);
 VAR_37 = FUNC_6(FUNC_10(VAR_34), 1, 0,
            VAR_3, VAR_2, ((void*)0), ((void*)0),
     VAR_4, 6, VAR_5, 0,
     VAR_26, &VAR_35->io_lock, &VAR_35->tx_dma_tag);

 VAR_37 = FUNC_9(VAR_35->rx_dma_tag, (void **)&VAR_35->rx_buf,
     VAR_0 | VAR_1, &VAR_35->rx_buf_map);
 VAR_37 = FUNC_8(VAR_35->rx_dma_tag, VAR_35->rx_buf_map, VAR_35->rx_buf,
     VAR_22, VAR_32, VAR_35, 0);


 FUNC_7(VAR_35->tx_dma_tag, 0, &VAR_35->tx_dma_map);


 for (VAR_38 = 0; VAR_38 < VAR_20; VAR_38++) {
  VAR_37 = FUNC_7(VAR_35->rxbuf_dma_tag, 0,
      &VAR_35->rx_xfer[VAR_38].rx_dmamap);
  VAR_35->rx_xfer[VAR_38].rx_mbuf = ((void*)0);
 }


 VAR_35->ifp = FUNC_18(VAR_15);
 VAR_35->ifp->if_softc = VAR_35;

 FUNC_19(VAR_35->ifp, FUNC_13(VAR_34), FUNC_15(VAR_34));
 VAR_35->ifp->if_mtu = VAR_7;
 VAR_35->ifp->if_flags = VAR_9 | VAR_11 | VAR_10;
 VAR_35->ifp->if_hwassist = 0;
 VAR_35->ifp->if_capabilities = 0;
 VAR_35->ifp->if_capenable = 0;
 VAR_35->ifp->if_start = VAR_33;
 VAR_35->ifp->if_ioctl = VAR_29;
 VAR_35->ifp->if_init = VAR_27;

 FUNC_22(&VAR_35->media, VAR_14, VAR_30,
     VAR_31);
 FUNC_21(&VAR_35->media, VAR_13 | VAR_12, 0, ((void*)0));
 FUNC_23(&VAR_35->media, VAR_13 | VAR_12);

 FUNC_0(&VAR_35->ifp->if_snd, VAR_21);
 VAR_35->ifp->if_snd.ifq_drv_maxlen = VAR_21;
 FUNC_1(&VAR_35->ifp->if_snd);

 FUNC_17(VAR_35->ifp, &VAR_35->mac_address[2]);


 FUNC_20(VAR_35->ifp, VAR_19);

 return (0);
}
