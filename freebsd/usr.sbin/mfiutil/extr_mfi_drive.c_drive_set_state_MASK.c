
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct mfi_pd_info {int fw_state; int ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int*,int *) ;
 scalar_t__ FUNC_2 (int,int ,int *,int ,int*,int,int *) ;
 int FUNC_3 (int,char*,int*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int,int,struct mfi_pd_info*,int *) ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static int
FUNC_9(char *VAR_5, uint16_t VAR_6)
{
 struct mfi_pd_info VAR_7;
 uint16_t VAR_8;
 uint8_t VAR_9[6];
 int VAR_10, VAR_11;

 VAR_11 = FUNC_4(VAR_4, VAR_2);
 if (VAR_11 < 0) {
  VAR_10 = VAR_3;
  FUNC_7("mfi_open");
  return (VAR_10);
 }

 VAR_10 = FUNC_3(VAR_11, VAR_5, &VAR_8);
 if (VAR_10) {
  FUNC_0(VAR_11);
  return (VAR_10);
 }


 if (FUNC_5(VAR_11, VAR_8, &VAR_7, ((void*)0)) < 0) {
  VAR_10 = VAR_3;
  FUNC_7("Failed to fetch info for drive %u", VAR_8);
  FUNC_0(VAR_11);
  return (VAR_10);
 }


 if (VAR_7.fw_state == VAR_6) {
  FUNC_8("Drive %u is already in the desired state", VAR_8);
  FUNC_0(VAR_11);
  return (VAR_0);
 }

 FUNC_1(&VAR_9[0], &VAR_7.ref);
 VAR_9[4] = VAR_6 & 0xff;
 VAR_9[5] = VAR_6 >> 8;
 if (FUNC_2(VAR_11, VAR_1, ((void*)0), 0, VAR_9, 6,
     ((void*)0)) < 0) {
  VAR_10 = VAR_3;
  FUNC_7("Failed to set drive %u to %s", VAR_8,
      FUNC_6(VAR_6));
  FUNC_0(VAR_11);
  return (VAR_10);
 }

 FUNC_0(VAR_11);

 return (0);
}
