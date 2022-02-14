
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int filestream; } ;
typedef TYPE_1__ unz_s ;
typedef scalar_t__ unzFile ;
typedef int tmpbuf ;
struct TYPE_9__ {int filestream; } ;
struct TYPE_8__ {int offset; int filename; TYPE_3__ zipinfo; int pakfile; scalar_t__ zipfile; } ;
typedef TYPE_2__ quakefile_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,void*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,void*,int) ;

int FUNC_9(quakefile_t *VAR_2, void *VAR_3, int VAR_4, int VAR_5)
{
 FILE *VAR_6;
 int VAR_7;
 unzFile VAR_8;
 char VAR_9[1024];

 if (VAR_2->zipfile)
 {

  VAR_8 = FUNC_6(VAR_2->pakfile);

  VAR_2->zipinfo.filestream = ((unz_s *) VAR_8)->filestream;

  FUNC_7(&VAR_2->zipinfo);

  while(VAR_4 > 0)
  {
   VAR_7 = VAR_4;
   if (VAR_7 > sizeof(VAR_9)) VAR_7 = sizeof(VAR_9);
   FUNC_8(&VAR_2->zipinfo, VAR_9, VAR_7);
   VAR_4 -= VAR_7;
  }

  VAR_5 = FUNC_8(&VAR_2->zipinfo, VAR_3, VAR_5);

  FUNC_5(&VAR_2->zipinfo);

  FUNC_4(VAR_8);

  return VAR_5;
 }
 else
 {
  VAR_6 = FUNC_0(VAR_2->filename);
  if (VAR_2->offset) FUNC_3(VAR_6, VAR_2->offset, VAR_1);
  if (VAR_4) FUNC_3(VAR_6, VAR_4, VAR_0);
  FUNC_1(VAR_6, VAR_3, VAR_5);
  FUNC_2(VAR_6);

  return VAR_5;
 }
}
