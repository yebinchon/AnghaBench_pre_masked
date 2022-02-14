
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; scalar_t__ path_lock; scalar_t__ path_original; int zs; scalar_t__ z_buf; scalar_t__ buffer; scalar_t__ compute_digest; int digest; int did_rename; scalar_t__ created_lock; scalar_t__ fd_is_open; } ;
typedef TYPE_1__ git_filebuf ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(git_filebuf *VAR_0)
{
 if (VAR_0->fd_is_open && VAR_0->fd >= 0)
  FUNC_5(VAR_0->fd);

 if (VAR_0->created_lock && !VAR_0->did_rename && VAR_0->path_lock && FUNC_3(VAR_0->path_lock))
  FUNC_6(VAR_0->path_lock);

 if (VAR_0->compute_digest) {
  FUNC_2(&VAR_0->digest);
  VAR_0->compute_digest = 0;
 }

 if (VAR_0->buffer)
  FUNC_1(VAR_0->buffer);


 if (VAR_0->z_buf) {
  FUNC_1(VAR_0->z_buf);
  FUNC_0(&VAR_0->zs);
 }

 if (VAR_0->path_original)
  FUNC_1(VAR_0->path_original);
 if (VAR_0->path_lock)
  FUNC_1(VAR_0->path_lock);

 FUNC_4(VAR_0, 0x0, sizeof(git_filebuf));
 VAR_0->fd = -1;
}
