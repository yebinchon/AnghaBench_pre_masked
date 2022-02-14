
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_selector_type {int dummy; } ;
struct ps_internal {struct path_selector_type pst; } ;


 int VAR_0 ;
 struct ps_internal* FUNC_0 (int,int ) ;

__attribute__((used)) static struct ps_internal *FUNC_1(struct path_selector_type *VAR_1)
{
 struct ps_internal *VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);

 if (VAR_2)
  VAR_2->pst = *VAR_1;

 return VAR_2;
}
