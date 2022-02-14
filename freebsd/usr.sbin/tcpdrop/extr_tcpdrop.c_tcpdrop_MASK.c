
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int sa_len; } ;
struct host_service {char* hs_host; char* hs_service; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct sockaddr_storage*,struct sockaddr const*,int ) ;
 int FUNC_1 (char*,char*,char*,char*,char*) ;
 int FUNC_2 (struct sockaddr const*,struct host_service*) ;
 int FUNC_3 (char*,int *,int *,struct sockaddr_storage**,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*,char*,char*,char*,char*) ;

__attribute__((used)) static bool
FUNC_5(const struct sockaddr *VAR_3, const struct sockaddr *VAR_4)
{
 struct host_service VAR_5, VAR_6;
 struct sockaddr_storage VAR_7[2];
 int VAR_8;

 FUNC_0(&VAR_7[VAR_0], VAR_4, VAR_4->sa_len);
 FUNC_0(&VAR_7[VAR_1], VAR_3, VAR_3->sa_len);

 FUNC_2(VAR_3, &VAR_5);
 FUNC_2(VAR_4, &VAR_6);

 if (VAR_2) {
  FUNC_1("tcpdrop %s %s %s %s\n", VAR_5.hs_host, VAR_5.hs_service,
      VAR_6.hs_host, VAR_6.hs_service);
  return (1);
 }

 VAR_8 = FUNC_3("net.inet.tcp.drop", ((void*)0), ((void*)0), &VAR_7,
     sizeof VAR_7);
 if (VAR_8 == -1) {
  FUNC_4("%s %s %s %s", VAR_5.hs_host, VAR_5.hs_service,
      VAR_6.hs_host, VAR_6.hs_service);
  return (0);
 }
 FUNC_1("%s %s %s %s: dropped\n", VAR_5.hs_host, VAR_5.hs_service,
     VAR_6.hs_host, VAR_6.hs_service);
 return (1);
}
