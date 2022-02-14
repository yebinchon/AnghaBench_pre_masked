
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buff_file {int fd; int timestamp; scalar_t__ after_crc32; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 struct buff_file* VAR_2 ;
 int FUNC_2 (struct buff_file*,int ) ;
 int FUNC_3 (struct buff_file*) ;
 int FUNC_4 (struct buff_file*,int ) ;

int FUNC_5 (void) {
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
    struct buff_file *VAR_4 = &VAR_2[VAR_3];
    FUNC_2 (VAR_4, 0);
    if (VAR_4->after_crc32) {
      FUNC_4 (VAR_4, VAR_4->timestamp);
    }
    FUNC_3 (VAR_4);
    FUNC_0 (FUNC_1 (VAR_4->fd, 0, VAR_0) == 0);
  }
  return VAR_1;
}
