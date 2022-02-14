
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_config {int dummy; } ;
struct event_base {int dummy; } ;


 struct event_base* FUNC_0 (struct event_base*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct event_base*) ;
 struct event_base* FUNC_2 (struct event_config*) ;
 int FUNC_3 (struct event_config*,char*) ;
 int FUNC_4 (struct event_config*) ;
 struct event_config* FUNC_5 () ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct event_base*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_3)
{
 struct event_base *VAR_4 = ((void*)0);
 struct event_config *VAR_5 = ((void*)0);
 FUNC_6(VAR_1, VAR_2, VAR_0);
 VAR_5 = FUNC_5();
 FUNC_3(VAR_5, "Nonesuch");
 VAR_4 = FUNC_2(VAR_5);
 FUNC_7(VAR_4);
 FUNC_7(FUNC_0(VAR_4));
end:
 if (VAR_5)
  FUNC_4(VAR_5);
 if (VAR_4)
  FUNC_1(VAR_4);
}
