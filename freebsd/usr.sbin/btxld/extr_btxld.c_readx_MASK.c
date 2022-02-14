
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int,void*,size_t) ;

__attribute__((used)) static size_t
FUNC_3(int VAR_2, void *VAR_3, size_t VAR_4, off_t VAR_5)
{
    ssize_t VAR_6;

    if (VAR_5 != -1 && FUNC_1(VAR_2, VAR_5, VAR_0) != VAR_5)
 FUNC_0(2, "%s", VAR_1);
    if ((VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4)) == -1)
 FUNC_0(2, "%s", VAR_1);
    return VAR_6;
}
