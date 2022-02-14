
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parsec {scalar_t__ matchidx; } ;
struct mprintc {int same_file; scalar_t__ last_outed; scalar_t__ printmatch; int tail; scalar_t__ doctx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct parsec*,char) ;
 int FUNC_2 () ;
 int FUNC_3 (struct parsec*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct mprintc *VAR_5, struct parsec *VAR_6)
{

 if (VAR_5->doctx) {
  if (!VAR_3 && (!VAR_5->same_file || VAR_5->last_outed > 0))
   FUNC_0("--\n");
  if (VAR_1 > 0)
   FUNC_2();
  VAR_5->tail = VAR_0;
 }


 if (VAR_5->printmatch) {
  FUNC_1(VAR_6, ':');
  while (VAR_6->matchidx >= VAR_2) {

   VAR_6->matchidx = 0;
   if (FUNC_3(VAR_6) == !VAR_4)
    FUNC_1(VAR_6, ':');
   else
    break;
  }
  VAR_3 = 0;
  VAR_5->same_file = 1;
  VAR_5->last_outed = 0;
 }
}
