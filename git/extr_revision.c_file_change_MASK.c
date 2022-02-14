
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_2__ {int has_changes; } ;
struct diff_options {TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct diff_options *VAR_2,
   unsigned VAR_3, unsigned VAR_4,
   const struct object_id *VAR_5,
   const struct object_id *VAR_6,
   int VAR_7, int VAR_8,
   const char *VAR_9,
   unsigned VAR_10, unsigned VAR_11)
{
 VAR_1 = VAR_0;
 VAR_2->flags.has_changes = 1;
}
