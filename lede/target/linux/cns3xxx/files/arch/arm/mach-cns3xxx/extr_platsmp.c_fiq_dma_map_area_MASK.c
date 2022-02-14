
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t size; void const* addr; } ;
struct fiq_req {int flags; int reg; TYPE_1__ map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 struct fiq_req* FUNC_5 (int *) ;
 int FUNC_6 (void const*,size_t,int) ;
 int FUNC_7 (int ,int ) ;

void FUNC_8(const void *VAR_3, size_t VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 struct fiq_req *VAR_7;

 FUNC_3(VAR_6);

 if (!FUNC_1(1)) {
  FUNC_2(VAR_6);
  FUNC_6(VAR_3, VAR_4, VAR_5);
  return;
 }

 VAR_7 = FUNC_5(&VAR_2);
 VAR_7->map.addr = VAR_3;
 VAR_7->map.size = VAR_4;
 VAR_7->flags = VAR_5 | VAR_0;
 FUNC_4();

 FUNC_7(VAR_1, VAR_7->reg);

 FUNC_6(VAR_3, VAR_4, VAR_5);
 while (VAR_7->flags)
  FUNC_0();

 FUNC_2(VAR_6);
}
