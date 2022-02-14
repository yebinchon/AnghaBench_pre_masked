
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bandwidth; int serve_usecs; } ;
struct TYPE_3__ {scalar_t__ resp_size; void* valid; void* processed; void* invalid; void* excluded_ip; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 void* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  VAR_1->valid = VAR_1->processed = VAR_1->invalid = VAR_1->excluded_ip = 0;
}
