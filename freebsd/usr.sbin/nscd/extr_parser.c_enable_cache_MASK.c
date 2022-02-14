
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configuration_entry {int enabled; } ;
struct configuration {int dummy; } ;


 int FUNC_0 (void (*) (struct configuration*,char const*,int)) ;
 int FUNC_1 (void (*) (struct configuration*,char const*,int)) ;
 struct configuration_entry* FUNC_2 (struct configuration*,char const*) ;

__attribute__((used)) static void
FUNC_3(struct configuration *VAR_0, const char *VAR_1, int VAR_2)
{
 struct configuration_entry *VAR_3;

 FUNC_0(FUNC_3);
 VAR_3 = FUNC_2(VAR_0, VAR_1);
 VAR_3->enabled = VAR_2;
 FUNC_1(FUNC_3);
}
