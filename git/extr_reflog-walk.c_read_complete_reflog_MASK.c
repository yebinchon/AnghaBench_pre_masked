
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct complete_reflogs {scalar_t__ nr; int ref; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,struct complete_reflogs*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 void* FUNC_2 (char const*,int ,int *,int *) ;
 struct complete_reflogs* FUNC_3 (int,int) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char const*) ;

__attribute__((used)) static struct complete_reflogs *FUNC_6(const char *VAR_2)
{
 struct complete_reflogs *VAR_3 =
  FUNC_3(1, sizeof(struct complete_reflogs));
 VAR_3->ref = FUNC_4(VAR_2);
 FUNC_0(VAR_2, VAR_1, VAR_3);
 if (VAR_3->nr == 0) {
  const char *VAR_4;
  void *VAR_5;
  VAR_4 = VAR_5 = FUNC_2(VAR_2, VAR_0,
           ((void*)0), ((void*)0));
  if (VAR_4) {
   FUNC_0(VAR_4, VAR_1, VAR_3);
   FUNC_1(VAR_5);
  }
 }
 if (VAR_3->nr == 0) {
  char *VAR_6 = FUNC_5("refs/%s", VAR_2);
  FUNC_0(VAR_6, VAR_1, VAR_3);
  if (VAR_3->nr == 0) {
   FUNC_1(VAR_6);
   VAR_6 = FUNC_5("refs/heads/%s", VAR_2);
   FUNC_0(VAR_6, VAR_1, VAR_3);
  }
  FUNC_1(VAR_6);
 }
 return VAR_3;
}
