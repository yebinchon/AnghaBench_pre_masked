
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_family; int sa_len; } ;
struct rpcent {char* r_name; } ;
typedef scalar_t__ rpcprog_t ;
typedef int rpcproc_t ;
typedef int progbuf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct sockaddr*,int ,char*,int,int *,int ,int ) ;
 struct rpcent* FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,unsigned int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int,char*,char*,char const*,char*,char const*) ;

void
FUNC_8(int VAR_3, struct sockaddr *VAR_4, rpcproc_t VAR_5, rpcprog_t VAR_6,
      const char *VAR_7)
{
 const char *VAR_8;
 char VAR_9[32];
 char *VAR_10;
 char VAR_11[32];
 char VAR_12[VAR_1];
 struct rpcent *VAR_13;
 static const char *VAR_14[] = {
                      "null",
                     "set",
                       "unset",
                         "getport/addr",
                      "dump",
                        "callit",
                         "gettime",
                            "uaddr2taddr",
                            "taddr2uaddr",
                            "getversaddr",
                          "indirect",
                            "getaddrlist",
                         "getstat"
 };






 if (FUNC_1() == 0) {
  FUNC_4("logit");



  if (VAR_6 == 0) {
   VAR_10 = "";
  } else if ((VAR_13 = FUNC_3((int) VAR_6))) {
   VAR_10 = VAR_13->r_name;
  } else {
   FUNC_5(VAR_10 = VAR_11, sizeof(VAR_11), "%u",
       (unsigned)VAR_6);
  }



  if (VAR_5 >= (sizeof VAR_14 / sizeof (char *))) {
   FUNC_5(VAR_9, sizeof VAR_9, "%u",
       (unsigned)VAR_5);
   VAR_8 = VAR_9;
  } else
   VAR_8 = VAR_14[VAR_5];



  if (VAR_4->sa_family == VAR_0)
   FUNC_6(VAR_12, "local");
  else
   FUNC_2(VAR_4, VAR_4->sa_len, VAR_12,
       sizeof VAR_12, ((void*)0), 0, VAR_2);

  FUNC_7(VAR_3, "connect from %s to %s(%s)%s",
   VAR_12, VAR_8, VAR_10, VAR_7);
  FUNC_0(0);
 }
}
