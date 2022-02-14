
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ref; } ;
struct st_h2o_sendfile_generator_t {TYPE_1__ file; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct st_h2o_sendfile_generator_t *VAR_0)
{
    if (VAR_0->file.ref != ((void*)0)) {
        FUNC_0(VAR_0->file.ref);
        VAR_0->file.ref = ((void*)0);
    }
}
