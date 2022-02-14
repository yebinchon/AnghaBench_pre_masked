
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct object_id*,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct object_id *VAR_0)
{
 if (FUNC_2(VAR_0, 0, ((void*)0)))
  FUNC_1(FUNC_0("git write-tree failed to write a tree"));
}
