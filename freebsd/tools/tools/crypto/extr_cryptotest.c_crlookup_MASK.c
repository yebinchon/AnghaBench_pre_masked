
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypt_find_op {int crid; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int ,struct crypt_find_op*) ;
 int FUNC_3 (int ,char const*,int) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;

int
FUNC_5(const char *VAR_2)
{
 struct crypt_find_op VAR_3;

 if (FUNC_4(VAR_2, "soft", 4) == 0)
  return VAR_1;

 VAR_3.crid = -1;
 FUNC_3(VAR_3.name, VAR_2, sizeof(VAR_3.name));
 if (FUNC_2(FUNC_0(), VAR_0, &VAR_3) == -1)
  FUNC_1(1, "ioctl(CIOCFINDDEV)");
 return VAR_3.crid;
}
