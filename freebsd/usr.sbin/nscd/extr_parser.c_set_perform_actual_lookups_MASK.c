
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configuration_entry {int perform_actual_lookups; } ;
struct configuration {int dummy; } ;


 int FUNC_0 (void (*) (struct configuration*,char const*,int)) ;
 int FUNC_1 (void (*) (struct configuration*,char const*,int)) ;
 int FUNC_2 (int ) ;
 struct configuration_entry* FUNC_3 (struct configuration*,char const*) ;

__attribute__((used)) static void
FUNC_4(struct configuration *VAR_0,
 const char *VAR_1, int VAR_2)
{
 struct configuration_entry *VAR_3;

 FUNC_0(FUNC_4);
 FUNC_2(VAR_1 != ((void*)0));

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 FUNC_2(VAR_3 != ((void*)0));
 VAR_3->perform_actual_lookups = VAR_2;

 FUNC_1(FUNC_4);
}
