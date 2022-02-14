
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ number_entry; scalar_t__ size_comment; } ;
struct TYPE_4__ {scalar_t__ size_central_dir; scalar_t__ offset_central_dir; int * pfile_in_zip_read; scalar_t__ central_pos; scalar_t__ byte_before_the_zipfile; int * file; TYPE_1__ gi; } ;
typedef TYPE_2__ unz_s ;
typedef int * unzFile ;
typedef scalar_t__ uLong ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int * FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,scalar_t__*) ;
 int FUNC_8 (int *,scalar_t__*) ;

extern unzFile FUNC_9 (const char* VAR_5)
{
 unz_s VAR_6;
 unz_s *VAR_7;
 uLong VAR_8,VAR_9;
 FILE * VAR_10 ;

 uLong VAR_11;

 uLong VAR_12;

 uLong VAR_13;



 int VAR_14=VAR_3;

 if (VAR_4 == 1) {
  VAR_10=FUNC_3(VAR_5,"rb");
 } else {
  VAR_10=FUNC_2(VAR_5,"rb");
 }
 if (VAR_10==((void*)0))
  return ((void*)0);

 VAR_8 = FUNC_6(VAR_10);
 if (VAR_8==0)
  VAR_14=VAR_2;

 if (FUNC_4(VAR_10,VAR_8,VAR_0)!=0)
  VAR_14=VAR_2;


 if (FUNC_7(VAR_10,&VAR_9)!=VAR_3)
  VAR_14=VAR_2;


 if (FUNC_8(VAR_10,&VAR_11)!=VAR_3)
  VAR_14=VAR_2;


 if (FUNC_8(VAR_10,&VAR_12)!=VAR_3)
  VAR_14=VAR_2;


 if (FUNC_8(VAR_10,&VAR_6.gi.number_entry)!=VAR_3)
  VAR_14=VAR_2;


 if (FUNC_8(VAR_10,&VAR_13)!=VAR_3)
  VAR_14=VAR_2;

 if ((VAR_13!=VAR_6.gi.number_entry) ||
  (VAR_12!=0) ||
  (VAR_11!=0))
  VAR_14=VAR_1;


 if (FUNC_7(VAR_10,&VAR_6.size_central_dir)!=VAR_3)
  VAR_14=VAR_2;



 if (FUNC_7(VAR_10,&VAR_6.offset_central_dir)!=VAR_3)
  VAR_14=VAR_2;


 if (FUNC_8(VAR_10,&VAR_6.gi.size_comment)!=VAR_3)
  VAR_14=VAR_2;

 if ((VAR_8<VAR_6.offset_central_dir+VAR_6.size_central_dir) &&
  (VAR_14==VAR_3))
  VAR_14=VAR_1;

 if (VAR_14!=VAR_3)
 {
  if (VAR_4 == 1) {
   FUNC_1(VAR_10);
  } else {
   FUNC_0(VAR_10);
  }
  return ((void*)0);
 }

 VAR_6.file=VAR_10;
 VAR_6.byte_before_the_zipfile = VAR_8 -
                      (VAR_6.offset_central_dir+VAR_6.size_central_dir);
 VAR_6.central_pos = VAR_8;
    VAR_6.pfile_in_zip_read = ((void*)0);


 VAR_7=(unz_s*)FUNC_5(sizeof(unz_s));
 *VAR_7=VAR_6;

 return (unzFile)VAR_7;
}
