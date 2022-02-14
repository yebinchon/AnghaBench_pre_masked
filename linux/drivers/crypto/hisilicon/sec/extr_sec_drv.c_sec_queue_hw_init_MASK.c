
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int paddr; } ;
struct TYPE_5__ {int paddr; } ;
struct TYPE_4__ {int paddr; } ;
struct sec_queue {scalar_t__ regs; TYPE_3__ ring_db; TYPE_2__ ring_cq; TYPE_1__ ring_cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct sec_queue*) ;
 int FUNC_1 (struct sec_queue*,int ) ;
 int FUNC_2 (struct sec_queue*,int) ;
 int FUNC_3 (struct sec_queue*,int ) ;
 int FUNC_4 (struct sec_queue*,int) ;
 int FUNC_5 (struct sec_queue*,int ) ;
 int FUNC_6 (struct sec_queue*,scalar_t__) ;
 int FUNC_7 (struct sec_queue*,int ) ;
 int FUNC_8 (struct sec_queue*) ;
 int FUNC_9 (struct sec_queue*,int ) ;
 int FUNC_10 (struct sec_queue*,int) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct sec_queue *VAR_6)
{
 FUNC_1(VAR_6, VAR_0);
 FUNC_3(VAR_6, VAR_0);
 FUNC_2(VAR_6, 1);
 FUNC_4(VAR_6, 1);


 FUNC_10(VAR_6, 1);


 FUNC_11(1, VAR_6->regs + VAR_5);

 FUNC_6(VAR_6, VAR_1 - 1);

 FUNC_5(VAR_6, VAR_6->ring_cmd.paddr);

 FUNC_9(VAR_6, VAR_6->ring_cq.paddr);

 FUNC_7(VAR_6, VAR_6->ring_db.paddr);

 FUNC_11(0x100, VAR_6->regs + VAR_4);

 FUNC_0(VAR_6);
 FUNC_8(VAR_6);
 FUNC_11(VAR_2, VAR_6->regs + VAR_3);
}
