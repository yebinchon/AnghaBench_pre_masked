
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {int dummy; } ;
struct keys {int dummy; } ;
struct connection {int dummy; } ;
struct chap {int dummy; } ;
struct auth_group {scalar_t__ ag_type; } ;
struct auth {char const* a_user; int * a_secret; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 struct auth* FUNC_1 (struct auth_group*,char const*) ;
 int FUNC_2 (struct chap*,int *) ;
 int FUNC_3 (struct chap*,char const*) ;
 int FUNC_4 (struct keys*) ;
 char* FUNC_5 (struct keys*,char*) ;
 int FUNC_6 (struct keys*,struct pdu*) ;
 struct keys* FUNC_7 () ;
 int FUNC_8 (int,char*,...) ;
 struct pdu* FUNC_9 (struct connection*,int) ;
 int FUNC_10 (struct pdu*,int,int) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static struct pdu *
FUNC_12(struct connection *VAR_2, struct auth_group *VAR_3,
    struct chap *VAR_4, const struct auth **VAR_5)
{
 struct pdu *VAR_6;
 struct keys *VAR_7;
 const char *VAR_8, *VAR_9;
 const struct auth *VAR_10;
 int VAR_11;

 VAR_6 = FUNC_9(VAR_2, 0);
 VAR_7 = FUNC_7();
 FUNC_6(VAR_7, VAR_6);

 VAR_8 = FUNC_5(VAR_7, "CHAP_N");
 if (VAR_8 == ((void*)0)) {
  FUNC_10(VAR_6, 0x02, 0x07);
  FUNC_8(1, "received CHAP Login PDU without CHAP_N");
 }
 VAR_9 = FUNC_5(VAR_7, "CHAP_R");
 if (VAR_9 == ((void*)0)) {
  FUNC_10(VAR_6, 0x02, 0x07);
  FUNC_8(1, "received CHAP Login PDU without CHAP_R");
 }
 VAR_11 = FUNC_3(VAR_4, VAR_9);
 if (VAR_11 != 0) {
  FUNC_10(VAR_6, 0x02, 0x07);
  FUNC_8(1, "received CHAP Login PDU with malformed CHAP_R");
 }




 FUNC_0(VAR_3->ag_type == VAR_0 ||
     VAR_3->ag_type == VAR_1);
 VAR_10 = FUNC_1(VAR_3, VAR_8);
 if (VAR_10 == ((void*)0)) {
  FUNC_10(VAR_6, 0x02, 0x01);
  FUNC_8(1, "received CHAP Login with invalid user \"%s\"",
      VAR_8);
 }

 FUNC_0(VAR_10->a_secret != ((void*)0));
 FUNC_0(FUNC_11(VAR_10->a_secret) > 0);

 VAR_11 = FUNC_2(VAR_4, VAR_10->a_secret);
 if (VAR_11 != 0) {
  FUNC_10(VAR_6, 0x02, 0x01);
  FUNC_8(1, "CHAP authentication failed for user \"%s\"",
      VAR_10->a_user);
 }

 FUNC_4(VAR_7);

 *VAR_5 = VAR_10;
 return (VAR_6);
}
