
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct timespec64*) ;
 int FUNC_2 (char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct timespec64 VAR_3;

 if (FUNC_3(VAR_1) == 0) {
  VAR_2 = 1;
  FUNC_4();

  FUNC_1(&VAR_3);
  FUNC_2("Uptime: %lu.%.2lu seconds\n", (unsigned long)VAR_3.tv_sec,
   ((unsigned long)VAR_3.tv_nsec / (VAR_0/100)));

  FUNC_4();
  FUNC_0(200); }

 VAR_2 = 0;
}
