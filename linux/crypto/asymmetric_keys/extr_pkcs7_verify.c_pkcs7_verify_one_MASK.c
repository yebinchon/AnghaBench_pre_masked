
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pkcs7_signed_info {scalar_t__ signing_time; int index; int sig; TYPE_1__* signer; int aa_set; } ;
struct pkcs7_message {int dummy; } ;
struct TYPE_2__ {scalar_t__ valid_from; scalar_t__ valid_to; int pub; int index; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct pkcs7_message*,struct pkcs7_signed_info*) ;
 int FUNC_2 (struct pkcs7_message*,struct pkcs7_signed_info*) ;
 int FUNC_3 (struct pkcs7_message*,struct pkcs7_signed_info*) ;
 int FUNC_4 (char*,int ,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct pkcs7_message *VAR_2,
       struct pkcs7_signed_info *VAR_3)
{
 int VAR_4;

 FUNC_0(",%u", VAR_3->index);




 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 if (!VAR_3->signer)
  return 0;

 FUNC_4("Using X.509[%u] for sig %u\n",
   VAR_3->signer->index, VAR_3->index);





 if (FUNC_7(VAR_1, &VAR_3->aa_set)) {
  if (VAR_3->signing_time < VAR_3->signer->valid_from ||
      VAR_3->signing_time > VAR_3->signer->valid_to) {
   FUNC_5("Message signed outside of X.509 validity window\n");
   return -VAR_0;
  }
 }


 VAR_4 = FUNC_6(VAR_3->signer->pub, VAR_3->sig);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_4("Verified signature %u\n", VAR_3->index);


 return FUNC_3(VAR_2, VAR_3);
}
