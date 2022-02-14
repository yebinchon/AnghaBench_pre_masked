
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse {TYPE_1__* protocol; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct psmouse *VAR_0, void *VAR_1, char *VAR_2)
{
 return FUNC_0(VAR_2, "%s\n", VAR_0->protocol->name);
}
