
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_gid_attr {int gid_type; } ;


 char* FUNC_0 (int ) ;
 size_t FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static size_t FUNC_2(struct ib_gid_attr *VAR_0, char *VAR_1)
{
 return FUNC_1(VAR_1, "%s\n", FUNC_0(VAR_0->gid_type));
}
