
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ have_repository; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int * FUNC_2 (char const*,int ) ;
 char* FUNC_3 (char*,int ,int *,int*) ;
 scalar_t__ FUNC_4 (char const*,char*,char const**) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_5(void)
{
 static int VAR_4;
 int VAR_5;

 if (VAR_4)
  return;
 VAR_4 = 1;

 VAR_1 = ((void*)0);
 if (VAR_3->have_repository) {
  const char *VAR_6 = FUNC_3("HEAD", 0, ((void*)0), &VAR_5);
  if (VAR_6 && (VAR_5 & VAR_0) &&
      FUNC_4(VAR_6, "refs/heads/", &VAR_6)) {
   VAR_1 = FUNC_2(VAR_6, 0);
  }
 }
 FUNC_1(VAR_2, ((void*)0));
 FUNC_0();
}
