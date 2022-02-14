
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_0; int member_1; } ;
struct event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct event*,struct timeval*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct event*) ;
 struct event* FUNC_5 (int ,int,int ,int *,int *) ;
 struct event* FUNC_6 (int ,int ,int *,int *) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int
FUNC_11(int VAR_11, char **VAR_12)
{
 struct timeval VAR_13 = { 1, 0 };
 struct event *VAR_14, *VAR_15;

 VAR_4 = FUNC_3();
 VAR_6 = FUNC_10(100);
 VAR_5 = FUNC_10(100);



 FUNC_8(VAR_4, &VAR_8, ((void*)0));
 FUNC_7(VAR_4, &VAR_7, ((void*)0));


 VAR_14 = FUNC_5(VAR_4, -1, VAR_0, &VAR_10, ((void*)0));
 if (!VAR_14)
  return VAR_1;
 FUNC_0(VAR_14, &VAR_13);


 VAR_15 = FUNC_6(VAR_4, VAR_3, &VAR_9, ((void*)0));
 if (!VAR_15)
  return VAR_1;
 FUNC_0(VAR_15, ((void*)0));


 FUNC_1(VAR_4);


 FUNC_4(VAR_14);
 FUNC_4(VAR_15);
 FUNC_2(VAR_4);
 FUNC_9(VAR_6);
 FUNC_9(VAR_5);

 return VAR_2;
}
