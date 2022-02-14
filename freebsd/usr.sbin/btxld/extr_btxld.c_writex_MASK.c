
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int,void const*,size_t) ;

__attribute__((used)) static void
FUNC_3(int VAR_1, const void *VAR_2, size_t VAR_3)
{
    ssize_t VAR_4;

    if ((VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3)) == -1)
 FUNC_0(2, "%s", VAR_0);
    if ((size_t)VAR_4 != VAR_3)
 FUNC_1(2, "%s: Short write", VAR_0);
}
