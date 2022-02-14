
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_name {char* path; } ;


 size_t VAR_0 ;
 char* FUNC_0 (struct file_name const*,int) ;
 scalar_t__ VAR_1 ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2(const struct file_name *VAR_2, bool VAR_3)
{
 char *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);


 if (VAR_4 == ((void*)0) && VAR_1)
  VAR_4 = VAR_2[VAR_0].path;

 return VAR_4 ? FUNC_1(VAR_4) : ((void*)0);
}
