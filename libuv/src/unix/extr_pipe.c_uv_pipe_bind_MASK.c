
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
struct TYPE_6__ {char const* pipe_fname; TYPE_1__ io_watcher; int flags; } ;
typedef TYPE_2__ uv_pipe_t ;
struct sockaddr_un {int sun_family; int sun_path; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int VAR_7 ;
 int FUNC_2 (struct sockaddr_un*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,int ,int ) ;
 char* FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,char const*,int) ;

int FUNC_9(uv_pipe_t* VAR_8, const char* VAR_9) {
  struct sockaddr_un VAR_10;
  const char* VAR_11;
  int VAR_12;
  int VAR_13;

  VAR_11 = ((void*)0);


  if (FUNC_7(VAR_8) >= 0)
    return VAR_3;


  VAR_11 = FUNC_6(VAR_9);
  if (VAR_11 == ((void*)0))
    return VAR_5;


  VAR_9 = ((void*)0);

  VAR_13 = FUNC_5(VAR_0, VAR_1, 0);
  if (VAR_13 < 0)
    goto err_socket;
  VAR_12 = VAR_13;

  FUNC_2(&VAR_10, 0, sizeof VAR_10);
  FUNC_8(VAR_10.sun_path, VAR_11, sizeof(VAR_10.sun_path));
  VAR_10.sun_family = VAR_0;

  if (FUNC_1(VAR_12, (struct sockaddr*)&VAR_10, sizeof VAR_10)) {
    VAR_13 = FUNC_0(VAR_7);

    if (VAR_13 == VAR_4)
      VAR_13 = VAR_2;

    FUNC_3(VAR_12);
    goto err_socket;
  }


  VAR_8->flags |= VAR_6;
  VAR_8->pipe_fname = VAR_11;
  VAR_8->io_watcher.fd = VAR_12;
  return 0;

err_socket:
  FUNC_4((void*)VAR_11);
  return VAR_13;
}
