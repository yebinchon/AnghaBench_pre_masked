
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {char* ifr_name; int ifr_mtu; } ;
struct glob_arg {char* ifname; } ;
typedef int ifreq ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ,struct ifreq*) ;
 int FUNC_2 (struct ifreq*,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*,char) ;
 size_t FUNC_5 (char*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_9(const struct glob_arg *VAR_5)
{
 char VAR_6[VAR_1];
 struct ifreq VAR_7;
 int VAR_8, VAR_9;

 if (!FUNC_7(VAR_5->ifname, "netmap:", 7) && !FUNC_4(VAR_5->ifname, '{')
   && !FUNC_4(VAR_5->ifname, '}')) {


  FUNC_8(VAR_6, VAR_5->ifname+7, VAR_1-1);
  VAR_6[FUNC_5(VAR_6, "-*^{}/@")] = '\0';

  VAR_8 = FUNC_3(VAR_0, VAR_3, 0);
  if (VAR_8 < 0) {
   FUNC_0("socket() failed: %s", FUNC_6(VAR_4));
   return VAR_8;
  }

  FUNC_2(&VAR_7, 0, sizeof(VAR_7));
  FUNC_8(VAR_7.ifr_name, VAR_6, VAR_1);

  VAR_9 = FUNC_1(VAR_8, VAR_2, &VAR_7);
  if (VAR_9) {
   FUNC_0("ioctl(SIOCGIFMTU) failed: %s", FUNC_6(VAR_4));
  }

  return VAR_7.ifr_mtu;
 }



 return 65536;
}
