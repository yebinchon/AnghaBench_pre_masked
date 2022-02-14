
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdshdr8 {int dummy; } ;
struct sdshdr64 {int dummy; } ;
struct sdshdr5 {int dummy; } ;
struct sdshdr32 {int dummy; } ;
struct sdshdr16 {int dummy; } ;







 char VAR_0 ;

__attribute__((used)) static inline int FUNC_0(char VAR_1) {
    switch(VAR_1&VAR_0) {
        case 130:
            return sizeof(struct sdshdr5);
        case 128:
            return sizeof(struct sdshdr8);
        case 132:
            return sizeof(struct sdshdr16);
        case 131:
            return sizeof(struct sdshdr32);
        case 129:
            return sizeof(struct sdshdr64);
    }
    return 0;
}
