
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {scalar_t__ tree_objects; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct rev_info*,int *,int ) ;
 scalar_t__ FUNC_2 (struct rev_info*) ;

__attribute__((used)) static void FUNC_3(struct rev_info *VAR_0)
{
 if (FUNC_2(VAR_0))
  FUNC_0("revision walk setup failed");
 if (VAR_0->tree_objects)
  FUNC_1(VAR_0, ((void*)0), 0);
}
