
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd {int refcount; } ;



struct fd *FUNC_0(struct fd *VAR_0) {
    VAR_0->refcount++;
    return VAR_0;
}
