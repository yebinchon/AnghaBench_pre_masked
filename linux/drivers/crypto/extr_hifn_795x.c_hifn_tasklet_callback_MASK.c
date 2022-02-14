
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ qlen; } ;
struct hifn_device {scalar_t__ started; TYPE_1__ queue; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hifn_device*,int ) ;
 int FUNC_1 (struct hifn_device*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1)
{
 struct hifn_device *VAR_2 = (struct hifn_device *)VAR_1;







 FUNC_0(VAR_2, 0);

 if (VAR_2->started < VAR_0 && VAR_2->queue.qlen)
  FUNC_1(VAR_2);
}
