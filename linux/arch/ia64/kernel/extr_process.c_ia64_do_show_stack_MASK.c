
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_frame_info {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct unw_frame_info*,unsigned long*) ;
 int FUNC_2 (struct unw_frame_info*,unsigned long*) ;
 int FUNC_3 (struct unw_frame_info*,unsigned long*) ;
 scalar_t__ FUNC_4 (struct unw_frame_info*) ;

void
FUNC_5 (struct unw_frame_info *VAR_0, void *VAR_1)
{
 unsigned long VAR_2, VAR_3, VAR_4;

 FUNC_0("\nCall Trace:\n");
 do {
  FUNC_2(VAR_0, &VAR_2);
  if (VAR_2 == 0)
   break;

  FUNC_3(VAR_0, &VAR_3);
  FUNC_1(VAR_0, &VAR_4);
  FUNC_0(" [<%016lx>] %pS\n"
    "                                sp=%016lx bsp=%016lx\n",
    VAR_2, (void *)VAR_2, VAR_3, VAR_4);
 } while (FUNC_4(VAR_0) >= 0);
}
