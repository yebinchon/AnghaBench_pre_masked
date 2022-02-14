
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_debug_entry {struct event const* ptr; } ;
struct event {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct event_debug_entry* FUNC_2 (int ,int *,struct event_debug_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct event_debug_entry*) ;

__attribute__((used)) static void FUNC_4(const struct event *VAR_5)
{
 struct event_debug_entry *VAR_6, VAR_7;

 if (!VAR_2)
  goto out;

 VAR_7.ptr = VAR_5;
 FUNC_0(VAR_1, 0);
 VAR_6 = FUNC_2(VAR_0, &VAR_4, &VAR_7);
 if (VAR_6)
  FUNC_3(VAR_6);
 FUNC_1(VAR_1, 0);

out:
 VAR_3 = 1;
}
