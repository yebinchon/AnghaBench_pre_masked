
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int h2o_handler_t ;
struct TYPE_6__ {int * base; } ;
struct TYPE_5__ {int * base; } ;
struct TYPE_8__ {TYPE_3__* index_files; int mimemap; TYPE_2__ real_path; TYPE_1__ conf_path; } ;
typedef TYPE_4__ h2o_file_handler_t ;
struct TYPE_7__ {int * base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(h2o_handler_t *VAR_0)
{
    h2o_file_handler_t *VAR_1 = (void *)VAR_0;
    size_t VAR_2;

    FUNC_0(VAR_1->conf_path.base);
    FUNC_0(VAR_1->real_path.base);
    FUNC_1(VAR_1->mimemap);
    for (VAR_2 = 0; VAR_1->index_files[VAR_2].base != ((void*)0); ++VAR_2)
        FUNC_0(VAR_1->index_files[VAR_2].base);
}
