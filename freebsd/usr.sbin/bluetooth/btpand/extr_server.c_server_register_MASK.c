
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int security_description; int load_factor; int psm; } ;
typedef TYPE_1__ sdp_nap_profile_t ;
typedef int p ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *,scalar_t__,int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int *,int *,int,scalar_t__*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_7(void)
{
 sdp_nap_profile_t VAR_11;
 int VAR_12;

 if (VAR_8 == ((void*)0)) {
  VAR_8 = FUNC_5(VAR_1);
  if (VAR_8 == ((void*)0) || FUNC_4(VAR_8) != 0) {
   FUNC_1("failed to contact SDP server");
   return;
  }
 }

 FUNC_2(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.psm = VAR_4;
 VAR_11.load_factor = VAR_6;
 VAR_11.security_description = (VAR_3 == 0 ? 0x0000 : 0x0001);

 if (VAR_7)
  VAR_12 = FUNC_3(VAR_8, VAR_7,
      (uint8_t *)&VAR_11, sizeof(VAR_11));
 else
  VAR_12 = FUNC_6(VAR_8, VAR_9,
      &VAR_5, (uint8_t *)&VAR_11, sizeof(VAR_11), &VAR_7);

 if (VAR_12 != 0) {
  VAR_2 = FUNC_4(VAR_8);
  FUNC_1("%s: %m", VAR_10);
  FUNC_0(VAR_0);
 }
}
