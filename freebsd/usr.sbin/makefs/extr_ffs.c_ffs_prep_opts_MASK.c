
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char member_0; char* member_1; int* member_2; int member_4; int member_5; char* member_6; int * name; int member_3; } ;
typedef TYPE_1__ option_t ;
struct TYPE_8__ {int fs_options; TYPE_3__* fs_specific; } ;
typedef TYPE_2__ fsinfo_t ;
struct TYPE_9__ {int bsize; int fsize; int density; int minfree; int maxbpg; int avgfilesize; int avgfpdir; int maxbsize; int maxblkspercg; int version; int* label; int softupdates; int cpg; int optimization; int maxcontig; } ;
typedef TYPE_3__ ffs_opt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__ const*) ;
 TYPE_3__* FUNC_1 (int,int) ;

void
FUNC_2(fsinfo_t *VAR_4)
{
 ffs_opt_t *VAR_5 = FUNC_1(1, sizeof(*VAR_5));

 const option_t VAR_6[] = {
     { 'b', "bsize", &VAR_5->bsize, VAR_1,
       1, VAR_0, "block size" },
     { 'f', "fsize", &VAR_5->fsize, VAR_1,
       1, VAR_0, "fragment size" },
     { 'd', "density", &VAR_5->density, VAR_1,
       1, VAR_0, "bytes per inode" },
     { 'm', "minfree", &VAR_5->minfree, VAR_1,
       0, 99, "minfree" },
     { 'M', "maxbpg", &VAR_5->maxbpg, VAR_1,
       1, VAR_0, "max blocks per file in a cg" },
     { 'a', "avgfilesize", &VAR_5->avgfilesize, VAR_1,
       1, VAR_0, "expected average file size" },
     { 'n', "avgfpdir", &VAR_5->avgfpdir, VAR_1,
       1, VAR_0, "expected # of files per directory" },
     { 'x', "extent", &VAR_5->maxbsize, VAR_1,
       1, VAR_0, "maximum # extent size" },
     { 'g', "maxbpcg", &VAR_5->maxblkspercg, VAR_1,
       1, VAR_0, "max # of blocks per group" },
     { 'v', "version", &VAR_5->version, VAR_1,
       1, 2, "UFS version" },
     { 'o', "optimization", ((void*)0), VAR_3,
       0, 0, "Optimization (time|space)" },
     { 'l', "label", VAR_5->label, VAR_2,
       1, sizeof(VAR_5->label), "UFS label" },
     { 's', "softupdates", &VAR_5->softupdates, VAR_1,
       0, 1, "enable softupdates" },
     { .name = ((void*)0) }
 };

 VAR_5->bsize= -1;
 VAR_5->fsize= -1;
 VAR_5->cpg= -1;
 VAR_5->density= -1;
 VAR_5->minfree= -1;
 VAR_5->optimization= -1;
 VAR_5->maxcontig= -1;
 VAR_5->maxbpg= -1;
 VAR_5->avgfilesize= -1;
 VAR_5->avgfpdir= -1;
 VAR_5->version = 1;
 VAR_5->softupdates = 0;

 VAR_4->fs_specific = VAR_5;
 VAR_4->fs_options = FUNC_0(VAR_6);
}
