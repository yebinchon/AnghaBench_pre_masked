
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_signature ;
struct TYPE_4__ {int name; } ;
typedef TYPE_1__ git_reference ;
typedef int git_refdb_backend ;
typedef int git_filebuf ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,int *,int *) ;
 int FUNC_3 (int *,TYPE_1__ const*,int *,int,int *,int *,int const*,char const*) ;

__attribute__((used)) static int FUNC_4(git_refdb_backend *VAR_0, void *VAR_1, int VAR_2, int VAR_3,
        const git_reference *VAR_4, const git_signature *VAR_5, const char *VAR_6)
{
 git_filebuf *VAR_7 = (git_filebuf *) VAR_1;
 int VAR_8 = 0;

 if (VAR_2 == 2)
  VAR_8 = FUNC_2(VAR_0, VAR_7, VAR_4->name, ((void*)0), ((void*)0));
 else if (VAR_2)
  VAR_8 = FUNC_3(VAR_0, VAR_4, VAR_7, VAR_3, ((void*)0), ((void*)0), VAR_5, VAR_6);
 else
  FUNC_1(VAR_7);

 FUNC_0(VAR_7);
 return VAR_8;
}
