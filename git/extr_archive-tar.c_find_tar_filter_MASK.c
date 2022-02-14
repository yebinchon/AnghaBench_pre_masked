
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archiver {int * name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int) ;
 struct archiver** VAR_1 ;

__attribute__((used)) static struct archiver *FUNC_1(const char *VAR_2, int VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct archiver *VAR_5 = VAR_1[VAR_4];
  if (!FUNC_0(VAR_5->name, VAR_2, VAR_3) && !VAR_5->name[VAR_3])
   return VAR_5;
 }
 return ((void*)0);
}
