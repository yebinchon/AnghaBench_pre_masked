
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
struct camdd_io_opts {scalar_t__ blocksize; scalar_t__ dev_name; int queue_depth; int offset; } ;
struct TYPE_4__ {int st_size; int st_mode; } ;
struct camdd_dev_file {int fd; scalar_t__ filename; int file_type; int file_flags; TYPE_2__ sb; } ;
struct TYPE_3__ {struct camdd_dev_file file; } ;
struct camdd_dev {scalar_t__ device_name; scalar_t__ blocksize; int sector_size; int start_offset_bytes; int max_sector; int * fetch; int run; int target_queue_depth; TYPE_1__ dev_spec; } ;
typedef unsigned int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct camdd_dev* FUNC_4 (int ,int *,int ,int,int) ;
 int VAR_15 ;
 int FUNC_5 (struct camdd_dev*) ;
 int FUNC_6 (int,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (int,char*,scalar_t__) ;
 int FUNC_8 (int,char*,scalar_t__,...) ;
 int FUNC_9 (int,TYPE_2__*) ;
 int FUNC_10 (int,int ,...) ;
 int FUNC_11 (scalar_t__,scalar_t__,int) ;
 int FUNC_12 (char*,scalar_t__) ;
 int FUNC_13 (char*,int,scalar_t__,...) ;

struct camdd_dev *
FUNC_14(int VAR_16, struct camdd_io_opts *VAR_17, int VAR_18,
    int VAR_19)
{
 struct camdd_dev *VAR_20 = ((void*)0);
 struct camdd_dev_file *VAR_21;
 uint64_t VAR_22 = VAR_17->blocksize;

 VAR_20 = FUNC_4(VAR_0, ((void*)0), 0, VAR_18, VAR_19);
 if (VAR_20 == ((void*)0))
  goto bailout;

 VAR_21 = &VAR_20->dev_spec.file;
 VAR_21->fd = VAR_16;
 FUNC_11(VAR_21->filename, VAR_17->dev_name,
     sizeof(VAR_21->filename));
 FUNC_11(VAR_20->device_name, VAR_17->dev_name, sizeof(VAR_20->device_name));
 if (VAR_22 == 0)
  VAR_20->blocksize = VAR_2;
 else
  VAR_20->blocksize = VAR_22;

 if ((VAR_17->queue_depth != 0)
  && (VAR_17->queue_depth != 1)) {
  FUNC_13("Queue depth %ju for %s ignored, only 1 outstanding "
      "command supported", (uintmax_t)VAR_17->queue_depth,
      VAR_17->dev_name);
 }
 VAR_20->target_queue_depth = VAR_3;
 VAR_20->run = VAR_15;
 VAR_20->fetch = ((void*)0);






 VAR_20->sector_size = 1;

 if ((VAR_16 != VAR_13)
  && (VAR_16 != VAR_14)) {
  int VAR_23;

  VAR_23 = FUNC_9(VAR_16, &VAR_21->sb);
  if (VAR_23 != 0) {
   FUNC_12("Cannot stat %s", VAR_20->device_name);
   goto bailout_error;
  }
  if (FUNC_3(VAR_21->sb.st_mode)) {
   VAR_21->file_type = 129;
  } else if (FUNC_0(VAR_21->sb.st_mode)) {
   int VAR_24;

   if (FUNC_10(VAR_16, VAR_12, &VAR_24) == -1)
    FUNC_7(1, "FIODTYPE ioctl failed on %s",
        VAR_20->device_name);
   else {
    if (VAR_24 & VAR_10)
     VAR_21->file_type = 128;
    else if (VAR_24 & VAR_8)
     VAR_21->file_type = 131;
    else if (VAR_24 & VAR_9)
     VAR_21->file_type = 130;
    else if (VAR_24 & VAR_11)
     VAR_21->file_type = VAR_5;
   }
  } else if (FUNC_1(VAR_21->sb.st_mode)) {
   FUNC_8(1, "cannot operate on directory %s",
       VAR_20->device_name);
  } else if (FUNC_2(VAR_21->sb.st_mode)) {
   VAR_21->file_type = VAR_4;
  } else
   FUNC_8(1, "Cannot determine file type for %s",
       VAR_20->device_name);

  switch (VAR_21->file_type) {
  case 129:
   if (VAR_21->sb.st_size != 0)
    VAR_20->max_sector = VAR_21->sb.st_size - 1;
   else
    VAR_20->max_sector = 0;
   VAR_21->file_flags |= VAR_1;
   break;
  case 128: {
   uint64_t VAR_25, VAR_26, VAR_27, VAR_28;







   VAR_23 = FUNC_6(VAR_16, VAR_20->device_name,
       &VAR_25, &VAR_26, &VAR_27, &VAR_28);
   if (VAR_23 != 0)
    FUNC_8(1, "Unable to probe tape %s",
        VAR_20->device_name);







   if (VAR_20->blocksize > VAR_25) {
    FUNC_13("Blocksize %u too big for %s, limiting "
        "to %ju", VAR_20->blocksize, VAR_20->device_name,
        VAR_25);
    VAR_20->blocksize = VAR_25;
   }




   if (VAR_20->blocksize < VAR_27) {
    FUNC_13("Blocksize %u too small for %s, "
        "increasing to %ju", VAR_20->blocksize,
        VAR_20->device_name, VAR_27);
    VAR_20->blocksize = VAR_27;
   }





   if ((VAR_28 != 0)
    && (VAR_20->blocksize % (1 << VAR_28))) {
    FUNC_13("Blocksize %u for %s not a multiple of "
        "%d, adjusting to %d", VAR_20->blocksize,
        VAR_20->device_name, (1 << VAR_28),
        VAR_20->blocksize & ~((1 << VAR_28) - 1));
    VAR_20->blocksize &= ~((1 << VAR_28) - 1);
   }

   if (VAR_20->blocksize == 0) {
    FUNC_8(1, "Unable to derive valid blocksize for "
        "%s", VAR_20->device_name);
   }






   VAR_20->sector_size = VAR_20->blocksize;
   break;
  }
  case 131: {
   off_t VAR_29;
   unsigned int VAR_30;

   VAR_21->file_flags |= VAR_1;

   if (FUNC_10(VAR_16, VAR_7, &VAR_30) == -1) {
    FUNC_7(1, "DIOCGSECTORSIZE ioctl failed on %s",
        VAR_20->device_name);
   }

   if (VAR_30 == 0) {
    FUNC_8(1, "DIOCGSECTORSIZE ioctl returned "
        "invalid sector size %u for %s",
        VAR_30, VAR_20->device_name);
   }

   if (FUNC_10(VAR_16, VAR_6, &VAR_29) == -1) {
    FUNC_7(1, "DIOCGMEDIASIZE ioctl failed on %s",
        VAR_20->device_name);
   }

   if (VAR_29 == 0) {
    FUNC_8(1, "DIOCGMEDIASIZE ioctl returned "
        "invalid media size %ju for %s",
        (uintmax_t)VAR_29, VAR_20->device_name);
   }

   if (VAR_20->blocksize % VAR_30) {
    FUNC_8(1, "%s blocksize %u not a multiple of "
        "sector size %u", VAR_20->device_name,
        VAR_20->blocksize, VAR_30);
   }

   VAR_20->sector_size = VAR_30;
   VAR_20->max_sector = (VAR_29 / VAR_30) - 1;
   break;
  }
  case 130:
   VAR_21->file_flags |= VAR_1;
   break;
  default:
   break;
  }
 }

 if ((VAR_17->offset != 0)
  && ((VAR_21->file_flags & VAR_1) == 0)) {
  FUNC_13("Offset %ju specified for %s, but we cannot seek on %s",
      VAR_17->offset, VAR_17->dev_name, VAR_17->dev_name);
  goto bailout_error;
 }
bailout:
 return (VAR_20);

bailout_error:
 FUNC_5(VAR_20);
 return (((void*)0));
}
