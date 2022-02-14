
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfcctl2 {int mfcc_mcastgrp; int mfcc_origin; } ;
struct mfc {int mfc_last_assert; scalar_t__ mfc_wrong_if; scalar_t__ mfc_byte_cnt; scalar_t__ mfc_pkt_cnt; int mfc_mcastgrp; int mfc_origin; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mfc*,struct mfcctl2*) ;

__attribute__((used)) static void
FUNC_2(struct mfc *VAR_0, struct mfcctl2 *VAR_1)
{
    VAR_0->mfc_origin = VAR_1->mfcc_origin;
    VAR_0->mfc_mcastgrp = VAR_1->mfcc_mcastgrp;

    FUNC_1(VAR_0, VAR_1);


    VAR_0->mfc_pkt_cnt = 0;
    VAR_0->mfc_byte_cnt = 0;
    VAR_0->mfc_wrong_if = 0;
    FUNC_0(&VAR_0->mfc_last_assert);
}
