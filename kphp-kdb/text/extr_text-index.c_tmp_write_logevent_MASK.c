
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buff_file {int after_crc32; scalar_t__ timestamp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct buff_file*,int) ;
 int FUNC_1 (struct buff_file*,scalar_t__) ;
 int FUNC_2 (struct buff_file*,void const*,int) ;
 int FUNC_3 (struct buff_file*,scalar_t__) ;

void FUNC_4 (struct buff_file *VAR_2, const void *VAR_3, int VAR_4) {
  if (VAR_2->after_crc32 > 16384) {
    FUNC_1 (VAR_2, VAR_1);
  } else if (VAR_1 != VAR_2->timestamp && VAR_1) {
    FUNC_3 (VAR_2, VAR_1);
  }
  if (VAR_0) {
    FUNC_0 (VAR_2, 1);
  }
  FUNC_2 (VAR_2, VAR_3, VAR_4);
}
