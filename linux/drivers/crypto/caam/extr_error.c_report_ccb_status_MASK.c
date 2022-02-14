
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct device {int dummy; } ;
typedef int cha_err_code ;


 size_t FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 size_t VAR_3 ;
 int const VAR_4 ;
 size_t VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 char** VAR_10 ;
 int FUNC_1 (struct device*,char*,int const,char const*,char*,size_t,char const*,char*,char const*,char*) ;
 char** VAR_11 ;
 char** VAR_12 ;
 int FUNC_2 (char*,int,char*,size_t) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_13, const u32 VAR_14,
        const char *VAR_15)
{
 u8 VAR_16 = (VAR_14 & VAR_2) >>
      VAR_4;
 u8 VAR_17 = VAR_14 & VAR_6;
 u8 VAR_18 = (VAR_14 & VAR_7) >>
    VAR_8;
 char *VAR_19;
 const char *VAR_20 = "unidentified cha_id value 0x";
 char VAR_21[3] = { 0 };
 const char *VAR_22 = "unidentified err_id value 0x";
 char VAR_23[3] = { 0 };

 if (VAR_14 & VAR_9)
  VAR_19 = "jump tgt desc idx";
 else
  VAR_19 = "desc idx";

 if (VAR_16 < FUNC_0(VAR_10))
  VAR_20 = VAR_10[VAR_16];
 else
  FUNC_2(VAR_21, sizeof(VAR_21), "%02x", VAR_16);

 if ((VAR_16 << VAR_4) == VAR_3 &&
     VAR_17 < FUNC_0(VAR_12) &&
     FUNC_3(VAR_12[VAR_17])) {

  VAR_22 = VAR_12[VAR_17];
 } else {
  VAR_22 = VAR_11[VAR_17];
 }





 if (VAR_17 == VAR_5)
  return -VAR_0;

 FUNC_1(VAR_13, "%08x: %s: %s %d: %s%s: %s%s\n", VAR_14,
       VAR_15, VAR_19, VAR_18, VAR_20, VAR_21,
       VAR_22, VAR_23);

 return -VAR_1;
}
