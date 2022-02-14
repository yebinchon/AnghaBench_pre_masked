
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rchap {int dummy; } ;
struct pdu {int dummy; } ;
struct keys {int dummy; } ;
struct auth {char* a_mutual_user; int a_mutual_secret; int a_user; TYPE_1__* a_auth_group; } ;
struct TYPE_2__ {scalar_t__ ag_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct keys*,char*,char*) ;
 int FUNC_2 (struct keys*) ;
 char* FUNC_3 (struct keys*,char*) ;
 int FUNC_4 (struct keys*,struct pdu*) ;
 struct keys* FUNC_5 () ;
 int FUNC_6 (struct keys*,struct pdu*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int,char*,...) ;
 struct pdu* FUNC_9 (struct pdu*) ;
 int FUNC_10 (struct pdu*,int,int) ;
 int FUNC_11 (struct pdu*,int ) ;
 int FUNC_12 (struct pdu*) ;
 int FUNC_13 (struct pdu*) ;
 int FUNC_14 (struct rchap*) ;
 char* FUNC_15 (struct rchap*) ;
 struct rchap* FUNC_16 (int ) ;
 int FUNC_17 (struct rchap*,char const*,char const*) ;

__attribute__((used)) static void
FUNC_18(struct pdu *VAR_2,
    const struct auth *VAR_3)
{
 struct pdu *VAR_4;
 struct keys *VAR_5, *VAR_6;
 struct rchap *VAR_7;
 const char *VAR_8, *VAR_9;
 char *VAR_10;
 int VAR_11;

 VAR_4 = FUNC_9(VAR_2);
 FUNC_11(VAR_4, VAR_1);




 VAR_5 = FUNC_5();
 FUNC_4(VAR_5, VAR_2);
 VAR_8 = FUNC_3(VAR_5, "CHAP_I");
 VAR_9 = FUNC_3(VAR_5, "CHAP_C");
 if (VAR_8 != ((void*)0) || VAR_9 != ((void*)0)) {
  if (VAR_8 == ((void*)0)) {
   FUNC_10(VAR_2, 0x02, 0x07);
   FUNC_8(1, "initiator requested target "
       "authentication, but didn't send CHAP_I");
  }
  if (VAR_9 == ((void*)0)) {
   FUNC_10(VAR_2, 0x02, 0x07);
   FUNC_8(1, "initiator requested target "
       "authentication, but didn't send CHAP_C");
  }
  if (VAR_3->a_auth_group->ag_type != VAR_0) {
   FUNC_10(VAR_2, 0x02, 0x01);
   FUNC_8(1, "initiator requests target authentication "
       "for user \"%s\", but mutual user/secret "
       "is not set", VAR_3->a_user);
  }

  FUNC_7("performing mutual authentication as user \"%s\"",
      VAR_3->a_mutual_user);

  VAR_7 = FUNC_16(VAR_3->a_mutual_secret);
  VAR_11 = FUNC_17(VAR_7, VAR_8, VAR_9);
  if (VAR_11 != 0) {
   FUNC_10(VAR_2, 0x02, 0x07);
   FUNC_8(1, "received CHAP Login PDU with malformed "
       "CHAP_I or CHAP_C");
  }
  VAR_10 = FUNC_15(VAR_7);
  FUNC_14(VAR_7);
  VAR_6 = FUNC_5();
  FUNC_1(VAR_6, "CHAP_N", VAR_3->a_mutual_user);
  FUNC_1(VAR_6, "CHAP_R", VAR_10);
  FUNC_0(VAR_10);
  FUNC_6(VAR_6, VAR_4);
  FUNC_2(VAR_6);
 } else {
  FUNC_7("initiator did not request target authentication");
 }

 FUNC_2(VAR_5);
 FUNC_13(VAR_4);
 FUNC_12(VAR_4);
}
