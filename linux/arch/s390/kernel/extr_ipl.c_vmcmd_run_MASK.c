
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shutdown_trigger {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int *,int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;

__attribute__((used)) static void FUNC_3(struct shutdown_trigger *VAR_10)
{
 char *VAR_11;

 if (FUNC_1(VAR_10->name, VAR_3) == 0)
  VAR_11 = VAR_8;
 else if (FUNC_1(VAR_10->name, VAR_1) == 0)
  VAR_11 = VAR_6;
 else if (FUNC_1(VAR_10->name, VAR_0) == 0)
  VAR_11 = VAR_5;
 else if (FUNC_1(VAR_10->name, VAR_2) == 0)
  VAR_11 = VAR_7;
 else if (FUNC_1(VAR_10->name, VAR_4) == 0)
  VAR_11 = VAR_9;
 else
  return;

 if (FUNC_2(VAR_11) == 0)
  return;
 FUNC_0(VAR_11, ((void*)0), 0, ((void*)0));
}
