
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pMWAVE_DEVICE_DATA ;
struct TYPE_3__ {size_t nr_registered_attrs; int device_registered; scalar_t__ sLine; int rBDData; scalar_t__ bBDInitialized; scalar_t__ bResourcesClaimed; scalar_t__ bDSPEnabled; scalar_t__ bMwaveDevRegistered; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 size_t VAR_1 ;
 int FUNC_3 (int *) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(void)
{
 pMWAVE_DEVICE_DATA VAR_6 = &VAR_5;

 FUNC_0(VAR_0, "mwavedd::mwave_exit entry\n");
 if ( VAR_6->sLine >= 0 ) {
  FUNC_4(VAR_6->sLine);
 }
 if (VAR_6->bMwaveDevRegistered) {
  FUNC_3(&VAR_4);
 }
 if (VAR_6->bDSPEnabled) {
  FUNC_6(&VAR_6->rBDData);
 }
 if (VAR_6->bResourcesClaimed) {
  FUNC_7(&VAR_6->rBDData);
 }
 if (VAR_6->bBDInitialized) {
  FUNC_5(&VAR_6->rBDData);
 }

 FUNC_0(VAR_0, "mwavedd::mwave_exit exit\n");
}
