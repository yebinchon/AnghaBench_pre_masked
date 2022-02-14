
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ static_file_idx; scalar_t__ static_file_max_len; char const** static_files; } ;


 size_t FUNC_0 (char const**) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (char const*) ;

void
FUNC_2 (void)
{
  size_t VAR_1;
  const char *VAR_2[] = {
    ".css",
    ".js ",
    ".jpg",
    ".png",
    ".gif",
    ".ico",
    ".jpeg",
    ".pdf",
    ".txt",
    ".csv",
    ".mpeg",
    ".mpg",
    ".swf",
    ".woff",
    ".woff2",
    ".xls",
    ".xlsx",
    ".doc ",
    ".docx",
    ".ppt ",
    ".pptx",
    ".zip",
    ".mp3",
    ".mp4",
    ".exe",
    ".iso ",
    ".gz  ",
    ".rar ",
    ".svg ",
    ".bmp ",
    ".tar ",
    ".tgz ",
    ".tiff",
    ".tif ",
    ".ttf ",
    ".flv ",
  };

  if (VAR_0.static_file_idx > 0)
    return;

  for (VAR_1 = 0; VAR_1 < FUNC_0 (VAR_2); VAR_1++) {
    if (VAR_0.static_file_max_len < FUNC_1 (VAR_2[VAR_1]))
      VAR_0.static_file_max_len = FUNC_1 (VAR_2[VAR_1]);
    VAR_0.static_files[VAR_0.static_file_idx++] = VAR_2[VAR_1];
  }
}
