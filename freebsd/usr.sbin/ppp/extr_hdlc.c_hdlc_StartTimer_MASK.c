
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int load; char* name; int func; struct hdlc* arg; } ;
struct hdlc {TYPE_1__ ReportTimer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(struct hdlc *VAR_2)
{
  FUNC_1(&VAR_2->ReportTimer);
  VAR_2->ReportTimer.load = 60 * VAR_0;
  VAR_2->ReportTimer.arg = VAR_2;
  VAR_2->ReportTimer.func = VAR_1;
  VAR_2->ReportTimer.name = "hdlc";
  FUNC_0(&VAR_2->ReportTimer);
}
