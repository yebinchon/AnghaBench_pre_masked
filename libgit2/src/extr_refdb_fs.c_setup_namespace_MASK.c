
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * namespace; } ;
typedef TYPE_1__ git_repository ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (char**,char*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *,char) ;
 scalar_t__ FUNC_9 (int ,char const*,int,int ,int *) ;

__attribute__((used)) static char *FUNC_10(git_repository *VAR_2, const char *VAR_3)
{
 git_buf VAR_4 = VAR_0;
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8 = ((void*)0);

 if (!VAR_3)
  goto done;

 FUNC_7(&VAR_4, VAR_3);


 if (VAR_2->namespace == ((void*)0)) {
  VAR_8 = FUNC_4(&VAR_4);
  goto done;
 }

 VAR_5 = VAR_7 = FUNC_1(VAR_2->namespace);
 if (VAR_5 == ((void*)0))
  goto done;







 while ((VAR_6 = FUNC_2(&VAR_7, "/")) != ((void*)0))
  FUNC_6(&VAR_4, "refs/namespaces/%s/", VAR_6);

 FUNC_6(&VAR_4, "refs/namespaces/%s/refs", VAR_7);
 FUNC_0(VAR_5);


 if (FUNC_9(FUNC_3(&VAR_4), VAR_3, 0777,
   VAR_1, ((void*)0)) < 0)
  goto done;


 FUNC_8(&VAR_4, '/');
 VAR_8 = FUNC_4(&VAR_4);

done:
 FUNC_5(&VAR_4);
 return VAR_8;
}
