
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* opaque; } ;
struct TYPE_4__ {int acodec_flush_request; } ;
typedef TYPE_1__ IJKFF_Pipenode_Opaque ;
typedef TYPE_2__ IJKFF_Pipenode ;



__attribute__((used)) static int FUNC_0(IJKFF_Pipenode *VAR_0)
{
    IJKFF_Pipenode_Opaque *VAR_1 = VAR_0->opaque;

    if (!VAR_1)
        return -1;

    VAR_1->acodec_flush_request = 1;

    return 0;
}
