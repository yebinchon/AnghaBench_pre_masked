
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {long pos_in_central_dir; long byte_before_the_zipfile; int file; } ;
typedef TYPE_1__ unz_s ;
struct TYPE_7__ {int offset_curfile; } ;
typedef TYPE_2__ unz_file_info_internal ;
struct TYPE_8__ {int version; int version_needed; int flag; int compression_method; int dosDate; int crc; int compressed_size; int uncompressed_size; int size_filename; int size_file_extra; int size_file_comment; int disk_num_start; int internal_fa; int external_fa; int tmu_date; } ;
typedef TYPE_3__ unz_file_info ;
typedef int * unzFile ;
typedef int uLong ;
typedef int uInt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (char*,int ,int,int ) ;
 size_t FUNC_1 (char*,int ,int,int ) ;
 scalar_t__ FUNC_2 (int ,long,int ) ;
 int VAR_6 ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int ,int*) ;

__attribute__((used)) static int FUNC_6 (unzFile VAR_7,
                                                  unz_file_info *VAR_8,
                                                  unz_file_info_internal
                                                  *VAR_9,
                                                  char *VAR_10,
              uLong VAR_11,
                                                  void *VAR_12,
              uLong VAR_13,
                                                  char *VAR_14,
              uLong VAR_15)
{
 unz_s* VAR_16;
 unz_file_info VAR_17;
 unz_file_info_internal VAR_18;
 int VAR_19=VAR_4;
 uLong VAR_20;
 long VAR_21=0;

 if (VAR_7 == ((void*)0)) {
  return VAR_5;
 }

 VAR_16 = (unz_s*)VAR_7;

 if (FUNC_2(VAR_16->file, VAR_16->pos_in_central_dir + VAR_16->byte_before_the_zipfile, VAR_1) != 0) {
  VAR_19=VAR_3;
 }


 if (VAR_19 == VAR_4) {
  if (FUNC_4(VAR_16->file,&VAR_20) != VAR_4) {
   VAR_19 = VAR_3;
  } else if (VAR_20 != 0x02014b50) {
   VAR_19 = VAR_2;
  }
 }

 if (FUNC_5(VAR_16->file,&VAR_17.version) != VAR_4)
  VAR_19=VAR_3;

 if (FUNC_5(VAR_16->file,&VAR_17.version_needed) != VAR_4)
  VAR_19=VAR_3;

 if (FUNC_5(VAR_16->file,&VAR_17.flag) != VAR_4)
  VAR_19=VAR_3;

 if (FUNC_5(VAR_16->file,&VAR_17.compression_method) != VAR_4)
  VAR_19=VAR_3;

 if (FUNC_4(VAR_16->file,&VAR_17.dosDate) != VAR_4)
  VAR_19=VAR_3;

    FUNC_3(VAR_17.dosDate,&VAR_17.tmu_date);

 if (FUNC_4(VAR_16->file,&VAR_17.crc) != VAR_4)
  VAR_19=VAR_3;

 if (FUNC_4(VAR_16->file,&VAR_17.compressed_size) != VAR_4)
  VAR_19=VAR_3;

 if (FUNC_4(VAR_16->file,&VAR_17.uncompressed_size) != VAR_4)
  VAR_19=VAR_3;

 if (FUNC_5(VAR_16->file,&VAR_17.size_filename) != VAR_4)
  VAR_19=VAR_3;

 if (FUNC_5(VAR_16->file,&VAR_17.size_file_extra) != VAR_4)
  VAR_19=VAR_3;

 if (FUNC_5(VAR_16->file,&VAR_17.size_file_comment) != VAR_4)
  VAR_19=VAR_3;

 if (FUNC_5(VAR_16->file,&VAR_17.disk_num_start) != VAR_4)
  VAR_19=VAR_3;

 if (FUNC_5(VAR_16->file,&VAR_17.internal_fa) != VAR_4)
  VAR_19=VAR_3;

 if (FUNC_4(VAR_16->file,&VAR_17.external_fa) != VAR_4)
  VAR_19=VAR_3;

 if (FUNC_4(VAR_16->file,&VAR_18.offset_curfile) != VAR_4)
  VAR_19=VAR_3;

 VAR_21 += VAR_17.size_filename;

 if ((VAR_19 == VAR_4) && (VAR_10 != ((void*)0))) {
  uLong VAR_22 ;
  if (VAR_17.size_filename<VAR_11) {
   *(VAR_10+VAR_17.size_filename)='\0';
   VAR_22 = VAR_17.size_filename;
  } else {
   VAR_22 = VAR_11;
  }

  if ((VAR_17.size_filename>0) && (VAR_11>0)) {
   size_t VAR_23;
   if (VAR_6 == 1) {
    VAR_23 = FUNC_1(VAR_10, (uInt)VAR_22, 1, VAR_16->file);
   } else {
    VAR_23 = FUNC_0(VAR_10, (uInt)VAR_22, 1, VAR_16->file);
   }

   if (VAR_23 != 1) {
    VAR_19 = VAR_3;
   }
  }
  VAR_21 -= VAR_22;
 }

 if ((VAR_19 == VAR_4) && (VAR_12 != ((void*)0))) {
  uLong VAR_24 ;
  if (VAR_17.size_file_extra < VAR_13) {
   VAR_24 = VAR_17.size_file_extra;
  } else {
   VAR_24 = VAR_13;
  }

  if (VAR_21 != 0) {
   if (FUNC_2(VAR_16->file, VAR_21, VAR_0) == 0) {
    VAR_21=0;
   } else {
    VAR_19=VAR_3;
   }
  }
  if ((VAR_17.size_file_extra > 0) && (VAR_13 > 0)) {
   size_t VAR_25;
   if (VAR_6 == 1) {
    VAR_25 = FUNC_1(VAR_12, (uInt)VAR_24, 1, VAR_16->file);
   } else {
    VAR_25 = FUNC_0(VAR_12, (uInt)VAR_24, 1, VAR_16->file);
   }
   if (VAR_25 != 1) {
    VAR_19=VAR_3;
   }
  }
  VAR_21 += VAR_17.size_file_extra - VAR_24;
 } else {
  VAR_21 += VAR_17.size_file_extra;
 }

 if ((VAR_19 == VAR_4) && (VAR_14 != ((void*)0))) {
  uLong VAR_26 ;
  if (VAR_17.size_file_comment < VAR_15) {
   *(VAR_14+VAR_17.size_file_comment) = '\0';
   VAR_26 = VAR_17.size_file_comment;
  } else {
   VAR_26 = VAR_15;
  }

  if (VAR_21 != 0) {
   if (FUNC_2(VAR_16->file, VAR_21, VAR_0) ==0 ) {
    VAR_21=0;
   } else {
    VAR_19=VAR_3;
   }
  }
  if ((VAR_17.size_file_comment>0) && (VAR_15>0)) {
   size_t VAR_27;
   if (VAR_6 == 1) {
    VAR_27 = FUNC_1(VAR_14, (uInt)VAR_26, 1, VAR_16->file);
   } else {
    VAR_27 = FUNC_0(VAR_14, (uInt)VAR_26, 1, VAR_16->file);
   }
   if (VAR_27!=1) {
    VAR_19=VAR_3;
   }
  }
  VAR_21 += VAR_17.size_file_comment - VAR_26;
 } else {
  VAR_21+=VAR_17.size_file_comment;
 }

 if ((VAR_19==VAR_4) && (VAR_8!=((void*)0))) {
  *VAR_8=VAR_17;
 }

 if ((VAR_19==VAR_4) && (VAR_9!=((void*)0))) {
  *VAR_9=VAR_18;
 }

 return VAR_19;
}
