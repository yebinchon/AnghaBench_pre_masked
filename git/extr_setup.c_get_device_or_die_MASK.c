
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_dev; } ;
typedef int dev_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,char const*,char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;

__attribute__((used)) static dev_t FUNC_3(const char *VAR_0, const char *VAR_1, int VAR_2)
{
 struct stat VAR_3;
 if (FUNC_2(VAR_0, &VAR_3)) {
  FUNC_1(FUNC_0("failed to stat '%*s%s%s'"),
    VAR_2,
    VAR_1 ? VAR_1 : "",
    VAR_1 ? "/" : "", VAR_0);
 }
 return VAR_3.st_dev;
}
