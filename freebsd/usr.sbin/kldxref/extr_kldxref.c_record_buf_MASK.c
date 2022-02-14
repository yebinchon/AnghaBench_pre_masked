
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (size_t,void const*,size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int
FUNC_2(const void *VAR_3, size_t VAR_4)
{

 if (VAR_0 - VAR_2 < VAR_4)
  FUNC_0(1, "record buffer overflow");
 FUNC_1(VAR_1 + VAR_2, VAR_3, VAR_4);
 VAR_2 += VAR_4;
 return (0);
}
