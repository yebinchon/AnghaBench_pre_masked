
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct TYPE_2__ {int dev; } ;
struct mpc_dma {int error_status; TYPE_1__ dma; int error_status_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct mpc_dma*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_10)
{
 struct mpc_dma *VAR_11 = (void *)VAR_10;
 unsigned long VAR_12;
 uint VAR_13;

 FUNC_3(&VAR_11->error_status_lock, VAR_12);
 VAR_13 = VAR_11->error_status;
 VAR_11->error_status = 0;
 FUNC_4(&VAR_11->error_status_lock, VAR_12);


 if (VAR_13) {
  FUNC_1(VAR_11->dma.dev,
   "Hardware reported following error(s) on channel %u:\n",
            FUNC_0(VAR_13));

  if (VAR_13 & VAR_4)
   FUNC_1(VAR_11->dma.dev, "- Group Priority Error\n");
  if (VAR_13 & VAR_0)
   FUNC_1(VAR_11->dma.dev, "- Channel Priority Error\n");
  if (VAR_13 & VAR_6)
   FUNC_1(VAR_11->dma.dev, "- Source Address Error\n");
  if (VAR_13 & VAR_9)
   FUNC_1(VAR_11->dma.dev, "- Source Offset Configuration Error\n");
  if (VAR_13 & VAR_1)
   FUNC_1(VAR_11->dma.dev, "- Destination Address Error\n");
  if (VAR_13 & VAR_3)
   FUNC_1(VAR_11->dma.dev, "- Destination Offset Configuration Error\n");
  if (VAR_13 & VAR_5)
   FUNC_1(VAR_11->dma.dev, "- NBytes/Citter Configuration Error\n");
  if (VAR_13 & VAR_8)
   FUNC_1(VAR_11->dma.dev, "- Scatter/Gather Configuration Error\n");
  if (VAR_13 & VAR_7)
   FUNC_1(VAR_11->dma.dev, "- Source Bus Error\n");
  if (VAR_13 & VAR_2)
   FUNC_1(VAR_11->dma.dev, "- Destination Bus Error\n");
 }

 FUNC_2(VAR_11);
}
