
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypt_find_op {int crid; char const* name; } ;
typedef int find ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct crypt_find_op*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int ,int ,struct crypt_find_op*) ;

const char *
FUNC_4(int VAR_3)
{
 static struct crypt_find_op VAR_4;

 if (VAR_3 == VAR_2)
  return ("soft");
 else if (VAR_3 == VAR_1)
  return ("unknown");

 FUNC_0(&VAR_4, sizeof(VAR_4));
 VAR_4.crid = VAR_3;
 if (FUNC_3(FUNC_1(), VAR_0, &VAR_4) == -1)
  FUNC_2(1, "ioctl(CIOCFINDDEV): crid %d", VAR_3);
 return (VAR_4.name);
}
