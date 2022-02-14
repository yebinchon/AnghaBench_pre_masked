
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct TYPE_2__ {int gitdir; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct strbuf*) ;
 char* FUNC_1 (char*,int ,int *,int*) ;
 int FUNC_2 (char const*,char*,char const**) ;
 int FUNC_3 (struct strbuf*,char const*,size_t) ;
 int FUNC_4 (struct strbuf*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_6(const char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct strbuf VAR_8 = VAR_1;
 const char *VAR_9 = !VAR_3->gitdir ?
  ((void*)0) : FUNC_1("HEAD", 0, ((void*)0), &VAR_6);
 const char *VAR_10;

 if (!VAR_9 || !(VAR_6 & VAR_0) ||
   !FUNC_2(VAR_9, "refs/heads/", &VAR_10))
  return 0;

 FUNC_3(&VAR_8, VAR_4, VAR_5);
 FUNC_0(&VAR_8);
 VAR_7 = !FUNC_5(VAR_8.buf, VAR_10, VAR_2);
 FUNC_4(&VAR_8);
 return VAR_7;
}
