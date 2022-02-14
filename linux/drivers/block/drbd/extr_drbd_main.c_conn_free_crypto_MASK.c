
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_connection {int * int_dig_vv; int * int_dig_in; int * peer_integrity_tfm; int * integrity_tfm; int * cram_hmac_tfm; int * verify_tfm; int * csums_tfm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drbd_connection*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drbd_connection *VAR_0)
{
 FUNC_1(VAR_0);

 FUNC_0(VAR_0->csums_tfm);
 FUNC_0(VAR_0->verify_tfm);
 FUNC_0(VAR_0->cram_hmac_tfm);
 FUNC_0(VAR_0->integrity_tfm);
 FUNC_0(VAR_0->peer_integrity_tfm);
 FUNC_2(VAR_0->int_dig_in);
 FUNC_2(VAR_0->int_dig_vv);

 VAR_0->csums_tfm = ((void*)0);
 VAR_0->verify_tfm = ((void*)0);
 VAR_0->cram_hmac_tfm = ((void*)0);
 VAR_0->integrity_tfm = ((void*)0);
 VAR_0->peer_integrity_tfm = ((void*)0);
 VAR_0->int_dig_in = ((void*)0);
 VAR_0->int_dig_vv = ((void*)0);
}
