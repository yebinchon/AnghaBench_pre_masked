
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u64 ;
typedef int u16 ;


 size_t FUNC_0 (char**) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char** VAR_11 ;
 int FUNC_2 (char*,char const*,int ,int ) ;
 int FUNC_3 (char*,char const*,size_t,char*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_12, u16 VAR_13, u64 VAR_14)
{
 if (VAR_13 & VAR_5) {
  u8 VAR_15 = FUNC_1(VAR_14);

  FUNC_3("%sError Type: %u, %s\n", VAR_12, VAR_15,
         VAR_15 < FUNC_0(VAR_11) ?
         VAR_11[VAR_15] : "unknown");
 }

 if (VAR_13 & VAR_7)
  FUNC_2("Processor Context Corrupt", VAR_12, VAR_14, VAR_1);

 if (VAR_13 & VAR_10)
  FUNC_2("Uncorrected", VAR_12, VAR_14, VAR_4);

 if (VAR_13 & VAR_8)
  FUNC_2("Precise IP", VAR_12, VAR_14, VAR_2);

 if (VAR_13 & VAR_9)
  FUNC_2("Restartable IP", VAR_12, VAR_14, VAR_3);

 if (VAR_13 & VAR_6)
  FUNC_2("Overflow", VAR_12, VAR_14, VAR_0);
}
