
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct mfcctl2 {int* mfcc_flags; TYPE_1__ mfcc_rp; int * mfcc_ttls; int mfcc_parent; } ;
struct mfc {int* mfc_flags; TYPE_1__ mfc_rp; int * mfc_ttls; int mfc_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_0(struct mfc *VAR_5, struct mfcctl2 *VAR_6)
{
    int VAR_7;

    VAR_5->mfc_parent = VAR_6->mfcc_parent;
    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
 VAR_5->mfc_ttls[VAR_7] = VAR_6->mfcc_ttls[VAR_7];
 VAR_5->mfc_flags[VAR_7] = VAR_6->mfcc_flags[VAR_7] & VAR_3 &
     VAR_1;
    }

    if (VAR_3 & VAR_2)
 VAR_5->mfc_rp = VAR_6->mfcc_rp;
    else
 VAR_5->mfc_rp.s_addr = VAR_0;
}
