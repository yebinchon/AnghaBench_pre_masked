
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct jailparam {size_t jp_valuelen; scalar_t__ jp_value; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int ipbuf ;




 int VAR_0 ;
 int * FUNC_0 (int,int *,char*,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(int VAR_1, const char *VAR_2, struct jailparam *VAR_3)
{
 char VAR_4[VAR_0];
 size_t VAR_5;
 const char *VAR_6;
 int VAR_7, VAR_8;

 switch (VAR_1) {
 case 129:
  VAR_5 = sizeof(struct in_addr);
  VAR_6 = "{P:        }{ql:ipv4_addr}{P:\n}";
  break;
 case 128:
  VAR_5 = sizeof(struct in6_addr);
  VAR_6 = "{P:        }{ql:ipv6_addr}{P:\n}";
  break;
 default:
  FUNC_3(1, "unsupported af_family");
  return;
 }

 VAR_8 = VAR_3->jp_valuelen / VAR_5;

 FUNC_4(VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  if (FUNC_0(VAR_1,
      ((uint8_t *)VAR_3->jp_value) + VAR_5 * VAR_7,
      VAR_4, sizeof(VAR_4)) == ((void*)0)) {
   FUNC_3(1, "inet_ntop");
  } else {
   FUNC_2(VAR_6, VAR_4);
  }
 }
 FUNC_1(VAR_2);
}
