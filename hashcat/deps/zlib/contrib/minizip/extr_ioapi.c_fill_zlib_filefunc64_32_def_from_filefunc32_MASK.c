
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ztell_file; int zseek_file; int opaque; int zerror_file; int zclose_file; int zwrite_file; int zread_file; int zopen_file; } ;
typedef TYPE_2__ zlib_filefunc_def ;
struct TYPE_6__ {int opaque; int zerror_file; int zclose_file; int * zseek64_file; int * ztell64_file; int zwrite_file; int zread_file; int * zopen64_file; } ;
struct TYPE_8__ {int ztell32_file; int zseek32_file; TYPE_1__ zfile_func64; int zopen32_file; } ;
typedef TYPE_3__ zlib_filefunc64_32_def ;



void FUNC_0(zlib_filefunc64_32_def* VAR_0,const zlib_filefunc_def* VAR_1)
{
    VAR_0->zfile_func64.zopen64_file = ((void*)0);
    VAR_0->zopen32_file = VAR_1->zopen_file;
    VAR_0->zfile_func64.zerror_file = VAR_1->zerror_file;
    VAR_0->zfile_func64.zread_file = VAR_1->zread_file;
    VAR_0->zfile_func64.zwrite_file = VAR_1->zwrite_file;
    VAR_0->zfile_func64.ztell64_file = ((void*)0);
    VAR_0->zfile_func64.zseek64_file = ((void*)0);
    VAR_0->zfile_func64.zclose_file = VAR_1->zclose_file;
    VAR_0->zfile_func64.zerror_file = VAR_1->zerror_file;
    VAR_0->zfile_func64.opaque = VAR_1->opaque;
    VAR_0->zseek32_file = VAR_1->zseek_file;
    VAR_0->ztell32_file = VAR_1->ztell_file;
}
