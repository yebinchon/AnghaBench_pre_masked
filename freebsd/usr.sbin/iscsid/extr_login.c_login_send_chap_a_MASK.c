
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {int dummy; } ;
struct keys {int dummy; } ;
struct connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct keys*,char*,char*) ;
 int FUNC_1 (struct keys*) ;
 struct keys* FUNC_2 () ;
 int FUNC_3 (struct keys*,struct pdu*) ;
 struct pdu* FUNC_4 (struct connection*,int ) ;
 int FUNC_5 (struct pdu*) ;
 int FUNC_6 (struct pdu*) ;

__attribute__((used)) static void
FUNC_7(struct connection *VAR_1)
{
 struct pdu *VAR_2;
 struct keys *VAR_3;

 VAR_2 = FUNC_4(VAR_1, VAR_0);
 VAR_3 = FUNC_2();
 FUNC_0(VAR_3, "CHAP_A", "5");
 FUNC_3(VAR_3, VAR_2);
 FUNC_1(VAR_3);
 FUNC_6(VAR_2);
 FUNC_5(VAR_2);
}
