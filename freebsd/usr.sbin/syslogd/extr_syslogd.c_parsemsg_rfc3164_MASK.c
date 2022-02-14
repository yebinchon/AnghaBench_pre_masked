
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_year; int tm_isdst; } ;
struct logtime {struct tm tm; scalar_t__ usec; } ;
typedef int line ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,char*) ;
 int FUNC_3 (scalar_t__*,struct tm*) ;
 int FUNC_4 (int,struct logtime const*,char const*,char const*,char const*,int *,int *,char*,int ) ;
 scalar_t__ FUNC_5 (struct tm*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char**,char const**,char const**) ;
 size_t FUNC_8 (char*) ;
 char* FUNC_9 (char*,int ,struct tm*) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(const char *VAR_6, int VAR_7, char *VAR_8)
{
 struct tm VAR_9;
 const struct logtime *VAR_10;
 struct logtime VAR_11;
 const char *VAR_12, *VAR_13;
 size_t VAR_14, VAR_15;
 char VAR_16[VAR_1 + 1];






 VAR_10 = ((void*)0);
 if (FUNC_9(VAR_8, VAR_2, &VAR_9) ==
     VAR_8 + VAR_3 && VAR_8[VAR_3] == ' ') {
  VAR_8 += VAR_3 + 1;
  if (!VAR_4) {
   struct tm VAR_17;
   time_t VAR_18;
   int VAR_19;
   VAR_18 = FUNC_10(((void*)0));
   FUNC_3(&VAR_18, &VAR_17);
   for (VAR_19 = VAR_17.tm_year + 1;; --VAR_19) {
    FUNC_1(VAR_19 >= VAR_17.tm_year - 1);
    VAR_11.tm = VAR_9;
    VAR_11.tm.tm_year = VAR_19;
    VAR_11.tm.tm_isdst = -1;
    VAR_11.usec = 0;
    if (FUNC_5(&VAR_11.tm) <
        VAR_18 + 7 * 24 * 60 * 60)
     break;
   }
   VAR_10 = &VAR_11;
  }




  VAR_15 = FUNC_8(VAR_8);
  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_0, VAR_15); VAR_14++) {
   if (VAR_8[VAR_14] == ' ') {
    if (VAR_5) {
     VAR_8[VAR_14] = '\0';
     VAR_6 = VAR_8;
    }
    VAR_8 += VAR_14 + 1;
    break;
   }



   if (VAR_8[VAR_14] == ':')
    break;
  }
  if (VAR_14 == FUNC_0(VAR_0, VAR_15)) {
   FUNC_2("Invalid HOSTNAME from %s: %s\n", VAR_6, VAR_8);
   return;
  }
 }


 FUNC_7(&VAR_8, &VAR_12, &VAR_13);
 FUNC_6(VAR_8, VAR_16, sizeof(VAR_16));
 FUNC_4(VAR_7, VAR_10, VAR_6, VAR_12, VAR_13, ((void*)0), ((void*)0), VAR_16, 0);
}
