
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* length; int* extended_attribute_length; int name; int parent_number; } ;
typedef TYPE_1__ path_table_entry ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,...) ;

void
FUNC_3(path_table_entry *VAR_0, int VAR_1, int VAR_2)
{
 FUNC_2("<ptentry num=\"%i\">\n" ,VAR_1);
 FUNC_2("<length>%i</length>\n", VAR_0->length[0]);
 FUNC_2("<extended_attribute_length>%i</extended_attribute_length>\n",
     VAR_0->extended_attribute_length[0]);
 FUNC_2("<parent_number>%i</parent_number>\n",
     FUNC_1(VAR_0->parent_number,VAR_2));
 FUNC_0("name",
     VAR_0->name, VAR_0->length[0]);
 FUNC_2("</ptentry>\n");
}
