
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clar_func {int name; int (* ptr ) () ;} ;
struct TYPE_4__ {int trampoline_enabled; TYPE_1__* last_report; int tests_ran; scalar_t__ report_errors_only; int * local_cleanup_payload; int (* local_cleanup ) (int *) ;int trampoline; } ;
struct TYPE_3__ {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(
 const struct clar_func *VAR_7,
 const struct clar_func *VAR_8,
 const struct clar_func *VAR_9)
{
 VAR_6.trampoline_enabled = 1;

 FUNC_0(VAR_2);

 if (FUNC_3(VAR_6.trampoline) == 0) {
  if (VAR_8->ptr != ((void*)0))
   VAR_8->ptr();

  FUNC_0(VAR_4);
  VAR_7->ptr();
  FUNC_0(VAR_5);
 }

 VAR_6.trampoline_enabled = 0;

 if (VAR_6.last_report->status == VAR_0)
  VAR_6.last_report->status = VAR_1;

 if (VAR_6.local_cleanup != ((void*)0))
  VAR_6.local_cleanup(VAR_6.local_cleanup_payload);

 if (VAR_9->ptr != ((void*)0))
  VAR_9->ptr();

 FUNC_0(VAR_3);

 VAR_6.tests_ran++;


 VAR_6.local_cleanup = ((void*)0);
 VAR_6.local_cleanup_payload = ((void*)0);

 if (VAR_6.report_errors_only) {
  FUNC_2(VAR_6.last_report);
 } else {
  FUNC_1(VAR_7->name, VAR_6.tests_ran, VAR_6.last_report->status);
 }
}
