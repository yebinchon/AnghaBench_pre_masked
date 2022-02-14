
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upload_pack_options {int stateless_rpc; int advertise_refs; int daemon_mode; scalar_t__ timeout; int member_0; } ;
struct serve_options {int advertise_capabilities; int stateless_rpc; } ;
struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 struct option FUNC_2 (int ,char*,int*,int ) ;
 struct option FUNC_3 () ;
 struct option FUNC_4 (int ,char*,scalar_t__*,int ) ;
 struct serve_options VAR_0 ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char const*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (int,char const**,char const*,struct option*,int ,int ) ;




 scalar_t__ VAR_1 ;
 int FUNC_11 (struct serve_options*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct upload_pack_options*) ;
 int VAR_2 ;
 int FUNC_14 (int ,struct option*) ;

int FUNC_15(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 const char *VAR_6;
 int VAR_7 = 0;
 struct upload_pack_options VAR_8 = { 0 };
 struct serve_options VAR_9 = VAR_0;
 struct option VAR_10[] = {
  FUNC_2(0, "stateless-rpc", &VAR_8.stateless_rpc,
    FUNC_1("quit after a single request/response exchange")),
  FUNC_2(0, "advertise-refs", &VAR_8.advertise_refs,
    FUNC_1("exit immediately after initial ref advertisement")),
  FUNC_2(0, "strict", &VAR_7,
    FUNC_1("do not try <directory>/.git/ if <directory> is no Git directory")),
  FUNC_4(0, "timeout", &VAR_8.timeout,
       FUNC_1("interrupt transfer after <n> seconds of inactivity")),
  FUNC_3()
 };

 FUNC_8("upload-pack");
 VAR_1 = 0;

 VAR_3 = FUNC_10(VAR_3, VAR_4, VAR_5, VAR_10, VAR_2, 0);

 if (VAR_3 != 1)
  FUNC_14(VAR_2, VAR_10);

 if (VAR_8.timeout)
  VAR_8.daemon_mode = 1;

 FUNC_12();

 VAR_6 = VAR_4[0];

 if (!FUNC_7(VAR_6, VAR_7))
  FUNC_6("'%s' does not appear to be a git repository", VAR_6);

 switch (FUNC_5()) {
 case 128:
  VAR_9.advertise_capabilities = VAR_8.advertise_refs;
  VAR_9.stateless_rpc = VAR_8.stateless_rpc;
  FUNC_11(&VAR_9);
  break;
 case 129:




  if (VAR_8.advertise_refs || !VAR_8.stateless_rpc)
   FUNC_9(1, "version 1\n");


 case 130:
  FUNC_13(&VAR_8);
  break;
 case 131:
  FUNC_0("unknown protocol version");
 }

 return 0;
}
