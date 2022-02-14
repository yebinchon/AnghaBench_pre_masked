
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_mreq {int imr_interface; int imr_multiaddr; } ;
typedef int imr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,char const*,char*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int ,struct ip_mreq*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*,char const*,char*,int ) ;

__attribute__((used)) static void
FUNC_5(int VAR_5, const char *VAR_6, struct ip_mreq VAR_7,
    int VAR_8)
{
 char VAR_9[128];
 int VAR_10;

 VAR_10 = FUNC_2(VAR_5, VAR_1, VAR_2, &VAR_7,
     sizeof(VAR_7));
 if (VAR_10 < 0) {
  FUNC_3(VAR_9, FUNC_1(VAR_7.imr_multiaddr), 128);
  FUNC_0(-1, "FAIL: setsockopt(%s, IPPROTO_IP, IP_ADD_MEMBERSHIP "
      "%s, %s)", VAR_6, VAR_9, FUNC_1(VAR_7.imr_interface));
 }
 if (VAR_10 == 0 && (VAR_8 & VAR_3)) {
  FUNC_3(VAR_9, FUNC_1(VAR_7.imr_multiaddr), 128);
  FUNC_4("WARN: setsockopt(%s, IPPROTO_IP, IP_ADD_MEMBERSHIP "
      "%s, %s) returned 0", VAR_6, VAR_9,
      FUNC_1(VAR_7.imr_interface));
 }


 VAR_10 = FUNC_2(VAR_5, VAR_1, VAR_2, &VAR_7,
     sizeof(VAR_7));
 if (VAR_10 == 0) {
  FUNC_3(VAR_9, FUNC_1(VAR_7.imr_multiaddr), 128);
  FUNC_0(-1, "FAIL: setsockopt(%s, IPPROTO_IP, IP_ADD_MEMBERSHIP "
      "%s, %s) dup returned 0", VAR_6, VAR_9,
      FUNC_1(VAR_7.imr_interface));
 }
 if (VAR_10 < 0 && VAR_4 != VAR_0) {
  FUNC_3(VAR_9, FUNC_1(VAR_7.imr_multiaddr), 128);
  FUNC_0(-1, "FAIL: setsockopt(%s, IPPROTO_IP, IP_ADD_MEMBERSHIP "
      "%s, %s)", VAR_6, VAR_9, FUNC_1(VAR_7.imr_interface));
 }
}
