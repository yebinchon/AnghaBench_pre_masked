
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_lock {int lk; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct ref_lock *VAR_1, const char *VAR_2)
{
 int VAR_3 = -1;

 char *VAR_4 = FUNC_2(&VAR_1->lk);
 FUNC_4(VAR_4);
 VAR_3 = FUNC_3(VAR_2, VAR_4);
 FUNC_1(VAR_4);

 if (VAR_3)
  FUNC_0(VAR_0, "no symlink - falling back to symbolic ref\n");

 return VAR_3;
}
