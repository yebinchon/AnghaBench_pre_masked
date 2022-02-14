
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buff_file {int wptr; int wst; char* filename; int wpos; int fd; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int,int) ;

void FUNC_5 (struct buff_file *VAR_4) {
  int VAR_5 = VAR_4->wptr - VAR_4->wst;
  if (!VAR_5) {
    VAR_4->wptr = VAR_4->wst;
    return;
  }
  FUNC_0 (VAR_5 > 0 && VAR_5 <= VAR_0);
  int VAR_6 = FUNC_4 (VAR_4->fd, VAR_4->wst, VAR_5);
  if (VAR_6 < VAR_5) {
    if (VAR_6 >= 0) {
      int VAR_7 = FUNC_4 (VAR_4->fd, VAR_4->wst + VAR_6, VAR_5 - VAR_6);
      VAR_6 = (VAR_7 >= 0 ? VAR_6 + VAR_7 : VAR_7);
    }
  }
  if (VAR_6 != VAR_5) {
    if (VAR_6 < 0) {
      FUNC_3 (VAR_1, "cannot write %d bytes to temporary file %s: %m\n", VAR_5, VAR_4->filename);
    } else {
      FUNC_3 (VAR_1, "cannot write %d bytes to temporary file %s: only %d bytes written\n", VAR_5, VAR_4->filename, VAR_6);
    }
    FUNC_1 (3);
    FUNC_2 (3);
  }
  VAR_4->wpos += VAR_6;
  VAR_2 += VAR_6;
  VAR_4->wptr = VAR_4->wst;
  if (VAR_3 > 0) {
    FUNC_3 (VAR_1, "%d bytes written to temporary file %s\n", VAR_6, VAR_4->filename);
  }
}
