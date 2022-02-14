
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {char* filename; int fd; int flags; char* filepath; int mtime; scalar_t__ fsize; int head_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 struct file_info* VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 int FUNC_1 (struct file_info*) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (struct file_info*,int ,int) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int,int ,scalar_t__) ;

__attribute__((used)) static struct file_info *FUNC_11 (struct file_info *VAR_13) {
  struct file_info *VAR_14 = VAR_10 + VAR_11;
  int VAR_15 = FUNC_8 (VAR_12), VAR_16 = FUNC_8 (VAR_13->filename);
  int VAR_17, VAR_18;

  FUNC_0 (VAR_11 < VAR_5 && VAR_15 > 1 && VAR_15 < VAR_4);

  FUNC_5 (VAR_14, 0, sizeof (*VAR_14));

  VAR_14->fd = -1;
  VAR_14->flags = VAR_1 | (VAR_13->flags & VAR_2);

  if (VAR_12[VAR_15 - 1] == '/') {
    VAR_15--;
  }

  FUNC_4 (VAR_14->filepath, VAR_12, VAR_15);
  VAR_14->filepath[VAR_15] = '/';
  VAR_14->filename = VAR_14->filepath + VAR_15 + 1;

  FUNC_4 (VAR_14->filepath + VAR_15 + 1, VAR_13->filename, VAR_16);
  FUNC_0 (VAR_15 + VAR_16 + 13 < VAR_6);

  VAR_18 = FUNC_9 (0);
  for (VAR_17 = 0; VAR_17 < 8; VAR_17++) {
    FUNC_7 (VAR_14->filename + VAR_16, ".%d", VAR_18 + VAR_17);
    VAR_14->fd = FUNC_6 (VAR_14->filepath, VAR_7 | VAR_8 | VAR_9, 0640);
    if (VAR_14->fd >= 0) {
      break;
    }
  }

  if (VAR_14->fd < 0) {
    FUNC_2 ("cannot create file %s: %m\n", VAR_14->filepath);
    return 0;
  }

  VAR_14->mtime = VAR_18;
  FUNC_0 (FUNC_3 (VAR_14->fd, VAR_3) > 0);

  if (FUNC_10 (VAR_14->fd, VAR_13->head_data, VAR_0) < VAR_0) {
    FUNC_2 ("cannot write to %s: %m\n", VAR_14->filepath);
    FUNC_1 (VAR_14);
    return 0;
  }

  VAR_14->fsize = VAR_0;
  VAR_11++;

  return VAR_14;
}
