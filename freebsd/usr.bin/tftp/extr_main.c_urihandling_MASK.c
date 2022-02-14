
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* m_mode; int * m_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,char*) ;
 int VAR_6 ;
 char* FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (int *,char const*) ;
 int FUNC_9 (char*,char*,int) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_11(char *VAR_7)
{
 char VAR_8[VAR_0];
 char *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);
 char *VAR_11 = ((void*)0);
 const char *VAR_12 = "octet";
 char *VAR_13;
 char VAR_14[VAR_1];
 int VAR_15;

 FUNC_9(VAR_8, VAR_7, VAR_0);
 VAR_9 = VAR_8 + 7;

 if ((VAR_13 = FUNC_7(VAR_9, '/')) == ((void*)0)) {
  FUNC_1(VAR_6,
      "Invalid URI: Couldn't find / after hostname\n");
  FUNC_0(1);
 }
 *VAR_13 = '\0';
 VAR_10 = VAR_13 + 1;

 if ((VAR_13 = FUNC_7(VAR_10, ';')) != ((void*)0)) {
  *VAR_13 = '\0';
  VAR_11 = VAR_13 + 1;

  if (FUNC_10(VAR_11, "mode=", 5) == 0) {
   VAR_12 = VAR_11;
   VAR_12 += 5;

   for (VAR_15 = 0; VAR_5[VAR_15].m_name != ((void*)0); VAR_15++) {
    if (FUNC_8(VAR_5[VAR_15].m_name, VAR_12) == 0)
     break;
   }
   if (VAR_5[VAR_15].m_name == ((void*)0)) {
    FUNC_1(VAR_6, "Invalid mode: '%s'\n", VAR_4);
    FUNC_0(1);
   }
   FUNC_5(VAR_5[VAR_15].m_mode);
  }
 } else {
  FUNC_5("octet");
 }

 FUNC_4(VAR_9, ((void*)0));

 FUNC_6(VAR_14, "get %s", VAR_10);
 FUNC_3(VAR_14);
 FUNC_2(VAR_2, VAR_3);
}
