
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct mfi_pd_info {scalar_t__ fw_state; int ref; } ;
typedef int mbox ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int,int ,int *,int ,int *,int,int *) ;
 int FUNC_3 (int,char*,int *) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int,int ,struct mfi_pd_info*,int *) ;
 int VAR_5 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int
FUNC_8(int VAR_6, char **VAR_7)
{
 struct mfi_pd_info VAR_8;
 int VAR_9, VAR_10;
 uint16_t VAR_11;
 uint8_t VAR_12[4];

 if (VAR_6 != 2) {
  FUNC_7("remove spare: drive required");
  return (VAR_0);
 }

 VAR_10 = FUNC_4(VAR_5, VAR_3);
 if (VAR_10 < 0) {
  VAR_9 = VAR_4;
  FUNC_6("mfi_open");
  return (VAR_9);
 }

 VAR_9 = FUNC_3(VAR_10, VAR_7[1], &VAR_11);
 if (VAR_9) {
  FUNC_0(VAR_10);
  return (VAR_9);
 }


 if (FUNC_5(VAR_10, VAR_11, &VAR_8, ((void*)0)) < 0) {
  VAR_9 = VAR_4;
  FUNC_6("Failed to fetch info for drive %u", VAR_11);
  FUNC_0(VAR_10);
  return (VAR_9);
 }

 if (VAR_8.fw_state != VAR_2) {
  FUNC_7("Drive %u is not a hot spare", VAR_11);
  FUNC_0(VAR_10);
  return (VAR_0);
 }

 FUNC_1(VAR_12, &VAR_8.ref);
 if (FUNC_2(VAR_10, VAR_1, ((void*)0), 0, VAR_12,
     sizeof(VAR_12), ((void*)0)) < 0) {
  VAR_9 = VAR_4;
  FUNC_6("Failed to delete spare");
  FUNC_0(VAR_10);
  return (VAR_9);
 }

 FUNC_0(VAR_10);

 return (0);
}
