
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(const char *VAR_3, const char *VAR_4)
{
 int VAR_5 = 0;

 git_buf VAR_6 = VAR_0,
  VAR_7 = VAR_0,
  VAR_8 = VAR_0,
  VAR_9 = VAR_0;

 if ((VAR_5 = FUNC_3(&VAR_6, FUNC_5(VAR_2))) < 0 ||
  (VAR_5 = FUNC_3(&VAR_6, VAR_1)) < 0)
  goto done;

 if (!FUNC_4(FUNC_1(&VAR_6)) &&
  (VAR_5 = FUNC_6(FUNC_1(&VAR_6), 0777)) < 0)
  goto done;

 if ((VAR_5 = FUNC_3(&VAR_7, FUNC_1(&VAR_6))) < 0 ||
  (VAR_5 = FUNC_3(&VAR_7, "origin")) < 0)
  goto done;

 if (!FUNC_4(FUNC_1(&VAR_7)) &&
  (VAR_5 = FUNC_6(FUNC_1(&VAR_7), 0777)) < 0)
  goto done;

 if ((VAR_5 = FUNC_3(&VAR_8, FUNC_1(&VAR_7))) < 0 ||
  (VAR_5 = FUNC_3(&VAR_8, "/")) < 0 ||
  (VAR_5 = FUNC_3(&VAR_8, VAR_3)) < 0 ||
  (VAR_5 = FUNC_3(&VAR_9, VAR_4)) < 0 ||
  (VAR_5 = FUNC_3(&VAR_9, "\n")) < 0)
  goto done;

 FUNC_0(FUNC_1(&VAR_8), FUNC_1(&VAR_9));

done:
 FUNC_2(&VAR_6);
 FUNC_2(&VAR_7);
 FUNC_2(&VAR_8);
 FUNC_2(&VAR_9);

 return VAR_5;
}
