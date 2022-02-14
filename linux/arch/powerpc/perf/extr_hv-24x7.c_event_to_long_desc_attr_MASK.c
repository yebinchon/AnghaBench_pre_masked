
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_24x7_event_data {int dummy; } ;
struct attribute {int dummy; } ;


 struct attribute* FUNC_0 (char*,int,int,char*,int) ;
 char* FUNC_1 (struct hv_24x7_event_data*,int*) ;
 char* FUNC_2 (struct hv_24x7_event_data*,int*) ;

__attribute__((used)) static struct attribute *
FUNC_3(struct hv_24x7_event_data *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 char *VAR_4 = FUNC_2(VAR_0, &VAR_2);
 char *VAR_5 = FUNC_1(VAR_0, &VAR_3);


 if (!VAR_3)
  return ((void*)0);

 return FUNC_0(VAR_4, VAR_2, VAR_1, VAR_5, VAR_3);
}
