
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info_user {int type; int erasesize; int size; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char const*) ;
 scalar_t__ FUNC_2 (int,int ,struct mtd_info_user*) ;
 int FUNC_3 (char const*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_4(const char *VAR_5)
{
 struct mtd_info_user VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_5, 0);
 if(VAR_7 < 0) {
  FUNC_1(VAR_4, "Could not open mtd device: %s\n", VAR_5);
  return -1;
 }

 if(FUNC_2(VAR_7, VAR_0, &VAR_6)) {
  FUNC_1(VAR_4, "Could not get MTD device info from %s\n", VAR_5);
  FUNC_0(VAR_7);
  return -1;
 }
 VAR_2 = VAR_6.size;
 VAR_1 = VAR_6.erasesize;
 VAR_3 = VAR_6.type;

 return VAR_7;
}
