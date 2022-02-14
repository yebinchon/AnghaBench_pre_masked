
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; int file; size_t off; TYPE_1__* bufsml; } ;
typedef TYPE_2__ uv_fs_t ;
struct pollfd {int fd; int events; int revents; } ;
typedef size_t ssize_t ;
typedef size_t off_t ;
typedef int buf ;
struct TYPE_4__ {size_t len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t FUNC_0 (struct pollfd*,int,int) ;
 size_t FUNC_1 (int,char*,size_t,size_t) ;
 size_t FUNC_2 (int,char*,size_t) ;
 size_t FUNC_3 (int,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_4(uv_fs_t* VAR_7) {
  struct pollfd VAR_8;
  int VAR_9;
  off_t VAR_10;
  ssize_t VAR_11;
  ssize_t VAR_12;
  ssize_t VAR_13;
  size_t VAR_14;
  size_t VAR_15;
  ssize_t VAR_16;
  int VAR_17;
  int VAR_18;
  char VAR_19[8192];

  VAR_15 = VAR_7->bufsml[0].len;
  VAR_17 = VAR_7->flags;
  VAR_18 = VAR_7->file;
  VAR_10 = VAR_7->off;
  VAR_9 = 1;
  for (VAR_11 = 0; (size_t) VAR_11 < VAR_15; ) {
    VAR_14 = VAR_15 - VAR_11;

    if (VAR_14 > sizeof(VAR_19))
      VAR_14 = sizeof(VAR_19);

    do
      if (VAR_9)
        VAR_12 = FUNC_1(VAR_17, VAR_19, VAR_14, VAR_10);
      else
        VAR_12 = FUNC_2(VAR_17, VAR_19, VAR_14);
    while (VAR_12 == -1 && VAR_6 == VAR_1);

    if (VAR_12 == 0)
      goto out;

    if (VAR_12 == -1) {
      if (VAR_9 && VAR_11 == 0 && (VAR_6 == VAR_2 || VAR_6 == VAR_3)) {
        VAR_9 = 0;
        continue;
      }

      if (VAR_11 == 0)
        VAR_11 = -1;

      goto out;
    }

    for (VAR_13 = 0; VAR_13 < VAR_12; ) {
      do
        VAR_16 = FUNC_3(VAR_18, VAR_19 + VAR_13, VAR_12 - VAR_13);
      while (VAR_16 == -1 && VAR_6 == VAR_1);

      if (VAR_16 != -1) {
        VAR_13 += VAR_16;
        continue;
      }

      if (VAR_6 != VAR_0 && VAR_6 != VAR_4) {
        VAR_11 = -1;
        goto out;
      }

      VAR_8.fd = VAR_18;
      VAR_8.events = VAR_5;
      VAR_8.revents = 0;

      do
        VAR_16 = FUNC_0(&VAR_8, 1, -1);
      while (VAR_16 == -1 && VAR_6 == VAR_1);

      if (VAR_16 == -1 || (VAR_8.revents & ~VAR_5) != 0) {
        VAR_6 = VAR_2;
        VAR_11 = -1;
        goto out;
      }
    }

    VAR_10 += VAR_12;
    VAR_11 += VAR_12;
  }

out:
  if (VAR_11 != -1)
    VAR_7->off = VAR_10;

  return VAR_11;
}
