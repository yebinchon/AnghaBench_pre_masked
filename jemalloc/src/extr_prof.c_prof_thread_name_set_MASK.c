
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_3__ {char* thread_name; } ;
typedef TYPE_1__ prof_tdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int *,int *,int,int) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char) ;
 TYPE_1__* FUNC_4 (int *,int) ;
 char* FUNC_5 (int ,char const*) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int
FUNC_9(tsd_t *VAR_2, const char *VAR_3) {
 FUNC_0(FUNC_7(VAR_2) == 0);

 prof_tdata_t *VAR_4;
 unsigned VAR_5;
 char *VAR_6;

 VAR_4 = FUNC_4(VAR_2, 1);
 if (VAR_4 == ((void*)0)) {
  return VAR_0;
 }


 if (VAR_3 == ((void*)0)) {
  return VAR_1;
 }
 for (VAR_5 = 0; VAR_3[VAR_5] != '\0'; VAR_5++) {
  char VAR_7 = VAR_3[VAR_5];
  if (!FUNC_3(VAR_7) && !FUNC_2(VAR_7)) {
   return VAR_1;
  }
 }

 VAR_6 = FUNC_5(FUNC_8(VAR_2), VAR_3);
 if (VAR_6 == ((void*)0)) {
  return VAR_0;
 }

 if (VAR_4->thread_name != ((void*)0)) {
  FUNC_1(FUNC_8(VAR_2), VAR_4->thread_name, ((void*)0), ((void*)0), 1,
      1);
  VAR_4->thread_name = ((void*)0);
 }
 if (FUNC_6(VAR_6) > 0) {
  VAR_4->thread_name = VAR_6;
 }
 return 0;
}
