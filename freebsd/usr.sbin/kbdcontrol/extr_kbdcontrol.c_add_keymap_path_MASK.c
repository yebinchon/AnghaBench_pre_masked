
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathent {char* path; } ;


 int FUNC_0 (int *,struct pathent*,int ) ;
 int FUNC_1 (int,char*) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2)
{
 struct pathent* VAR_3;
 size_t VAR_4;

 VAR_4 = FUNC_4(VAR_2);
 if ((VAR_3 = FUNC_2(sizeof(*VAR_3))) == ((void*)0) ||
     (VAR_3->path = FUNC_2(VAR_4 + 2)) == ((void*)0))
  FUNC_1(1, "malloc");
 FUNC_3(VAR_3->path, VAR_2, VAR_4);
 if (VAR_4 > 0 && VAR_2[VAR_4 - 1] != '/')
  VAR_3->path[VAR_4++] = '/';
 VAR_3->path[VAR_4] = '\0';
 FUNC_0(&VAR_1, VAR_3, VAR_0);
}
