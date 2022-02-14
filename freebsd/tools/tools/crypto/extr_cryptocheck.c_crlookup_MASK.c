
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypt_find_op {int crid; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,int ,struct crypt_find_op*) ;
 int FUNC_4 (int ,char const*,int) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_2)
{
 struct crypt_find_op VAR_3;

 if (FUNC_5(VAR_2, "soft", 4) == 0) {
  FUNC_1();
  return VAR_1;
 }

 VAR_3.crid = -1;
 FUNC_4(VAR_3.name, VAR_2, sizeof(VAR_3.name));
 if (FUNC_3(FUNC_0(), VAR_0, &VAR_3) == -1)
  FUNC_2(1, "ioctl(CIOCFINDDEV)");
 return (VAR_3.crid);
}
