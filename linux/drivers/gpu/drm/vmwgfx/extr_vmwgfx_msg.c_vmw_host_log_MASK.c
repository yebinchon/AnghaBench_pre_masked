
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_channel {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct rpc_channel*) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct rpc_channel*,int ) ;
 scalar_t__ FUNC_5 (struct rpc_channel*,char*) ;

int FUNC_6(const char *VAR_6)
{
 struct rpc_channel VAR_7;
 char *VAR_8;
 int VAR_9 = 0;


 if (!VAR_5)
  return -VAR_1;

 if (!VAR_6)
  return VAR_9;

 VAR_8 = FUNC_1(VAR_3, "log %s", VAR_6);
 if (!VAR_8) {
  FUNC_0("Cannot allocate memory for host log message.\n");
  return -VAR_2;
 }

 if (FUNC_4(&VAR_7, VAR_4))
  goto out_open;

 if (FUNC_5(&VAR_7, VAR_8))
  goto out_msg;

 FUNC_3(&VAR_7);
 FUNC_2(VAR_8);

 return 0;

out_msg:
 FUNC_3(&VAR_7);
out_open:
 FUNC_2(VAR_8);
 FUNC_0("Failed to send host log message.\n");

 return -VAR_0;
}
