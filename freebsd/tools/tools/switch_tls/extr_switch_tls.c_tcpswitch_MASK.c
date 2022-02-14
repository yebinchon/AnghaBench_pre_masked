
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int sa_len; } ;
struct host_service {char* hs_host; char* hs_service; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct sockaddr_storage*,struct sockaddr const*,int ) ;
 int FUNC_1 (char*,char*,char*,char*,char*,...) ;
 int FUNC_2 (struct sockaddr const*,struct host_service*) ;
 int FUNC_3 (char*,int *,int *,struct sockaddr_storage**,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,char*,char*,char*,char*) ;

__attribute__((used)) static bool
FUNC_5(const struct sockaddr *VAR_4, const struct sockaddr *VAR_5, int VAR_6)
{
 struct host_service VAR_7, VAR_8;
 struct sockaddr_storage VAR_9[2];
 int VAR_10;

 FUNC_0(&VAR_9[VAR_1], VAR_5, VAR_5->sa_len);
 FUNC_0(&VAR_9[VAR_2], VAR_4, VAR_4->sa_len);

 FUNC_2(VAR_4, &VAR_7);
 FUNC_2(VAR_5, &VAR_8);

 if (VAR_3) {
  FUNC_1("switch_tls %s %s %s %s %s\n",
      VAR_6 == VAR_0 ? "-s" : "-i",
      VAR_7.hs_host, VAR_7.hs_service,
      VAR_8.hs_host, VAR_8.hs_service);
  return (1);
 }

 VAR_10 = FUNC_3(VAR_6 == VAR_0 ? "net.inet.tcp.switch_to_sw_tls" :
     "net.inet.tcp.switch_to_ifnet_tls", ((void*)0), ((void*)0), &VAR_9,
     sizeof VAR_9);
 if (VAR_10 == -1) {
  FUNC_4("%s %s %s %s", VAR_7.hs_host, VAR_7.hs_service,
      VAR_8.hs_host, VAR_8.hs_service);
  return (0);
 }
 FUNC_1("%s %s %s %s: switched\n", VAR_7.hs_host, VAR_7.hs_service,
     VAR_8.hs_host, VAR_8.hs_service);
 return (1);
}
