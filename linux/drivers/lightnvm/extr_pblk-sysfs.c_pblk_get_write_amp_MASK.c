
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int *) ;
 int FUNC_2 (char*,scalar_t__,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(u64 VAR_1, u64 VAR_2, u64 VAR_3,
      char *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_0,
   "user:%lld gc:%lld pad:%lld WA:",
   VAR_1, VAR_2, VAR_3);

 if (!VAR_1) {
  VAR_5 += FUNC_2(VAR_4 + VAR_5, VAR_0 - VAR_5, "NaN\n");
 } else {
  u64 VAR_6;
  u32 VAR_7;

  VAR_6 = (VAR_1 + VAR_2 + VAR_3) * 100000;
  VAR_6 = FUNC_0(VAR_6, VAR_1);
  VAR_6 = FUNC_1(VAR_6, 100000, &VAR_7);

  VAR_5 += FUNC_2(VAR_4 + VAR_5, VAR_0 - VAR_5, "%llu.%05u\n",
       VAR_6, VAR_7);
 }

 return VAR_5;
}
