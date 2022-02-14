
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct stat {int st_mode; } ;
struct ref_lock {int lk; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (char*,struct stat*) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*,char*,size_t,size_t) ;
 int FUNC_7 (struct strbuf*) ;
 size_t FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct ref_lock *VAR_1)
{
 char *VAR_2 = FUNC_3(&VAR_1->lk);
 struct stat VAR_3;

 if (!FUNC_4(VAR_2, &VAR_3) && FUNC_0(VAR_3.st_mode)) {





  size_t VAR_4 = FUNC_8(VAR_2);
  struct strbuf VAR_5 = VAR_0;

  FUNC_6(&VAR_5, VAR_2, VAR_4, VAR_4);





  FUNC_5(&VAR_5);
  FUNC_7(&VAR_5);
 } else {
  FUNC_2(VAR_2);
 }

 if (FUNC_1(&VAR_1->lk))
  return -1;
 return 0;
}
