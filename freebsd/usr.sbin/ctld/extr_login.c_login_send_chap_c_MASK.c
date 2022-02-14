
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {int dummy; } ;
struct keys {int dummy; } ;
struct chap {int dummy; } ;


 char* FUNC_0 (struct chap*) ;
 char* FUNC_1 (struct chap*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct keys*,char*,char*) ;
 int FUNC_4 (struct keys*) ;
 struct keys* FUNC_5 () ;
 int FUNC_6 (struct keys*,struct pdu*) ;
 struct pdu* FUNC_7 (struct pdu*) ;
 int FUNC_8 (struct pdu*) ;
 int FUNC_9 (struct pdu*) ;

__attribute__((used)) static void
FUNC_10(struct pdu *VAR_0, struct chap *VAR_1)
{
 struct pdu *VAR_2;
 struct keys *VAR_3;
 char *VAR_4, *VAR_5;

 VAR_4 = FUNC_0(VAR_1);
 VAR_5 = FUNC_1(VAR_1);

 VAR_2 = FUNC_7(VAR_0);
 VAR_3 = FUNC_5();
 FUNC_3(VAR_3, "CHAP_A", "5");
 FUNC_3(VAR_3, "CHAP_I", VAR_5);
 FUNC_3(VAR_3, "CHAP_C", VAR_4);
 FUNC_2(VAR_5);
 FUNC_2(VAR_4);
 FUNC_6(VAR_3, VAR_2);
 FUNC_9(VAR_2);
 FUNC_8(VAR_2);
 FUNC_4(VAR_3);
}
