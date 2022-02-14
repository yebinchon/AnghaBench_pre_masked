
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; } ;
struct TYPE_4__ {TYPE_1__ data; } ;
struct fd {int offset; TYPE_2__ proc; } ;
typedef int off_t_ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fd*) ;

__attribute__((used)) static off_t_ FUNC_1(struct fd *VAR_4, off_t_ VAR_5, int VAR_6) {
    int VAR_7 = FUNC_0(VAR_4);
    if (VAR_7 < 0)
        return VAR_7;

    off_t_ VAR_8 = VAR_4->offset;
    if (VAR_6 == VAR_2)
        VAR_4->offset = VAR_5;
    else if (VAR_6 == VAR_0)
        VAR_4->offset += VAR_5;
    else if (VAR_6 == VAR_1)
        VAR_4->offset = VAR_4->proc.data.size + VAR_5;
    else
        return VAR_3;

    if (VAR_4->offset < 0) {
        VAR_4->offset = VAR_8;
        return VAR_3;
    }
    return VAR_4->offset;
}
