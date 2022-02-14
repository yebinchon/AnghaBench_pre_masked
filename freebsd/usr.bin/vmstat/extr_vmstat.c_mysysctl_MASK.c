
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,void*,size_t*,int *,int ) ;
 int FUNC_1 (int,char*,char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2, void *VAR_3, size_t *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4, ((void*)0), 0);
 if (VAR_5 != 0 && VAR_1 != VAR_0)
  FUNC_1(1, "sysctl(%s)", VAR_2);
 return (VAR_5);
}
