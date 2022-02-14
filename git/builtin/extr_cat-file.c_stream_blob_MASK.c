
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct object_id const*) ;
 scalar_t__ FUNC_2 (int,struct object_id const*,int *,int ) ;

__attribute__((used)) static int FUNC_3(const struct object_id *VAR_0)
{
 if (FUNC_2(1, VAR_0, ((void*)0), 0))
  FUNC_0("unable to stream %s to stdout", FUNC_1(VAR_0));
 return 0;
}
