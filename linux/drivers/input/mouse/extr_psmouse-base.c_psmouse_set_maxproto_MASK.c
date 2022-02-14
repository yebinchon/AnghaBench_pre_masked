
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse_protocol {unsigned int type; int maxproto; } ;
struct kernel_param {scalar_t__ arg; } ;


 int VAR_0 ;
 struct psmouse_protocol* FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, const struct kernel_param *VAR_2)
{
 const struct psmouse_protocol *VAR_3;

 if (!VAR_1)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_1, FUNC_1(VAR_1));

 if (!VAR_3 || !VAR_3->maxproto)
  return -VAR_0;

 *((unsigned int *)VAR_2->arg) = VAR_3->type;

 return 0;
}
