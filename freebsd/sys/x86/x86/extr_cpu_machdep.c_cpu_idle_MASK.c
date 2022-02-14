
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int VAR_7 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;

void
FUNC_11(int VAR_10)
{
 uint64_t VAR_11;
 sbintime_t VAR_12 = -1;

 FUNC_0(VAR_2, "cpu_idle(%d) at %d",
     VAR_10, VAR_8);





 if (VAR_10) {
  if ((VAR_5 & VAR_1) && VAR_9) {
   FUNC_5(VAR_10);
   goto out;
  }
 }


 if (!VAR_10) {
  FUNC_7();
  VAR_12 = FUNC_6();
 }


 if (VAR_6 && VAR_4) {
  VAR_11 = FUNC_9(VAR_3);
  if (VAR_11 & VAR_0)
   FUNC_10(VAR_3, VAR_11 & ~VAR_0);
 }


 FUNC_4(VAR_12);


 if (!VAR_10) {
  FUNC_3();
  FUNC_8();
 }
out:
 FUNC_0(VAR_2, "cpu_idle(%d) at %d done",
     VAR_10, VAR_8);
}
