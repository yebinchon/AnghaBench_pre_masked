
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; scalar_t__ result; int new_path; int path; } ;
typedef TYPE_1__ uv_fs_t ;
typedef scalar_t__ uv_file ;
struct stat {scalar_t__ st_dev; scalar_t__ st_ino; size_t st_size; int st_mode; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
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
 int VAR_10 ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,struct stat*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*,int ,int,int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,size_t,int *) ;
 int FUNC_8 (int *,TYPE_1__*,int ,int *) ;

__attribute__((used)) static ssize_t FUNC_9(uv_fs_t* VAR_11) {
  uv_fs_t VAR_12;
  uv_file VAR_13;
  uv_file VAR_14;
  struct stat VAR_15;
  struct stat VAR_16;
  int VAR_17;
  int VAR_18;
  int VAR_19;
  size_t VAR_20;
  int64_t VAR_21;
  ssize_t VAR_22;

  VAR_14 = -1;
  VAR_19 = 0;


  VAR_13 = FUNC_5(((void*)0), &VAR_12, VAR_11->path, VAR_3, 0, ((void*)0));
  FUNC_6(&VAR_12);

  if (VAR_13 < 0)
    return VAR_13;


  if (FUNC_2(VAR_13, &VAR_15)) {
    VAR_19 = FUNC_0(VAR_10);
    goto out;
  }

  VAR_17 = VAR_5 | VAR_1 | VAR_4;

  if (VAR_11->flags & VAR_7)
    VAR_17 |= VAR_2;


  VAR_14 = FUNC_5(((void*)0),
                     &VAR_12,
                     VAR_11->new_path,
                     VAR_17,
                     VAR_15.st_mode,
                     ((void*)0));
  FUNC_6(&VAR_12);

  if (VAR_14 < 0) {
    VAR_19 = VAR_14;
    goto out;
  }


  if (FUNC_2(VAR_14, &VAR_16)) {
    VAR_19 = FUNC_0(VAR_10);
    goto out;
  }


  if (VAR_15.st_dev == VAR_16.st_dev &&
      VAR_15.st_ino == VAR_16.st_ino) {
    goto out;
  }

  if (FUNC_1(VAR_14, VAR_15.st_mode) == -1) {
    VAR_19 = FUNC_0(VAR_10);
    goto out;
  }
  if (VAR_11->flags & VAR_9) {
    VAR_19 = VAR_6;
    goto out;
  }


  VAR_20 = VAR_15.st_size;
  VAR_21 = 0;
  while (VAR_20 != 0) {
    FUNC_7(((void*)0), &VAR_12, VAR_14, VAR_13, VAR_21, VAR_20, ((void*)0));
    VAR_22 = VAR_12.result;
    FUNC_6(&VAR_12);

    if (VAR_22 < 0) {
      VAR_19 = VAR_22;
      break;
    }

    VAR_20 -= VAR_22;
    VAR_21 += VAR_22;
  }

out:
  if (VAR_19 < 0)
    VAR_18 = VAR_19;
  else
    VAR_18 = 0;


  VAR_19 = FUNC_4(VAR_13);


  if (VAR_19 != 0 && VAR_18 == 0)
    VAR_18 = VAR_19;


  if (VAR_14 >= 0) {
    VAR_19 = FUNC_4(VAR_14);


    if (VAR_19 != 0 && VAR_18 == 0)
      VAR_18 = VAR_19;


    if (VAR_18 != 0) {
      FUNC_8(((void*)0), &VAR_12, VAR_11->new_path, ((void*)0));

      FUNC_6(&VAR_12);
    }
  }

  if (VAR_18 == 0)
    return 0;

  VAR_10 = FUNC_0(VAR_18);
  return -1;
}
