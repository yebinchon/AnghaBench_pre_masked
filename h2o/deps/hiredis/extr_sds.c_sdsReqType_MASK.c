
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;

__attribute__((used)) static inline char FUNC_0(size_t VAR_5) {
    if (VAR_5 < 32)
        return VAR_2;
    if (VAR_5 < 0xff)
        return VAR_4;
    if (VAR_5 < 0xffff)
        return VAR_0;
    if (VAR_5 < 0xffffffff)
        return VAR_1;
    return VAR_3;
}
