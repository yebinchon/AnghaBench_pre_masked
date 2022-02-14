
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_device {scalar_t__ family; TYPE_1__* me_fw; int dev; } ;
struct TYPE_3__ {int size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_27 ;
 char* VAR_28 ;
 char* VAR_29 ;
 char* VAR_30 ;
 char* VAR_31 ;
 char* VAR_32 ;
 char* VAR_33 ;
 char* VAR_34 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__**,char const*,int ) ;

__attribute__((used)) static int FUNC_5(struct radeon_device *VAR_35)
{
 const char *VAR_36 = ((void*)0);
 int VAR_37;

 FUNC_0("\n");

 if ((VAR_35->family == VAR_0) || (VAR_35->family == VAR_16) ||
     (VAR_35->family == VAR_17) || (VAR_35->family == VAR_8) ||
     (VAR_35->family == VAR_9)) {
  FUNC_1("Loading R100 Microcode\n");
  VAR_36 = VAR_28;
 } else if ((VAR_35->family == VAR_1) ||
     (VAR_35->family == VAR_18) ||
     (VAR_35->family == VAR_19) ||
     (VAR_35->family == VAR_10)) {
  FUNC_1("Loading R200 Microcode\n");
  VAR_36 = VAR_29;
 } else if ((VAR_35->family == VAR_2) ||
     (VAR_35->family == VAR_3) ||
     (VAR_35->family == VAR_20) ||
     (VAR_35->family == VAR_21) ||
     (VAR_35->family == VAR_11) ||
     (VAR_35->family == VAR_12)) {
  FUNC_1("Loading R300 Microcode\n");
  VAR_36 = VAR_30;
 } else if ((VAR_35->family == VAR_4) ||
     (VAR_35->family == VAR_5) ||
     (VAR_35->family == VAR_22)) {
  FUNC_1("Loading R400 Microcode\n");
  VAR_36 = VAR_31;
 } else if ((VAR_35->family == VAR_14) ||
     (VAR_35->family == VAR_15)) {
  FUNC_1("Loading RS690/RS740 Microcode\n");
  VAR_36 = VAR_34;
 } else if (VAR_35->family == VAR_13) {
  FUNC_1("Loading RS600 Microcode\n");
  VAR_36 = VAR_33;
 } else if ((VAR_35->family == VAR_23) ||
     (VAR_35->family == VAR_6) ||
     (VAR_35->family == VAR_24) ||
     (VAR_35->family == VAR_7) ||
     (VAR_35->family == VAR_25) ||
     (VAR_35->family == VAR_26)) {
  FUNC_1("Loading R500 Microcode\n");
  VAR_36 = VAR_32;
 }

 VAR_37 = FUNC_4(&VAR_35->me_fw, VAR_36, VAR_35->dev);
 if (VAR_37) {
  FUNC_2("radeon_cp: Failed to load firmware \"%s\"\n", VAR_36);
 } else if (VAR_35->me_fw->size % 8) {
  FUNC_2("radeon_cp: Bogus length %zu in firmware \"%s\"\n",
         VAR_35->me_fw->size, VAR_36);
  VAR_37 = -VAR_27;
  FUNC_3(VAR_35->me_fw);
  VAR_35->me_fw = ((void*)0);
 }
 return VAR_37;
}
