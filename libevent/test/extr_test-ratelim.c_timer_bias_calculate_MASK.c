
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_1; int member_0; } ;
struct event_config {int dummy; } ;
struct event_base {int dummy; } ;
struct event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct event*,struct timeval*) ;
 int FUNC_2 (struct event_base*) ;
 int FUNC_3 (struct event_base*) ;
 struct event_base* FUNC_4 (struct event_config*) ;
 int FUNC_5 (struct event_config*) ;
 struct event_config* FUNC_6 () ;
 scalar_t__ FUNC_7 (struct event_config*,int ) ;
 int FUNC_8 (struct event*) ;
 struct event* FUNC_9 (struct event_base*,int,int ,int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static double
FUNC_13(void)
{
 struct event_config *VAR_8 = ((void*)0);
 struct event_base *VAR_9 = ((void*)0);
 struct event *VAR_10 = ((void*)0);
 struct timeval VAR_11 = { 0, 1 };

 VAR_8 = FUNC_6();
 if (!VAR_8)
  goto err;
 if (FUNC_7(VAR_8, VAR_0))
  goto err;
 VAR_9 = FUNC_4(VAR_8);
 if (!VAR_9)
  goto err;

 VAR_10 = FUNC_9(VAR_9, -1, VAR_1, VAR_4, FUNC_10());
 if (!VAR_10 || FUNC_1(VAR_10, &VAR_11)) {
  goto err;
 }

 FUNC_11(&VAR_7, ((void*)0));
 FUNC_2(VAR_9);
 FUNC_8(VAR_10);

 return FUNC_0(VAR_6 / 1e6 / VAR_5 / VAR_2, 5);

err:
 if (VAR_8)
  FUNC_5(VAR_8);
 if (VAR_10)
  FUNC_8(VAR_10);
 if (VAR_9)
  FUNC_3(VAR_9);

 FUNC_12(VAR_3, "Couldn't create event for CPU cycle counter bias\n");
 return -1;
}
