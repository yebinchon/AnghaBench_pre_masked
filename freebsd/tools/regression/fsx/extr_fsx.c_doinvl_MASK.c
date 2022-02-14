
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int,int,int ,int ) ;
 scalar_t__ FUNC_1 (char*,int ,int) ;
 scalar_t__ FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

void
FUNC_6(void)
{
 char *VAR_12;

 if (VAR_9 == 0)
  return;
 if (VAR_11 <= VAR_10)
  return;
 if (VAR_7)
  FUNC_3("%lu msync(MS_INVALIDATE)\n", VAR_11);

 if ((VAR_12 = (char *)FUNC_0(0, VAR_9, VAR_5 | VAR_6,
         VAR_1 | VAR_2, VAR_8, 0)) == VAR_0) {
  FUNC_4("doinvl: mmap");
  FUNC_5(205);
 }

 if (FUNC_1(VAR_12, 0, VAR_4 | VAR_3) != 0) {
  FUNC_4("doinvl: msync");
  FUNC_5(206);
 }

 if (FUNC_2(VAR_12, VAR_9) != 0) {
  FUNC_4("doinvl: munmap");
  FUNC_5(207);
 }
}
