
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_3__ {scalar_t__ offset; scalar_t__ type; scalar_t__ file_size; scalar_t__ is_ready; int fd; } ;
typedef TYPE_1__ knetFile ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int VAR_9 ;
 char* FUNC_2 (int ) ;

off_t FUNC_3(knetFile *VAR_10, int64_t VAR_11, int VAR_12)
{
 if (VAR_12 == VAR_7 && VAR_11 == VAR_10->offset) return 0;
 if (VAR_10->type == VAR_4) {


  off_t VAR_13 = FUNC_1(VAR_10->fd, VAR_11, VAR_12);
  if (VAR_13 == -1) {


   return -1;
  }
  VAR_10->offset = VAR_13;
  return VAR_11;
 } else if (VAR_10->type == VAR_2) {
        if (VAR_12==VAR_5)
            VAR_10->offset += VAR_11;
        else if (VAR_12==VAR_7)
            VAR_10->offset = VAR_11;
        else if ( VAR_12==VAR_6)
            VAR_10->offset = VAR_10->file_size+VAR_11;
  VAR_10->is_ready = 0;
  return VAR_11;
 } else if (VAR_10->type == VAR_3) {
  if (VAR_12 == VAR_6) {
   FUNC_0(VAR_9, "[knet_seek] SEEK_END is not supported for HTTP. Offset is unchanged.\n");
   VAR_8 = VAR_1;
   return -1;
  }
        if (VAR_12==VAR_5)
            VAR_10->offset += VAR_11;
        else if (VAR_12==VAR_7)
            VAR_10->offset = VAR_11;
  VAR_10->is_ready = 0;
  return VAR_11;
 }
 VAR_8 = VAR_0;
    FUNC_0(VAR_9,"[knet_seek] %s\n", FUNC_2(VAR_8));
 return -1;
}
