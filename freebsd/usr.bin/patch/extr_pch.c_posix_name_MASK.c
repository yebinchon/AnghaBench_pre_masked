
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_name {char* path; scalar_t__ exists; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (char*) ;

__attribute__((used)) static char *
FUNC_1(const struct file_name *VAR_3, bool VAR_4)
{
 char *VAR_5 = ((void*)0);
 int VAR_6;






 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_3[VAR_6].path != ((void*)0) && VAR_3[VAR_6].exists) {
   VAR_5 = VAR_3[VAR_6].path;
   break;
  }
 }
 if (VAR_5 == ((void*)0) && !VAR_4) {




  if (VAR_5 == ((void*)0) && VAR_2 &&
      VAR_3[VAR_1].path != ((void*)0))
   VAR_5 = VAR_3[VAR_1].path;
 }

 return VAR_5 ? FUNC_0(VAR_5) : ((void*)0);
}
