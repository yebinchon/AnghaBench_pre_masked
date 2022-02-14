
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int unz_s ;
struct TYPE_9__ {int number_entry; } ;
typedef TYPE_1__ unz_global_info ;
struct TYPE_10__ {int uncompressed_size; } ;
typedef TYPE_2__ unz_file_info ;
typedef scalar_t__ unzFile ;
struct TYPE_11__ {int zipfile; struct TYPE_11__* next; int type; int length; scalar_t__ offset; int zipinfo; int origname; int filename; int pakfile; } ;
typedef TYPE_3__ quakefile_t ;
typedef int filename_inzip ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_4 (int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,TYPE_2__*,char*,int,int *,int ,int *,int ) ;
 int FUNC_10 (scalar_t__,TYPE_1__*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (char*) ;

quakefile_t *FUNC_14(char *VAR_2, char *VAR_3)
{
 unzFile VAR_4;
 int VAR_5;
 unz_global_info VAR_6;
 char VAR_7[VAR_0];
 unz_file_info VAR_8;
 int VAR_9;
 quakefile_t *VAR_10, *VAR_11, *VAR_12;

 VAR_4 = FUNC_13(VAR_2);
 VAR_5 = FUNC_10(VAR_4, &VAR_6);

 if (VAR_5 != VAR_1) return ((void*)0);

 FUNC_11(VAR_4);

 VAR_10 = ((void*)0);
 VAR_11 = ((void*)0);
 for (VAR_9 = 0; VAR_9 < VAR_6.number_entry; VAR_9++)
 {
  VAR_5 = FUNC_9(VAR_4, &VAR_8, VAR_7, sizeof(VAR_7), ((void*)0),0,((void*)0),0);
  if (VAR_5 != VAR_1) break;

  FUNC_0(VAR_7);
  if (FUNC_2(VAR_3, VAR_7, 0))
  {
   VAR_12 = FUNC_4(sizeof(quakefile_t));
   if (!VAR_12) FUNC_1("out of memory");
   FUNC_6(VAR_12, 0, sizeof(quakefile_t));
   FUNC_7(VAR_12->pakfile, VAR_2);
   FUNC_7(VAR_12->filename, VAR_2);
   FUNC_7(VAR_12->origname, VAR_7);
   VAR_12->zipfile = 1;

   FUNC_5(&VAR_12->zipinfo, (unz_s*)VAR_4, sizeof(unz_s));
   VAR_12->offset = 0;
   VAR_12->length = VAR_8.uncompressed_size;
   VAR_12->type = FUNC_3(VAR_7);

   VAR_12->next = ((void*)0);
   if (VAR_11) VAR_11->next = VAR_12;
   else VAR_10 = VAR_12;
   VAR_11 = VAR_12;
  }
  FUNC_12(VAR_4);
 }

 FUNC_8(VAR_4);

 return VAR_10;
}
