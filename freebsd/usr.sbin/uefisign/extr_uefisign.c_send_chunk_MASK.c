
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int len ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,void const*,size_t) ;

void
FUNC_2(const void *VAR_0, size_t VAR_1, int VAR_2)
{
 ssize_t VAR_3;

 VAR_3 = FUNC_1(VAR_2, &VAR_1, sizeof(VAR_1));
 if (VAR_3 != sizeof(VAR_1))
  FUNC_0(1, "write");
 VAR_3 = FUNC_1(VAR_2, VAR_0, VAR_1);
 if (VAR_3 != (ssize_t)VAR_1)
  FUNC_0(1, "write");
}
