
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void const* end; void const* start; } ;
struct fiq_req {scalar_t__ flags; int reg; TYPE_1__ flush; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 struct fiq_req* FUNC_5 (int *) ;
 int FUNC_6 (void const*,void const*) ;
 int FUNC_7 (int ,int ) ;

void FUNC_8(const void *VAR_3, const void *VAR_4)
{
 unsigned long VAR_5;
 struct fiq_req *VAR_6;

 FUNC_3(VAR_5);

 if (!FUNC_1(1)) {
  FUNC_2(VAR_5);
  FUNC_6(VAR_3, VAR_4);
  return;
 }

 VAR_6 = FUNC_5(&VAR_2);

 VAR_6->flush.start = VAR_3;
 VAR_6->flush.end = VAR_4;
 VAR_6->flags = VAR_0;
 FUNC_4();

 FUNC_7(VAR_1, VAR_6->reg);

 FUNC_6(VAR_3, VAR_4);

 while (VAR_6->flags)
  FUNC_0();

 FUNC_2(VAR_5);
}
