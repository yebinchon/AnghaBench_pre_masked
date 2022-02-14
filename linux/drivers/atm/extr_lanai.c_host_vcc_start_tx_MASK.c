
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int dmaaddr; } ;
struct TYPE_9__ {TYPE_5__ buf; TYPE_3__* atmvcc; } ;
struct lanai_vcc {int vci; TYPE_4__ tx; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {scalar_t__ traffic_class; } ;
struct TYPE_7__ {TYPE_1__ txtp; } ;
struct TYPE_8__ {TYPE_2__ qos; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct lanai_vcc const*,int,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_3(const struct lanai_vcc *VAR_11)
{
 dma_addr_t VAR_12 = VAR_11->tx.buf.dmaaddr;
 FUNC_1(VAR_11, 0, VAR_8);
 FUNC_1(VAR_11, 0xFFFF, VAR_5);
 FUNC_1(VAR_11, 0xFFFF, VAR_6);
 FUNC_1(VAR_11, 0, VAR_9);
 FUNC_1(VAR_11, 0, VAR_7);
 FUNC_1(VAR_11, 0, VAR_10);
 FUNC_1(VAR_11,
  (VAR_11->tx.atmvcc->qos.txtp.traffic_class == VAR_0) ?
  VAR_1 | VAR_11->vci : 0, VAR_4);
 FUNC_1(VAR_11, (VAR_12 >> 16) & 0xFFFF, VAR_3);
 FUNC_1(VAR_11,
     ((VAR_12 >> 8) & 0xFF) |
     FUNC_0(FUNC_2(&VAR_11->tx.buf)),
     VAR_2);
}
