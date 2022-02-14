
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ncr53c9x_softc {int sc_maxxfer; int sc_lock; } ;
struct lsi64854_softc {int sc_channel; int sc_rev; int sc_burst; int sc_dev; int sc_buffer_dmat; int sc_dmamap; int sc_maxdmasize; int sc_parent_dmat; int * setup; int reset; int intr; struct ncr53c9x_softc* sc_client; } ;
typedef int bus_dma_lock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;

 int FUNC_0 (int ,char*) ;
 int VAR_5 ;



 int VAR_6 ;
 int FUNC_1 (struct lsi64854_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ncr53c9x_softc*) ;
 int FUNC_3 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,void*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int * VAR_9 ;
 int FUNC_6 (int ,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int FUNC_7 (char*,...) ;

int
FUNC_8(struct lsi64854_softc *VAR_16)
{
 bus_dma_lock_t *VAR_17;
 struct ncr53c9x_softc *VAR_18;
 void *VAR_19;
 uint32_t VAR_20;
 int VAR_21;

 VAR_17 = ((void*)0);
 VAR_19 = ((void*)0);
 VAR_16->sc_maxdmasize = VAR_8;

 switch (VAR_16->sc_channel) {
 case 128:
  VAR_18 = VAR_16->sc_client;
  if (FUNC_2(VAR_18) == 0) {
   FUNC_6(VAR_16->sc_dev, "mutex not initialized\n");
   return (VAR_5);
  }
  VAR_17 = VAR_9;
  VAR_19 = &VAR_18->sc_lock;
  VAR_16->sc_maxdmasize = VAR_18->sc_maxxfer;
  VAR_16->intr = VAR_13;
  VAR_16->setup = VAR_14;
  break;
 case 130:
  VAR_16->intr = VAR_10;
  break;
 case 129:
  VAR_16->intr = VAR_11;
  VAR_16->setup = VAR_15;
  break;
 default:
  FUNC_6(VAR_16->sc_dev, "unknown channel\n");
 }
 VAR_16->reset = VAR_12;

 if (VAR_16->setup != ((void*)0)) {
  VAR_21 = FUNC_3(
      VAR_16->sc_parent_dmat,
      1, VAR_0,
      VAR_3,
      VAR_2,
      ((void*)0), ((void*)0),
      VAR_16->sc_maxdmasize,
      1,
      VAR_16->sc_maxdmasize,
      VAR_1,
      VAR_17, VAR_19,
      &VAR_16->sc_buffer_dmat);
  if (VAR_21 != 0) {
   FUNC_6(VAR_16->sc_dev,
       "cannot allocate buffer DMA tag\n");
   return (VAR_21);
  }

  VAR_21 = FUNC_5(VAR_16->sc_buffer_dmat, 0,
      &VAR_16->sc_dmamap);
  if (VAR_21 != 0) {
   FUNC_6(VAR_16->sc_dev, "DMA map create failed\n");
   FUNC_4(VAR_16->sc_buffer_dmat);
   return (VAR_21);
  }
 }

 VAR_20 = FUNC_1(VAR_16);
 VAR_16->sc_rev = VAR_20 & VAR_6;
 if (VAR_16->sc_rev == VAR_4)
  return (0);
 FUNC_6(VAR_16->sc_dev, "DMA rev. ");
 switch (VAR_16->sc_rev) {
 case 135:
  FUNC_7("0");
  break;
 case 132:
  FUNC_7("ESC");
  break;
 case 134:
  FUNC_7("1");
  break;
 case 131:
  FUNC_7("1+");
  break;
 case 133:
  FUNC_7("2");
  break;
 default:
  FUNC_7("unknown (0x%x)", VAR_16->sc_rev);
 }

 FUNC_0(VAR_7, (", burst 0x%x, csr 0x%x", VAR_16->sc_burst, VAR_20));
 FUNC_7("\n");

 return (0);
}
