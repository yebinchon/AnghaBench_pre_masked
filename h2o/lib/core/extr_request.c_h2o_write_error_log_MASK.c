
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vecs ;
struct iovec {char* member_0; int member_1; } ;
struct TYPE_4__ {char* base; int len; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,struct iovec*,int) ;

void FUNC_2(h2o_iovec_t VAR_1, h2o_iovec_t VAR_2)
{

    struct iovec VAR_3[] = {{VAR_1.base, VAR_1.len}, {VAR_2.base, VAR_2.len}, {"\n", 1}};
    FUNC_0(sizeof(VAR_3) / sizeof(VAR_3[0]) <= VAR_0);
    FUNC_1(2, VAR_3, sizeof(VAR_3) / sizeof(VAR_3[0]));
}
