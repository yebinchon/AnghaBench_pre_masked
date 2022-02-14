
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rerere_dir {int * status; int hash; } ;
struct dirent {int d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rerere_dir*,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*,int*) ;
 int * FUNC_5 (int ) ;
 struct dirent* FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct rerere_dir *VAR_2)
{
 struct dirent *VAR_3;
 DIR *VAR_4 = FUNC_5(FUNC_2("rr-cache/%s", FUNC_3(VAR_2->hash)));

 if (!VAR_4)
  return;
 while ((VAR_3 = FUNC_6(VAR_4)) != ((void*)0)) {
  int VAR_5;

  if (FUNC_4(VAR_3->d_name, "postimage", &VAR_5)) {
   FUNC_1(VAR_2, VAR_5);
   VAR_2->status[VAR_5] |= VAR_0;
  } else if (FUNC_4(VAR_3->d_name, "preimage", &VAR_5)) {
   FUNC_1(VAR_2, VAR_5);
   VAR_2->status[VAR_5] |= VAR_1;
  }
 }
 FUNC_0(VAR_4);
}
