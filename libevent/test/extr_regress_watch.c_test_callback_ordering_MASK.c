
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct evwatch {int dummy; } ;
struct event_base {int dummy; } ;
struct basic_test_data {struct event_base* base; } ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct event_base*) ;
 int FUNC_1 (struct event_base*,int,int ,int *,int ,struct timeval*) ;
 struct evwatch* FUNC_2 (struct event_base*,int *,int *) ;
 int FUNC_3 (struct evwatch*) ;
 struct evwatch* FUNC_4 (struct event_base*,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_5(void *VAR_9)
{
 struct basic_test_data *VAR_10 = VAR_9;
 struct event_base *VAR_11 = VAR_10->base;
 struct evwatch *VAR_12;
 struct evwatch *VAR_13;
 struct timeval VAR_14;


 FUNC_4(VAR_11, &VAR_4, &VAR_8);
 FUNC_2(VAR_11, &VAR_1, &VAR_8);
 VAR_12 = FUNC_4(VAR_11, &VAR_5, &VAR_8);
 VAR_13 = FUNC_2(VAR_11, &VAR_2, &VAR_8);



 VAR_14.tv_sec = 1;
 VAR_14.tv_usec = 0;
 FUNC_1(VAR_11, -1, VAR_0, &VAR_7, 0, &VAR_14);
 FUNC_0(VAR_11);



 VAR_3 = 1;
 VAR_6.tv_sec = 0;
 FUNC_3(VAR_12);
 FUNC_3(VAR_13);
 FUNC_1(VAR_11, -1, VAR_0, &VAR_7, 0, &VAR_14);
 FUNC_0(VAR_11);
}
