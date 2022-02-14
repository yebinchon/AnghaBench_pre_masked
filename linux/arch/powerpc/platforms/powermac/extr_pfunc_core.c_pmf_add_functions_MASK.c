
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct property {char* name; int length; int value; struct property* next; } ;
struct pmf_device {TYPE_1__* node; } ;
struct TYPE_2__ {struct property* properties; } ;


 char const* VAR_0 ;
 scalar_t__ FUNC_0 (struct pmf_device*,void*,char const*,int ,int) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*,int const) ;

__attribute__((used)) static int FUNC_3(struct pmf_device *VAR_1, void *VAR_2)
{
 struct property *VAR_3;

 const int VAR_4 = FUNC_1("platform-do-");
 int VAR_5 = 0;

 for (VAR_3 = VAR_1->node->properties; VAR_3 != 0; VAR_3 = VAR_3->next) {
  const char *VAR_6;
  if (FUNC_2(VAR_3->name, "platform-do-", VAR_4) != 0)
   continue;
  VAR_6 = VAR_3->name + VAR_4;
  if (FUNC_1(VAR_6) && VAR_3->length >= 12)
   VAR_5 += FUNC_0(VAR_1, VAR_2, VAR_6,
             VAR_3->value, VAR_3->length);
 }
 return VAR_5;
}
