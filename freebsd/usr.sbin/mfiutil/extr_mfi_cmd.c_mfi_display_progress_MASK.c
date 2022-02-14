
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint ;
struct mfi_progress {int progress; int elapsed_seconds; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(const char *VAR_0, struct mfi_progress *VAR_1)
{
 uint VAR_2;

 FUNC_1("%s: %.2f%% complete after ", VAR_0,
     (float)VAR_1->progress * 100 / 0xffff);
 FUNC_0(VAR_1->elapsed_seconds);
 if (VAR_1->progress != 0 && VAR_1->elapsed_seconds > 10) {
  FUNC_1(" finished in ");
  VAR_2 = (0x10000 * (uint32_t)VAR_1->elapsed_seconds) /
      VAR_1->progress - VAR_1->elapsed_seconds;
  FUNC_0(VAR_2);
 }
 FUNC_1("\n");
}
