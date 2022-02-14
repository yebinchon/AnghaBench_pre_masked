
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_desc {int dummy; } ;
struct traverse_info {int fn; } ;


 int FUNC_0 (struct traverse_info*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,struct tree_desc*,struct traverse_info*) ;

__attribute__((used)) static void FUNC_2(struct tree_desc VAR_2[3], const char *VAR_3)
{
 struct traverse_info VAR_4;

 FUNC_0(&VAR_4, VAR_3);
 VAR_4.fn = VAR_1;
 FUNC_1(&VAR_0, 3, VAR_2, &VAR_4);
}
