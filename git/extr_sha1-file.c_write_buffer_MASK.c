
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,void const*,size_t) ;

__attribute__((used)) static int FUNC_3(int VAR_0, const void *VAR_1, size_t VAR_2)
{
 if (FUNC_2(VAR_0, VAR_1, VAR_2) < 0)
  return FUNC_1(FUNC_0("file write error"));
 return 0;
}
