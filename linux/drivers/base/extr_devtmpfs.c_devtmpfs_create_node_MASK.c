
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct req {int mode; int err; int done; struct req* next; struct device* dev; int name; int gid; int uid; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,int*,int *,int *,char const**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (char const*) ;
 int VAR_5 ;
 struct req* VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct device *VAR_8)
{
 const char *VAR_9 = ((void*)0);
 struct req VAR_10;

 if (!VAR_7)
  return 0;

 VAR_10.mode = 0;
 VAR_10.uid = VAR_2;
 VAR_10.gid = VAR_1;
 VAR_10.name = FUNC_0(VAR_8, &VAR_10.mode, &VAR_10.uid, &VAR_10.gid, &VAR_9);
 if (!VAR_10.name)
  return -VAR_0;

 if (VAR_10.mode == 0)
  VAR_10.mode = 0600;
 if (FUNC_2(VAR_8))
  VAR_10.mode |= VAR_3;
 else
  VAR_10.mode |= VAR_4;

 VAR_10.dev = VAR_8;

 FUNC_1(&VAR_10.done);

 FUNC_4(&VAR_5);
 VAR_10.next = VAR_6;
 VAR_6 = &VAR_10;
 FUNC_5(&VAR_5);

 FUNC_7(VAR_7);
 FUNC_6(&VAR_10.done);

 FUNC_3(VAR_9);

 return VAR_10.err;
}
