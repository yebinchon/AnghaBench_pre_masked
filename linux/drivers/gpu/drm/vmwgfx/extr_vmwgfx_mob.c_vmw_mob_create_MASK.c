
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_mob {int num_pages; } ;


 int VAR_0 ;
 struct vmw_mob* FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;

struct vmw_mob *FUNC_3(unsigned long VAR_1)
{
 struct vmw_mob *VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);

 if (FUNC_1(!VAR_2))
  return ((void*)0);

 VAR_2->num_pages = FUNC_2(VAR_1);

 return VAR_2;
}
