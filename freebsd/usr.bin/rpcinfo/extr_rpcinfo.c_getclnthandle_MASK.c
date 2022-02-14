
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct netconfig {int dummy; } ;
struct netbuf {int len; int maxlen; char* buf; } ;
struct addrinfo {int ai_addrlen; char* ai_addr; } ;
struct TYPE_3__ {int re_status; } ;
struct TYPE_4__ {scalar_t__ cf_stat; TYPE_1__ cf_error; } ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_0 (int ,struct netconfig*,struct netbuf*,int ,int ,int ,int ) ;
 int FUNC_1 (struct addrinfo*) ;
 scalar_t__ FUNC_2 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (struct addrinfo*,int ,int) ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static CLIENT*
FUNC_6(char *VAR_7, struct netconfig *VAR_8,
    u_long VAR_9, struct netbuf **VAR_10)
{
 struct netbuf VAR_11;
 struct addrinfo VAR_12, *VAR_13;
 CLIENT *VAR_14 = ((void*)0);


 FUNC_5(&VAR_12, 0, sizeof VAR_12);
 if (FUNC_2(VAR_7, "rpcbind", &VAR_12, &VAR_13) != 0) {
  VAR_6.cf_stat = VAR_3;
  return (((void*)0));
 }
 VAR_11.len = VAR_11.maxlen = VAR_13->ai_addrlen;
 VAR_11.buf = VAR_13->ai_addr;
 VAR_14 = FUNC_0(VAR_1, VAR_8, &VAR_11, VAR_0,
   VAR_9, 0, 0);
 if (VAR_14) {
  if (VAR_10 != ((void*)0)) {
   *VAR_10 =
       (struct netbuf *)FUNC_3(sizeof (struct netbuf));
   if (*VAR_10 != ((void*)0)) {
    (*VAR_10)->maxlen = VAR_11.maxlen;
    (*VAR_10)->len = VAR_11.len;
    (*VAR_10)->buf = (char *)FUNC_3(VAR_11.len);
    if ((*VAR_10)->buf != ((void*)0)) {
     FUNC_4((*VAR_10)->buf, VAR_11.buf,
      VAR_11.len);
    }
   }
  }
 } else {
  if (VAR_6.cf_stat == VAR_5) {




   VAR_6.cf_stat = VAR_4;
   VAR_6.cf_error.re_status = VAR_2;
  }
 }
 FUNC_1(VAR_13);
 return (VAR_14);
}
