
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clar_error {char const* file; size_t line_number; char const* error_msg; int description; struct clar_error* next; } ;
struct TYPE_4__ {TYPE_1__* last_report; int total_errors; } ;
struct TYPE_3__ {int status; struct clar_error* last_error; struct clar_error* errors; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 () ;
 struct clar_error* FUNC_1 (int,int) ;
 int FUNC_2 (char const*) ;

void FUNC_3(
 const char *VAR_2,
 size_t VAR_3,
 const char *VAR_4,
 const char *VAR_5,
 int VAR_6)
{
 struct clar_error *VAR_7 = FUNC_1(1, sizeof(struct clar_error));

 if (VAR_1.last_report->errors == ((void*)0))
  VAR_1.last_report->errors = VAR_7;

 if (VAR_1.last_report->last_error != ((void*)0))
  VAR_1.last_report->last_error->next = VAR_7;

 VAR_1.last_report->last_error = VAR_7;

 VAR_7->file = VAR_2;
 VAR_7->line_number = VAR_3;
 VAR_7->error_msg = VAR_4;

 if (VAR_5 != ((void*)0))
  VAR_7->description = FUNC_2(VAR_5);

 VAR_1.total_errors++;
 VAR_1.last_report->status = VAR_0;

 if (VAR_6)
  FUNC_0();
}
