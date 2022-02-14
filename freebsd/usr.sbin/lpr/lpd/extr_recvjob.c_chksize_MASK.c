
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int f_bavail; int f_bsize; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,struct statfs*) ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_2)
{
 int64_t VAR_3;
 struct statfs VAR_4;

 if (FUNC_0(".", &VAR_4) < 0) {
  FUNC_1(VAR_0, "%s: %m", "statfs(\".\")");
  return (1);
 }
 VAR_3 = VAR_4.f_bavail * (VAR_4.f_bsize / 512);
 VAR_2 = (VAR_2 + 511) / 512;
 if (VAR_1 + VAR_2 > VAR_3)
  return(0);
 return(1);
}
