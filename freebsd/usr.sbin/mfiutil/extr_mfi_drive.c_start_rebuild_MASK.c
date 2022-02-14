
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef char* uint16_t ;
struct mfi_pd_info {scalar_t__ fw_state; int ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int,int ,int *,int ,int *,int,int *) ;
 int FUNC_3 (int,char*,char**) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int,char*,struct mfi_pd_info*,int *) ;
 int VAR_5 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static int
FUNC_8(int VAR_6, char **VAR_7)
{
 struct mfi_pd_info VAR_8;
 uint16_t VAR_9;
 uint8_t VAR_10[4];
 int VAR_11, VAR_12;

 if (VAR_6 != 2) {
  FUNC_7("start rebuild: %s", VAR_6 > 2 ? "extra arguments" :
      "drive required");
  return (VAR_0);
 }

 VAR_12 = FUNC_4(VAR_5, VAR_3);
 if (VAR_12 < 0) {
  VAR_11 = VAR_4;
  FUNC_6("mfi_open");
  return (VAR_11);
 }

 VAR_11 = FUNC_3(VAR_12, VAR_7[1], &VAR_9);
 if (VAR_11) {
  FUNC_0(VAR_12);
  return (VAR_11);
 }


 if (FUNC_5(VAR_12, VAR_9, &VAR_8, ((void*)0)) < 0) {
  VAR_11 = VAR_4;
  FUNC_6("Failed to fetch info for drive %u", VAR_9);
  FUNC_0(VAR_12);
  return (VAR_11);
 }


 if (VAR_8.fw_state != VAR_2) {
  FUNC_7("Drive %d is not in the REBUILD state", VAR_9);
  FUNC_0(VAR_12);
  return (VAR_0);
 }


 FUNC_1(&VAR_10[0], &VAR_8.ref);
 if (FUNC_2(VAR_12, VAR_1, ((void*)0), 0, VAR_10, 4,
     ((void*)0)) < 0) {
  VAR_11 = VAR_4;
  FUNC_6("Failed to start rebuild on drive %u", VAR_9);
  FUNC_0(VAR_12);
  return (VAR_11);
 }
 FUNC_0(VAR_12);

 return (0);
}
