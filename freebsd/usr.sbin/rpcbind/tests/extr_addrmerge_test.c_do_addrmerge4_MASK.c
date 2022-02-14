
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct netbuf {int maxlen; int len; void* buf; } ;
typedef int caller_in ;


 int VAR_0 ;
 char* FUNC_0 (struct netbuf*,char const*,char const*,char const*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char*
FUNC_2(const char* VAR_1)
{
 struct netbuf VAR_2;
 struct sockaddr_in VAR_3;
 const char *VAR_4, *VAR_5, *VAR_6;


 VAR_2.maxlen = sizeof(struct sockaddr_storage);
 VAR_2.len = sizeof(VAR_3);
 VAR_3.sin_family = VAR_0;
 VAR_3.sin_len = sizeof(VAR_3);
 VAR_3.sin_port = 1234;
 VAR_3.sin_addr.s_addr = FUNC_1("192.0.2.1");
 VAR_2.buf = (void*)&VAR_3;
 if (VAR_1 != ((void*)0))
  VAR_5 = VAR_1;
 else
  VAR_5 = "192.0.2.1.3.46";


 VAR_4 = "0.0.0.0.3.46";

 VAR_6 = "udp";
 return (FUNC_0(&VAR_2, VAR_4, VAR_5, VAR_6));
}
