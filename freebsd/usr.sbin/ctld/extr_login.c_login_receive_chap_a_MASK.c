
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {int dummy; } ;
struct keys {int dummy; } ;
struct connection {int dummy; } ;


 int FUNC_0 (struct keys*) ;
 char* FUNC_1 (struct keys*,char*) ;
 int FUNC_2 (struct keys*,struct pdu*) ;
 struct keys* FUNC_3 () ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 struct pdu* FUNC_6 (struct connection*,int) ;
 int FUNC_7 (struct pdu*,int,int) ;

__attribute__((used)) static struct pdu *
FUNC_8(struct connection *VAR_0)
{
 struct pdu *VAR_1;
 struct keys *VAR_2;
 const char *VAR_3;

 VAR_1 = FUNC_6(VAR_0, 0);
 VAR_2 = FUNC_3();
 FUNC_2(VAR_2, VAR_1);

 VAR_3 = FUNC_1(VAR_2, "CHAP_A");
 if (VAR_3 == ((void*)0)) {
  FUNC_7(VAR_1, 0x02, 0x07);
  FUNC_4(1, "received CHAP Login PDU without CHAP_A");
 }
 if (FUNC_5(VAR_3, "5") == 0) {
  FUNC_7(VAR_1, 0x02, 0x01);
  FUNC_4(1, "received CHAP Login PDU with unsupported CHAP_A "
      "\"%s\"", VAR_3);
 }
 FUNC_0(VAR_2);

 return (VAR_1);
}
