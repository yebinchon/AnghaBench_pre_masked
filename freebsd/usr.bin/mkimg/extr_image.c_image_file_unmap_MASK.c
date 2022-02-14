
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (void*,size_t,int ) ;
 int FUNC_1 (void*,size_t) ;
 size_t VAR_2 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_3, size_t VAR_4)
{
 size_t VAR_5;

 VAR_5 = (VAR_2 > VAR_1) ? VAR_2 : VAR_1;
 VAR_4 = (VAR_4 + VAR_5 - 1) & ~(VAR_5 - 1);
 if (FUNC_0(VAR_3, VAR_4, VAR_0) != 0)
  FUNC_2("madvise");
 FUNC_1(VAR_3, VAR_4);
 return (0);
}
