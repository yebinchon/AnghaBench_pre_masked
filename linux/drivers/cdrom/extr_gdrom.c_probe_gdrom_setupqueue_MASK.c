
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int gdrom_rq; TYPE_1__* disk; } ;
struct TYPE_3__ {int queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 TYPE_2__ VAR_1 ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(void)
{
 FUNC_0(VAR_1.gdrom_rq, VAR_0);

 FUNC_2(VAR_1.gdrom_rq, 1);

 FUNC_1(VAR_1.gdrom_rq, 0x40000);
 VAR_1.disk->queue = VAR_1.gdrom_rq;
 return FUNC_3();
}
