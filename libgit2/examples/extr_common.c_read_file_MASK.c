
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (int,char*,int) ;

char *FUNC_6(const char *VAR_4)
{
 ssize_t VAR_5 = 0;
 char *VAR_6 = ((void*)0);
 struct stat VAR_7;
 int VAR_8 = -1;

 if ((VAR_8 = FUNC_4(VAR_4, VAR_2)) < 0 || FUNC_2(VAR_8, &VAR_7) < 0)
  goto out;

 if ((VAR_6 = FUNC_3(VAR_7.st_size + 1)) == ((void*)0))
  goto out;

 while (VAR_5 < VAR_7.st_size) {
  ssize_t VAR_9 = FUNC_5(VAR_8, VAR_6 + VAR_5, VAR_7.st_size - VAR_5);
  if (VAR_9 <= 0) {
   if (VAR_3 == VAR_0 || VAR_3 == VAR_1)
     continue;
   FUNC_1(VAR_6);
   VAR_6 = ((void*)0);
   goto out;
  }
  VAR_5 += VAR_9;
 }

 VAR_6[VAR_5] = '\0';

out:
 if (VAR_8 >= 0)
  FUNC_0(VAR_8);
 return VAR_6;
}
