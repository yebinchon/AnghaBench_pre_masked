
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_gid_attr {int ndev; } ;


 size_t VAR_0 ;
 char* FUNC_0 (int ) ;
 size_t FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static size_t FUNC_2(struct ib_gid_attr *VAR_1, char *VAR_2)
{
 if (!VAR_1->ndev)
  return -VAR_0;

 return FUNC_1(VAR_2, "%s\n", FUNC_0(VAR_1->ndev));
}
