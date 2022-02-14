
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct index_state {int dummy; } ;
struct dirent {int dummy; } ;


 int FUNC_0 (struct dirent*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct index_state*,char const*,int) ;
 scalar_t__ FUNC_5 (char const*,struct stat*) ;

__attribute__((used)) static int FUNC_6(struct dirent *VAR_4, struct index_state *VAR_5,
       const char *VAR_6, int VAR_7)
{
 int VAR_8 = VAR_4 ? FUNC_0(VAR_4) : VAR_3;
 struct stat VAR_9;

 if (VAR_8 != VAR_3)
  return VAR_8;
 VAR_8 = FUNC_4(VAR_5, VAR_6, VAR_7);
 if (VAR_8 != VAR_3)
  return VAR_8;
 if (FUNC_5(VAR_6, &VAR_9))
  return VAR_8;
 if (FUNC_3(VAR_9.st_mode))
  return VAR_2;
 if (FUNC_1(VAR_9.st_mode))
  return VAR_0;
 if (FUNC_2(VAR_9.st_mode))
  return VAR_1;
 return VAR_8;
}
