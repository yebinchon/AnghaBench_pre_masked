
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_vector ;
typedef int git_refspec ;
typedef int git_buf ;
struct TYPE_2__ {scalar_t__ klass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,int) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int *,int *) ;
 char* FUNC_11 (char const*,char) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(const char **VAR_4, git_vector *VAR_5, const char *VAR_6)
{
 int VAR_7;
 const char *VAR_8;
 git_buf VAR_9 = VAR_0;
 git_refspec *VAR_10 = ((void*)0);

 VAR_6 += FUNC_12(VAR_1);
 if (*VAR_6 != '=')
  goto on_invalid;

 VAR_6++;
 if (!(VAR_8 = FUNC_11(VAR_6, ' ')) &&
     !(VAR_8 = FUNC_11(VAR_6, '\0')))
  goto on_invalid;

 if ((VAR_7 = FUNC_5(&VAR_9, VAR_6, VAR_8 - VAR_6)) < 0)
  return VAR_7;


 VAR_10 = FUNC_1(1, sizeof(git_refspec));
 FUNC_0(VAR_10);

 VAR_7 = FUNC_9(VAR_10, FUNC_3(&VAR_9), 1);
 FUNC_4(&VAR_9);


 if (VAR_7 < 0) {
  if (FUNC_6()->klass != VAR_3)
   goto on_invalid;

  FUNC_2(VAR_10);
  return VAR_7;
 }

 if ((VAR_7 = FUNC_10(VAR_5, VAR_10)) < 0)
  return VAR_7;

 *VAR_4 = VAR_8;
 return 0;

on_invalid:
 FUNC_7(VAR_2, "remote sent invalid symref");
 FUNC_8(VAR_10);
 FUNC_2(VAR_10);
 return -1;
}
