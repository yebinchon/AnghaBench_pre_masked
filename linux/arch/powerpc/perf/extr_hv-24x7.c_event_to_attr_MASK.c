
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_24x7_event_data {int dummy; } ;
struct attribute {int dummy; } ;


 int VAR_0 ;
 struct attribute* FUNC_0 (char*,char*) ;
 int FUNC_1 (unsigned int) ;
 char* FUNC_2 (struct hv_24x7_event_data*,unsigned int) ;
 char* FUNC_3 (struct hv_24x7_event_data*,int*) ;
 char* FUNC_4 (int ,char*,int,char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static struct attribute *FUNC_7(unsigned VAR_1,
           struct hv_24x7_event_data *VAR_2,
           unsigned VAR_3,
           int VAR_4)
{
 int VAR_5;
 char *VAR_6, *VAR_7, *VAR_8;
 struct attribute *VAR_9;

 if (!FUNC_1(VAR_3)) {
  FUNC_6("catalog event %u has invalid domain %u\n",
    VAR_1, VAR_3);
  return ((void*)0);
 }

 VAR_8 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_8)
  return ((void*)0);

 VAR_6 = FUNC_3(VAR_2, &VAR_5);
 if (!VAR_4)
  VAR_7 = FUNC_4(VAR_0, "%.*s",
    (int)VAR_5, VAR_6);
 else
  VAR_7 = FUNC_4(VAR_0, "%.*s__%d",
    (int)VAR_5, VAR_6, VAR_4);

 if (!VAR_7)
  goto out_val;

 VAR_9 = FUNC_0(VAR_7, VAR_8);
 if (!VAR_9)
  goto out_name;

 return VAR_9;
out_name:
 FUNC_5(VAR_7);
out_val:
 FUNC_5(VAR_8);
 return ((void*)0);
}
