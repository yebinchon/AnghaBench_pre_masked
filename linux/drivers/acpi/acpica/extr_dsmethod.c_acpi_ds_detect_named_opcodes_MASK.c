
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union acpi_parse_object {int dummy; } acpi_parse_object ;
struct acpi_walk_state {int opcode; TYPE_3__* op_info; TYPE_2__* method_node; TYPE_4__* method_desc; } ;
typedef int acpi_status ;
struct TYPE_10__ {int info_flags; scalar_t__ sync_level; } ;
struct TYPE_9__ {TYPE_5__ method; } ;
struct TYPE_8__ {int flags; int name; } ;
struct TYPE_6__ {int ascii; } ;
struct TYPE_7__ {TYPE_1__ name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (struct acpi_walk_state*,union acpi_parse_object**)) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static acpi_status
FUNC_2(struct acpi_walk_state *VAR_8,
        union acpi_parse_object **VAR_9)
{

 FUNC_1(FUNC_2);



 if (!
     (VAR_8->op_info->
      flags & (VAR_7 | VAR_5 | VAR_6))) {
  return (VAR_4);
 }
 VAR_8->method_desc->method.sync_level = 0;
 VAR_8->method_desc->method.info_flags |=
     (VAR_2 | VAR_1);

 FUNC_0((VAR_0,
     "Method serialized [%4.4s] %p - [%s] (%4.4X)\n",
     VAR_8->method_node->name.ascii,
     VAR_8->method_node, VAR_8->op_info->name,
     VAR_8->opcode));



 return (VAR_3);
}
