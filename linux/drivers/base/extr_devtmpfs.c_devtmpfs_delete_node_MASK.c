
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct req {int err; int done; struct req* next; struct device* dev; scalar_t__ mode; int name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int *,int *,int *,char const**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*) ;
 int VAR_1 ;
 struct req* VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct device *VAR_4)
{
 const char *VAR_5 = ((void*)0);
 struct req VAR_6;

 if (!VAR_3)
  return 0;

 VAR_6.name = FUNC_0(VAR_4, ((void*)0), ((void*)0), ((void*)0), &VAR_5);
 if (!VAR_6.name)
  return -VAR_0;

 VAR_6.mode = 0;
 VAR_6.dev = VAR_4;

 FUNC_1(&VAR_6.done);

 FUNC_3(&VAR_1);
 VAR_6.next = VAR_2;
 VAR_2 = &VAR_6;
 FUNC_4(&VAR_1);

 FUNC_6(VAR_3);
 FUNC_5(&VAR_6.done);

 FUNC_2(VAR_5);
 return VAR_6.err;
}
