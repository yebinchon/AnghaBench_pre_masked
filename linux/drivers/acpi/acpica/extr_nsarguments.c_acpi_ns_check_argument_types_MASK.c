
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct acpi_evaluate_info {size_t param_count; TYPE_5__* node; int full_pathname; TYPE_4__** parameters; TYPE_2__* predefined; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_8__ {size_t type; } ;
struct TYPE_9__ {TYPE_3__ common; } ;
struct TYPE_6__ {int argument_list; } ;
struct TYPE_7__ {TYPE_1__ info; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (size_t) ;

void FUNC_4(struct acpi_evaluate_info *VAR_3)
{
 u16 VAR_4;
 u8 VAR_5;
 u8 VAR_6;
 u8 VAR_7;
 u32 VAR_8;
 if (!VAR_3->predefined || (VAR_3->node->flags & VAR_2)) {
  return;
 }

 VAR_4 = VAR_3->predefined->info.argument_list;
 VAR_5 = FUNC_1(VAR_4);



 for (VAR_8 = 0; ((VAR_8 < VAR_5) && (VAR_8 < VAR_3->param_count)); VAR_8++) {
  VAR_6 = FUNC_2(VAR_4);
  VAR_7 = VAR_3->parameters[VAR_8]->common.type;

  if (VAR_7 != VAR_6) {
   FUNC_0((VAR_1, VAR_3->full_pathname,
           VAR_0,
           "Argument #%u type mismatch - "
           "Found [%s], ACPI requires [%s]",
           (VAR_8 + 1),
           FUNC_3
           (VAR_7),
           FUNC_3(VAR_6)));



   VAR_3->node->flags |= VAR_2;
  }
 }
}
