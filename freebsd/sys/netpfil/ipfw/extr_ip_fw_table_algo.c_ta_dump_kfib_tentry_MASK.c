
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_info {int dummy; } ;
struct rtentry {int dummy; } ;
typedef int ipfw_obj_tentry ;


 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_3(void *VAR_0, struct table_info *VAR_1, void *VAR_2,
    ipfw_obj_tentry *VAR_3)
{
 struct rtentry *VAR_4;

 VAR_4 = (struct rtentry *)VAR_2;

 return FUNC_2(FUNC_0(VAR_4), FUNC_1(VAR_4), VAR_3);
}
