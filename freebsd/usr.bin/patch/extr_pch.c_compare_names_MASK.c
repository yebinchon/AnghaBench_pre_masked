
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_name {char* path; int exists; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 char* FUNC_0 (char*) ;
 size_t FUNC_1 (char*) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3(const struct file_name *VAR_3, bool VAR_4)
{
 size_t VAR_5, VAR_6, VAR_7, VAR_8;
 char *VAR_9 = ((void*)0);
 char *VAR_10;
 int VAR_11;
 VAR_5 = VAR_6 = VAR_7 = VAR_2;
 for (VAR_11 = VAR_0; VAR_11 >= VAR_1; VAR_11--) {
  VAR_10 = VAR_3[VAR_11].path;
  if (VAR_10 == ((void*)0) || (!VAR_3[VAR_11].exists && !VAR_4))
   continue;
  if ((VAR_8 = FUNC_1(VAR_10)) > VAR_5)
   continue;
  if (VAR_8 < VAR_5) {
   VAR_5 = VAR_8;
   VAR_9 = VAR_10;
  }
  if ((VAR_8 = FUNC_2(FUNC_0(VAR_10))) > VAR_6)
   continue;
  if (VAR_8 < VAR_6) {
   VAR_6 = VAR_8;
   VAR_9 = VAR_10;
  }
  if ((VAR_8 = FUNC_2(VAR_10)) > VAR_7)
   continue;
  VAR_7 = VAR_8;
  VAR_9 = VAR_10;
 }
 return VAR_9;
}
