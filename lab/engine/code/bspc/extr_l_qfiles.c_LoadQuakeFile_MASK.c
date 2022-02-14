
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
struct TYPE_9__ {int filestream; } ;
struct TYPE_8__ {int length; int offset; int filename; TYPE_3__ zipinfo; int pakfile; scalar_t__ zipfile; } ;
typedef TYPE_2__ quakefile_t ;
typedef int FILE ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,void*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,void*,int) ;

int FUNC_11(quakefile_t *VAR_1, void **VAR_2)
{
 FILE *VAR_3;
 void *VAR_4;
 int VAR_5;
 unzFile VAR_6;

 if (VAR_1->zipfile)
 {

  VAR_6 = FUNC_8(VAR_1->pakfile);

  VAR_1->zipinfo.filestream = ((unz_s *) VAR_6)->filestream;

  FUNC_9(&VAR_1->zipinfo);

  VAR_5 = VAR_1->length;
  VAR_4 = FUNC_0(VAR_5+1);

  VAR_5 = FUNC_10(&VAR_1->zipinfo, VAR_4, VAR_5);

  FUNC_7(&VAR_1->zipinfo);

  FUNC_6(VAR_6);

  *VAR_2 = VAR_4;
  return VAR_5;
 }
 else
 {
  VAR_3 = FUNC_2(VAR_1->filename);
  if (VAR_1->offset) FUNC_5(VAR_3, VAR_1->offset, VAR_0);
  VAR_5 = VAR_1->length;
  if (!VAR_5) VAR_5 = FUNC_1(VAR_3);
  VAR_4 = FUNC_0(VAR_5+1);
  ((char *)VAR_4)[VAR_5] = 0;
  FUNC_3(VAR_3, VAR_4, VAR_5);
  FUNC_4(VAR_3);

  *VAR_2 = VAR_4;
  return VAR_5;
 }
}
