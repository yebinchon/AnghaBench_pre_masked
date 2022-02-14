
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * opaque; int zerror_file; int zclose_file; int zseek64_file; int ztell64_file; int zwrite_file; int zread_file; int zopen64_file; } ;
typedef TYPE_1__ zlib_filefunc64_def ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_0(zlib_filefunc64_def* VAR_7)
{
    VAR_7->zopen64_file = VAR_2;
    VAR_7->zread_file = VAR_3;
    VAR_7->zwrite_file = VAR_6;
    VAR_7->ztell64_file = VAR_5;
    VAR_7->zseek64_file = VAR_4;
    VAR_7->zclose_file = VAR_0;
    VAR_7->zerror_file = VAR_1;
    VAR_7->opaque = ((void*)0);
}
