
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ invalid_requests_log; } ;
struct TYPE_6__ {scalar_t__ invalid; TYPE_1__* items; int log_erridx; int * errors; } ;
struct TYPE_5__ {scalar_t__ errstr; } ;
typedef TYPE_2__ GLog ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_1 (char*,int) ;
 int * FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4 (GLog * VAR_2, const char *VAR_3)
{
  VAR_2->invalid++;



  if (VAR_1.invalid_requests_log) {
    FUNC_0 (("%s", VAR_3));
  }

  if (VAR_2->items->errstr && VAR_2->invalid < VAR_0) {
    if (VAR_2->errors == ((void*)0))
      VAR_2->errors = FUNC_2 (VAR_0, sizeof (char *));
    VAR_2->errors[VAR_2->log_erridx++] = FUNC_3 (VAR_2->items->errstr);
  }
}
