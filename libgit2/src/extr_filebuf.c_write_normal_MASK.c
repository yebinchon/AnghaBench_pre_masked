
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int digest; scalar_t__ compute_digest; int last_error; int fd; } ;
typedef TYPE_1__ git_filebuf ;


 int VAR_0 ;
 int FUNC_0 (int *,void*,size_t) ;
 scalar_t__ FUNC_1 (int ,void*,size_t) ;

__attribute__((used)) static int FUNC_2(git_filebuf *VAR_1, void *VAR_2, size_t VAR_3)
{
 if (VAR_3 > 0) {
  if (FUNC_1(VAR_1->fd, (void *)VAR_2, VAR_3) < 0) {
   VAR_1->last_error = VAR_0;
   return -1;
  }

  if (VAR_1->compute_digest)
   FUNC_0(&VAR_1->digest, VAR_2, VAR_3);
 }

 return 0;
}
