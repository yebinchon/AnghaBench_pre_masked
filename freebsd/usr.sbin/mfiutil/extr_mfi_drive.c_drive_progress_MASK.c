
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int active; int clear; int patrol; int rbld; } ;
struct mfi_pd_info {TYPE_1__ prog_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (char*,int *) ;
 char* FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int,char*,int *) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int,int ,struct mfi_pd_info*,int *) ;
 int VAR_8 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static int
FUNC_9(int VAR_9, char **VAR_10)
{
 struct mfi_pd_info VAR_11;
 uint16_t VAR_12;
 int VAR_13, VAR_14;

 if (VAR_9 != 2) {
  FUNC_8("drive progress: %s", VAR_9 > 2 ? "extra arguments" :
      "drive required");
  return (VAR_0);
 }

 VAR_14 = FUNC_4(VAR_8, VAR_6);
 if (VAR_14 < 0) {
  VAR_13 = VAR_7;
  FUNC_7("mfi_open");
  return (VAR_13);
 }

 VAR_13 = FUNC_3(VAR_14, VAR_10[1], &VAR_12);
 if (VAR_13) {
  FUNC_0(VAR_14);
  return (VAR_13);
 }


 if (FUNC_5(VAR_14, VAR_12, &VAR_11, ((void*)0)) < 0) {
  VAR_13 = VAR_7;
  FUNC_7("Failed to fetch info for drive %u", VAR_12);
  FUNC_0(VAR_14);
  return (VAR_13);
 }
 FUNC_0(VAR_14);


 if (VAR_11.prog_info.active & VAR_5)
  FUNC_1("Rebuild", &VAR_11.prog_info.rbld);
 if (VAR_11.prog_info.active & VAR_4)
  FUNC_1("Patrol Read", &VAR_11.prog_info.patrol);
 if (VAR_11.prog_info.active & VAR_3)
  FUNC_1("Clear", &VAR_11.prog_info.clear);
 if ((VAR_11.prog_info.active & (VAR_5 |
     VAR_4 | VAR_3)) == 0)
  FUNC_6("No activity in progress for drive %s.\n",
  FUNC_2(((void*)0), VAR_12,
      VAR_1|VAR_2));

 return (0);
}
