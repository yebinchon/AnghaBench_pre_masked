
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x509_certificate {int seen; int verified; struct x509_certificate* signer; int index; struct public_key_signature* sig; int * skid; int * id; } ;
struct public_key_signature {int ** auth_ids; } ;
struct pkcs7_signed_info {struct x509_certificate* signer; struct public_key_signature* sig; int index; scalar_t__ unsupported_crypto; } ;
struct pkcs7_message {int dummy; } ;
struct key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct key* FUNC_0 (int) ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*) ;
 struct key* FUNC_3 (struct key*,int *,int *,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct key*) ;
 int FUNC_6 (struct key*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int ,int ,...) ;
 int FUNC_10 (struct key*,struct public_key_signature*) ;

__attribute__((used)) static int FUNC_11(struct pkcs7_message *VAR_4,
        struct pkcs7_signed_info *VAR_5,
        struct key *VAR_6)
{
 struct public_key_signature *VAR_7 = VAR_5->sig;
 struct x509_certificate *VAR_8, *VAR_9 = ((void*)0), *VAR_10;
 struct key *VAR_11;
 int VAR_12;

 FUNC_4(",%u,", VAR_5->index);

 if (VAR_5->unsupported_crypto) {
  FUNC_7(" = -ENOPKG [cached]");
  return -VAR_3;
 }

 for (VAR_8 = VAR_5->signer; VAR_8; VAR_8 = VAR_8->signer) {
  if (VAR_8->seen) {
   if (VAR_8->verified)
    goto verified;
   FUNC_7(" = -ENOKEY [cached]");
   return -VAR_1;
  }
  VAR_8->seen = 1;




  VAR_11 = FUNC_3(VAR_6,
       VAR_8->id, VAR_8->skid, 0);
  if (!FUNC_1(VAR_11)) {





   FUNC_9("sinfo %u: Cert %u as key %x\n",
     VAR_5->index, VAR_8->index, FUNC_6(VAR_11));
   goto matched;
  }
  if (VAR_11 == FUNC_0(-VAR_2))
   return -VAR_2;




  if (VAR_8->signer == VAR_8) {
   FUNC_7(" = -ENOKEY [unknown self-signed]");
   return -VAR_1;
  }

  FUNC_8();
  VAR_9 = VAR_8;
  VAR_7 = VAR_9->sig;
 }




 if (VAR_9 && (VAR_9->sig->auth_ids[0] || VAR_9->sig->auth_ids[1])) {
  VAR_11 = FUNC_3(VAR_6,
       VAR_9->sig->auth_ids[0],
       VAR_9->sig->auth_ids[1],
       0);
  if (!FUNC_1(VAR_11)) {
   VAR_8 = VAR_9;
   FUNC_9("sinfo %u: Root cert %u signer is key %x\n",
     VAR_5->index, VAR_8->index, FUNC_6(VAR_11));
   goto matched;
  }
  if (FUNC_2(VAR_11) != -VAR_1)
   return FUNC_2(VAR_11);
 }




 VAR_11 = FUNC_3(VAR_6,
      VAR_5->sig->auth_ids[0], ((void*)0), 0);
 if (!FUNC_1(VAR_11)) {
  FUNC_9("sinfo %u: Direct signer is key %x\n",
    VAR_5->index, FUNC_6(VAR_11));
  VAR_8 = ((void*)0);
  VAR_7 = VAR_5->sig;
  goto matched;
 }
 if (FUNC_2(VAR_11) != -VAR_1)
  return FUNC_2(VAR_11);

 FUNC_7(" = -ENOKEY [no backref]");
 return -VAR_1;

matched:
 VAR_12 = FUNC_10(VAR_11, VAR_7);
 FUNC_5(VAR_11);
 if (VAR_12 < 0) {
  if (VAR_12 == -VAR_2)
   return VAR_12;
  FUNC_7(" = -EKEYREJECTED [verify %d]", VAR_12);
  return -VAR_0;
 }

verified:
 if (VAR_8) {
  VAR_8->verified = 1;
  for (VAR_10 = VAR_5->signer; VAR_10 != VAR_8; VAR_10 = VAR_10->signer)
   VAR_10->verified = 1;
 }
 FUNC_7(" = 0");
 return 0;
}
