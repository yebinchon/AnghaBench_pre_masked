
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypt_find_op {int crid; int name; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int ,struct crypt_find_op*) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_1)
{
 struct crypt_find_op VAR_2;

 VAR_2.crid = -1;
 FUNC_3(VAR_2.name, VAR_1, sizeof(VAR_2.name));
 if (FUNC_2(FUNC_0(), VAR_0, &VAR_2) == -1)
  FUNC_1(1, "ioctl(CIOCFINDDEV)");
 return VAR_2.crid;
}
