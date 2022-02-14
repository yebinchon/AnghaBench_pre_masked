
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_size; } ;
struct TYPE_2__ {int o_request; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (char*,int,int ) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 char* VAR_4 ;
 int FUNC_4 (char*) ;
 int VAR_5 ;
 char** VAR_6 ;
 char* VAR_7 ;
 int FUNC_5 (char*,int ) ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int *) ;
 int VAR_11 ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char*,char) ;
 char* FUNC_13 (char*) ;
 scalar_t__ VAR_12 ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (int ,int ,int,char*,char*) ;

__attribute__((used)) static void
FUNC_16(int VAR_13, char *VAR_14[])
{
 int VAR_15;
 int VAR_16;
 char *VAR_17, *VAR_18;
 char VAR_19[VAR_0];
 struct stat VAR_20;

 if (VAR_13 < 2) {
  FUNC_10(VAR_19, "send ");
  FUNC_6("(file) ");
  FUNC_2(&VAR_19[FUNC_11(VAR_19)], sizeof VAR_19 - FUNC_11(VAR_19), VAR_11);
  FUNC_4(VAR_19);
  VAR_13 = VAR_5;
  VAR_14 = VAR_6;
 }
 if (VAR_13 < 2) {
  FUNC_7(VAR_14[0]);
  return;
 }
 VAR_18 = VAR_14[VAR_13 - 1];
 if (FUNC_12(VAR_14[VAR_13 - 1], ':')) {
  char *VAR_21;

  for (VAR_16 = 1; VAR_16 < VAR_13 - 1; VAR_16++)
   if (FUNC_9(VAR_14[VAR_16], ':')) {
    FUNC_7(VAR_14[0]);
    return;
   }
  VAR_21 = VAR_14[VAR_13 - 1];
  VAR_18 = FUNC_12(VAR_21, ':');
  *VAR_18++ = 0;
  if (VAR_21[0] == '[' && VAR_21[FUNC_11(VAR_21) - 1] == ']') {
   VAR_21[FUNC_11(VAR_21) - 1] = '\0';
   VAR_21++;
  }
  FUNC_8(VAR_21, ((void*)0));
 }
 if (!VAR_3) {
  FUNC_6("No target machine specified.\n");
  return;
 }
 if (VAR_13 < 4) {
  VAR_17 = VAR_13 == 2 ? FUNC_13(VAR_18) : VAR_14[1];
  VAR_15 = FUNC_5(VAR_17, VAR_2);
  if (VAR_15 < 0) {
   FUNC_14("%s", VAR_17);
   return;
  }

  if (FUNC_3(VAR_15, &VAR_20) < 0) {
   FUNC_14("%s", VAR_17);
   FUNC_1(VAR_15);
   return;
  }
  FUNC_0(&VAR_8[VAR_1].o_request, "%d", VAR_20.st_size);

  if (VAR_12)
   FUNC_6("putting %s to %s:%s [%s]\n",
       VAR_17, VAR_4, VAR_18, VAR_7);
  FUNC_15(VAR_9, VAR_10, VAR_15, VAR_18, VAR_7);
  FUNC_1(VAR_15);
  return;
 }


 VAR_17 = FUNC_9(VAR_18, '\0');
 *VAR_17++ = '/';
 for (VAR_16 = 1; VAR_16 < VAR_13 - 1; VAR_16++) {
  FUNC_10(VAR_17, FUNC_13(VAR_14[VAR_16]));
  VAR_15 = FUNC_5(VAR_14[VAR_16], VAR_2);
  if (VAR_15 < 0) {
   FUNC_14("%s", VAR_14[VAR_16]);
   continue;
  }

  if (FUNC_3(VAR_15, &VAR_20) < 0) {
   FUNC_14("%s", VAR_14[VAR_16]);
   continue;
  }
  FUNC_0(&VAR_8[VAR_1].o_request, "%d", VAR_20.st_size);

  if (VAR_12)
   FUNC_6("putting %s to %s:%s [%s]\n",
       VAR_14[VAR_16], VAR_4, VAR_18, VAR_7);
  FUNC_15(VAR_9, VAR_10, VAR_15, VAR_18, VAR_7);
 }
}
