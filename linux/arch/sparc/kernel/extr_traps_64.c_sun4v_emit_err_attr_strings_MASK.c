
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;


 int FUNC_0 (char const**) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(u32 VAR_5)
{
 static const char *VAR_6[] = {
  "processor",
  "memory",
  "PIO",
  "int-registers",
  "fpu-registers",
  "shutdown-request",
  "ASR",
  "ASI",
  "priv-reg",
 };
 static const char *VAR_7[] = {
  "sp-faulted",
  "sp-available",
  "sp-not-present",
  "sp-state-reserved",
 };
 static const char *VAR_8[] = {
  "mode-reserved0",
  "user",
  "priv",
  "mode-reserved1",
 };
 u32 VAR_9, VAR_10;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_6); VAR_11++) {
  if (VAR_5 & (1U << VAR_11)) {
   const char *VAR_12 = VAR_6[VAR_11];

   FUNC_1("%s ", VAR_12);
  }
 }

 VAR_9 = ((VAR_5 & VAR_3) >>
      VAR_4);
 FUNC_1("%s ", VAR_7[VAR_9]);

 VAR_10 = ((VAR_5 & VAR_0) >>
  VAR_1);
 FUNC_1("%s ", VAR_8[VAR_10]);

 if (VAR_5 & VAR_2)
  FUNC_1("res-queue-full ");
}
