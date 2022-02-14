
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* type; } ;
struct TYPE_6__ {TYPE_1__ h; } ;
struct TYPE_7__ {TYPE_2__ SP; } ;
struct TYPE_8__ {TYPE_3__ su_entry; } ;
struct ISO_SUSP_ATTRIBUTES {int susp_type; int entry_type; char* type_of; int write_location; TYPE_4__ attr; scalar_t__ last_in_suf; } ;


 struct ISO_SUSP_ATTRIBUTES* FUNC_0 (int) ;

struct ISO_SUSP_ATTRIBUTES*
FUNC_1(int VAR_0, int VAR_1, const char *VAR_2,
       int VAR_3)
{
 struct ISO_SUSP_ATTRIBUTES* VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4));
 VAR_4->susp_type = VAR_0;
 VAR_4->entry_type = VAR_1;
 VAR_4->last_in_suf = 0;

 VAR_4->type_of[0] = VAR_2[0];
 VAR_4->type_of[1] = VAR_2[1];
 VAR_4->write_location = VAR_3;






 VAR_4->attr.su_entry.SP.h.type[0] = VAR_2[0];
 VAR_4->attr.su_entry.SP.h.type[1] = VAR_2[1];
 return VAR_4;
}
