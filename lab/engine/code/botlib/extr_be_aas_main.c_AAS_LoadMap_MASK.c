
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* loaded; void* initialized; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char const*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 void* VAR_2 ;

int FUNC_7(const char *VAR_3)
{
 int VAR_4;


 if (!VAR_3)
 {
  return 0;
 }

 VAR_1.initialized = VAR_2;



 FUNC_0();

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4 != VAR_0)
 {
  VAR_1.loaded = VAR_2;
  return VAR_4;
 }

 FUNC_5();

 FUNC_1();

 FUNC_2();

 FUNC_4();

 FUNC_3();

 return 0;
}
