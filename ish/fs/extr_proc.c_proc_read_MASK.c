
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* data; size_t size; } ;
struct TYPE_3__ {TYPE_2__ data; } ;
struct fd {size_t offset; TYPE_1__ proc; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*,char const*,size_t) ;
 int FUNC_2 (struct fd*) ;

__attribute__((used)) static ssize_t FUNC_3(struct fd *VAR_0, void *VAR_1, size_t VAR_2) {
    int VAR_3 = FUNC_2(VAR_0);
    if (VAR_3 < 0)
        return VAR_3;

    const char *VAR_4 = VAR_0->proc.data.data;
    FUNC_0(VAR_4 != ((void*)0));

    size_t VAR_5 = VAR_0->proc.data.size - VAR_0->offset;
    if ((size_t) VAR_0->offset > VAR_0->proc.data.size)
        VAR_5 = 0;
    size_t VAR_6 = VAR_2;
    if (VAR_6 > VAR_5)
        VAR_6 = VAR_5;

    FUNC_1(VAR_1, VAR_4 + VAR_0->offset, VAR_6);
    VAR_0->offset += VAR_6;
    return VAR_6;
}
