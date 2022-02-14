
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int dmaaddr; } ;
struct TYPE_7__ {TYPE_4__ buf; TYPE_2__* atmvcc; } ;
struct lanai_vcc {TYPE_3__ rx; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {scalar_t__ aal; } ;
struct TYPE_6__ {TYPE_1__ qos; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct lanai_vcc const*,int,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_5(const struct lanai_vcc *VAR_13)
{
 u32 VAR_14;
 if (VAR_13->rx.atmvcc->qos.aal == VAR_0) {
  dma_addr_t VAR_15 = VAR_13->rx.buf.dmaaddr;
  FUNC_3(VAR_13, 0xFFFF, VAR_9);
  FUNC_3(VAR_13, 0xFFFF, VAR_10);
  FUNC_3(VAR_13, 0, VAR_12);
  FUNC_3(VAR_13, 0, VAR_8);
  FUNC_3(VAR_13, 0, VAR_11);
  FUNC_3(VAR_13, (VAR_15 >> 16) & 0xFFFF, VAR_7);
  VAR_14 = ((VAR_15 >> 8) & 0xFF) |
      FUNC_2(FUNC_4(&VAR_13->rx.buf))|
      FUNC_1(VAR_2) |

      FUNC_0(VAR_5);
 } else
  VAR_14 = FUNC_1(VAR_1) |
      VAR_3 |
      FUNC_0(VAR_4);

 FUNC_3(VAR_13, VAR_14, VAR_6);
}
