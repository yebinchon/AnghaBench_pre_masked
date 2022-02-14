
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_13__ {scalar_t__ mode; } ;
struct TYPE_14__ {int lock; scalar_t__ netcount; scalar_t__ dsr_chkcount; scalar_t__ ri_chkcount; scalar_t__ cts_chkcount; scalar_t__ dcd_chkcount; TYPE_1__ params; scalar_t__ tx_get; scalar_t__ tx_put; scalar_t__ tx_count; } ;
typedef TYPE_2__ MGSLPC_INFO ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_2__*,unsigned char) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_12(MGSLPC_INFO *VAR_6, struct tty_struct *VAR_7)
{
 unsigned long VAR_8;

 FUNC_9(&VAR_6->lock, VAR_8);

 FUNC_7(VAR_6);
 FUNC_11(VAR_6);
 VAR_6->tx_count = VAR_6->tx_put = VAR_6->tx_get = 0;

 if (VAR_6->params.mode == VAR_3 || VAR_6->netcount)
  FUNC_3(VAR_6);
 else
  FUNC_1(VAR_6);

 FUNC_8(VAR_6);

 VAR_6->dcd_chkcount = 0;
 VAR_6->cts_chkcount = 0;
 VAR_6->ri_chkcount = 0;
 VAR_6->dsr_chkcount = 0;

 FUNC_4(VAR_6, VAR_0, VAR_2 | VAR_1);
 FUNC_5(VAR_6, (unsigned char) VAR_4 | VAR_5);
 FUNC_2(VAR_6);

 if (VAR_6->netcount || (VAR_7 && FUNC_0(VAR_7)))
  FUNC_6(VAR_6);

 FUNC_10(&VAR_6->lock, VAR_8);
}
