
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct module*) ;
 int FUNC_1 (struct module*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct module *VAR_1)
{
 if (VAR_0 && VAR_1 && !FUNC_1(VAR_1))
  FUNC_2("Module %s signature verification failed in FIPS mode\n",
        FUNC_0(VAR_1));
}
