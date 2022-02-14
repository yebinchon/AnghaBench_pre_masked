
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_channel {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char*) ;
 size_t FUNC_3 (size_t,size_t) ;
 int FUNC_4 (char*,char*,size_t) ;
 size_t FUNC_5 (size_t,size_t) ;
 int FUNC_6 (struct rpc_channel*) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (struct rpc_channel*,int ) ;
 scalar_t__ FUNC_8 (struct rpc_channel*,void*,size_t*) ;
 scalar_t__ FUNC_9 (struct rpc_channel*,char*) ;

int FUNC_10(const char *VAR_6,
      char *VAR_7, size_t *VAR_8)
{
 struct rpc_channel VAR_9;
 char *VAR_10, *VAR_11 = ((void*)0);
 size_t VAR_12 = 0;

 if (!VAR_5)
  return -VAR_1;

 if (!VAR_6 || !VAR_8)
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_3, "info-get %s", VAR_6);
 if (!VAR_10) {
  FUNC_0("Cannot allocate memory to get guest info \"%s\".",
     VAR_6);
  return -VAR_2;
 }

 if (FUNC_7(&VAR_9, VAR_4))
  goto out_open;

 if (FUNC_9(&VAR_9, VAR_10) ||
     FUNC_8(&VAR_9, (void *) &VAR_11, &VAR_12))
  goto out_msg;

 FUNC_6(&VAR_9);
 if (VAR_7 && VAR_11 && VAR_12 > 0) {



  VAR_12 = FUNC_3(VAR_12 - 2, (size_t) 0);
  VAR_12 = FUNC_5(VAR_12, *VAR_8);

  if (VAR_12 > 0)
   FUNC_4(VAR_7, VAR_11 + 2, VAR_12);
 }

 *VAR_8 = VAR_12;

 FUNC_2(VAR_11);
 FUNC_2(VAR_10);

 return 0;

out_msg:
 FUNC_6(&VAR_9);
 FUNC_2(VAR_11);
out_open:
 *VAR_8 = 0;
 FUNC_2(VAR_10);
 FUNC_0("Failed to get guest info \"%s\".", VAR_6);

 return -VAR_0;
}
