
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int fd_out; int offset; TYPE_2__* bufsml; } ;
struct TYPE_11__ {TYPE_3__ info; } ;
struct TYPE_8__ {int fd; } ;
struct TYPE_12__ {TYPE_4__ fs; TYPE_1__ file; } ;
typedef TYPE_5__ uv_fs_t ;
typedef int int64_t ;
struct TYPE_9__ {size_t len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int,char*,size_t) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(uv_fs_t* VAR_2) {
  int VAR_3 = VAR_2->file.fd, VAR_4 = VAR_2->fs.info.fd_out;
  size_t VAR_5 = VAR_2->fs.info.bufsml[0].len;
  int64_t VAR_6 = VAR_2->fs.info.offset;
  const size_t VAR_7 = 65536;
  size_t VAR_8 = VAR_5 < VAR_7 ? VAR_5 : VAR_7;
  int VAR_9, VAR_10 = 0;
  int64_t VAR_11 = 0;
  char* VAR_12 = (char*) FUNC_5(VAR_8);
  if (!VAR_12) {
    FUNC_6(VAR_0, "uv__malloc");
  }

  if (VAR_6 != -1) {
    VAR_11 = FUNC_1(VAR_3, VAR_6, VAR_1);
  }

  if (VAR_11 == -1) {
    VAR_10 = -1;
  } else {
    while (VAR_5 > 0) {
      VAR_9 = FUNC_2(VAR_3, VAR_12, VAR_5 < VAR_8 ? VAR_5 : VAR_8);
      if (VAR_9 == 0) {
        break;
      } else if (VAR_9 == -1) {
        VAR_10 = -1;
        break;
      }

      VAR_5 -= VAR_9;

      VAR_9 = FUNC_3(VAR_4, VAR_12, VAR_9);
      if (VAR_9 == -1) {
        VAR_10 = -1;
        break;
      }

      VAR_10 += VAR_9;
    }
  }

  FUNC_4(VAR_12);

  FUNC_0(VAR_2, VAR_10);
}
