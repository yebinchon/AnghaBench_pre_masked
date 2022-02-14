
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct signature_check {int primary_key_fingerprint; int fingerprint; int key; int signer; int gpg_status; int gpg_output; int payload; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct signature_check *VAR_0)
{
 FUNC_0(VAR_0->payload);
 FUNC_0(VAR_0->gpg_output);
 FUNC_0(VAR_0->gpg_status);
 FUNC_0(VAR_0->signer);
 FUNC_0(VAR_0->key);
 FUNC_0(VAR_0->fingerprint);
 FUNC_0(VAR_0->primary_key_fingerprint);
}
