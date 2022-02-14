
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_val {int dummy; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {scalar_t__ type; char* name; struct switch_attr* next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct switch_attr*,struct switch_val*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char) ;
 scalar_t__ FUNC_3 (struct switch_dev*,struct switch_attr*,struct switch_val*) ;

__attribute__((used)) static void
FUNC_4(struct switch_dev *VAR_1, struct switch_attr *VAR_2, struct switch_val *VAR_3)
{
 while (VAR_2) {
  if (VAR_2->type != VAR_0) {
   FUNC_1("\t%s: ", VAR_2->name);
   if (FUNC_3(VAR_1, VAR_2, VAR_3) < 0)
    FUNC_1("???");
   else
    FUNC_0(VAR_2, VAR_3);
   FUNC_2('\n');
  }
  VAR_2 = VAR_2->next;
 }
}
