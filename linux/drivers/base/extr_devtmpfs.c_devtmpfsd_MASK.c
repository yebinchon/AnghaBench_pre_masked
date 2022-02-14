
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct req {int done; int dev; int gid; int uid; int mode; int name; int err; struct req* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,char*,int ,int *) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 struct req* VAR_4 ;
 int FUNC_7 () ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(void *VAR_6)
{
 int *VAR_7 = VAR_6;
 *VAR_7 = FUNC_6(VAR_0);
 if (*VAR_7)
  goto out;
 *VAR_7 = FUNC_5("devtmpfs", "/", "devtmpfs", VAR_1, ((void*)0));
 if (*VAR_7)
  goto out;
 FUNC_3("/..");
 FUNC_4(".");
 FUNC_1(&VAR_5);
 while (1) {
  FUNC_8(&VAR_3);
  while (VAR_4) {
   struct req *VAR_8 = VAR_4;
   VAR_4 = ((void*)0);
   FUNC_9(&VAR_3);
   while (VAR_8) {
    struct req *VAR_9 = VAR_8->next;
    VAR_8->err = FUNC_2(VAR_8->name, VAR_8->mode,
        VAR_8->uid, VAR_8->gid, VAR_8->dev);
    FUNC_1(&VAR_8->done);
    VAR_8 = VAR_9;
   }
   FUNC_8(&VAR_3);
  }
  FUNC_0(VAR_2);
  FUNC_9(&VAR_3);
  FUNC_7();
 }
 return 0;
out:
 FUNC_1(&VAR_5);
 return *VAR_7;
}
