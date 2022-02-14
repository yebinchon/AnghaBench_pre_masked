
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int active; int recon; int fgi; int bgi; int cc; } ;
struct mfi_ld_info {TYPE_1__ progress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (char*,int *) ;
 scalar_t__ FUNC_2 (int,int ,struct mfi_ld_info*,int *) ;
 scalar_t__ FUNC_3 (int,char*,int *) ;
 int FUNC_4 (int ,int ) ;
 int VAR_7 ;
 char* FUNC_5 (int,int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static int
FUNC_9(int VAR_8, char **VAR_9)
{
 struct mfi_ld_info VAR_10;
 int VAR_11, VAR_12;
 uint8_t VAR_13;

 if (VAR_8 != 2) {
  FUNC_8("volume progress: %s", VAR_8 > 2 ? "extra arguments" :
      "volume required");
  return (VAR_0);
 }

 VAR_12 = FUNC_4(VAR_7, VAR_5);
 if (VAR_12 < 0) {
  VAR_11 = VAR_6;
  FUNC_7("mfi_open");
  return (VAR_11);
 }

 if (FUNC_3(VAR_12, VAR_9[1], &VAR_13) < 0) {
  VAR_11 = VAR_6;
  FUNC_7("Invalid volume: %s", VAR_9[1]);
  FUNC_0(VAR_12);
  return (VAR_11);
 }


 if (FUNC_2(VAR_12, VAR_13, &VAR_10, ((void*)0)) < 0) {
  VAR_11 = VAR_6;
  FUNC_7("Failed to fetch info for volume %s",
      FUNC_5(VAR_12, VAR_13));
  FUNC_0(VAR_12);
  return (VAR_11);
 }


 if (VAR_10.progress.active & VAR_2)
  FUNC_1("Consistency Check", &VAR_10.progress.cc);
 if (VAR_10.progress.active & VAR_1)
  FUNC_1("Background Init", &VAR_10.progress.bgi);
 if (VAR_10.progress.active & VAR_3)
  FUNC_1("Foreground Init", &VAR_10.progress.fgi);
 if (VAR_10.progress.active & VAR_4)
  FUNC_1("Reconstruction", &VAR_10.progress.recon);
 if ((VAR_10.progress.active & (VAR_2 | VAR_1 |
     VAR_3 | VAR_4)) == 0)
  FUNC_6("No activity in progress for volume %s.\n",
      FUNC_5(VAR_12, VAR_13));
 FUNC_0(VAR_12);

 return (0);
}
