
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct of_device_id {int compatible; } ;
struct malidp_hw_device {int dummy; } ;
typedef int buf ;


 int FUNC_0 (char*,int ,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct malidp_hw_device*,scalar_t__) ;
 int FUNC_3 (char*,int,char*,int) ;
 int * FUNC_4 (int ,char const*,int) ;

__attribute__((used)) static bool FUNC_5(struct malidp_hw_device *VAR_3,
           const struct of_device_id *VAR_4)
{
 u32 VAR_5;
 const char *VAR_6 = "arm,mali-dp500";
 bool VAR_7;
 bool VAR_8;






 VAR_5 = FUNC_2(VAR_3, VAR_0 + VAR_2);

 VAR_7 = (FUNC_1(VAR_5) == 0x500);
 VAR_8 = FUNC_4(VAR_4->compatible, VAR_6,
         sizeof(VAR_4->compatible)) != ((void*)0);
 if (VAR_7 != VAR_8) {
  FUNC_0("Device-tree expects %s, but hardware %s DP500.\n",
     VAR_4->compatible, VAR_7 ? "is" : "is not");
  return 0;
 } else if (!VAR_8) {
  u16 VAR_9;
  char VAR_10[32];

  VAR_5 = FUNC_2(VAR_3,
      VAR_1 + VAR_2);
  VAR_9 = FUNC_1(VAR_5);
  FUNC_3(VAR_10, sizeof(VAR_10), "arm,mali-dp%X", VAR_9);
  if (!FUNC_4(VAR_4->compatible, VAR_10,
        sizeof(VAR_4->compatible))) {
   FUNC_0("Device-tree expects %s, but hardware is DP%03X.\n",
      VAR_4->compatible, VAR_9);
   return 0;
  }
 }
 return 1;
}
