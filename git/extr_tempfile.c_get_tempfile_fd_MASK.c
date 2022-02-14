
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tempfile {int fd; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct tempfile*) ;

int FUNC_2(struct tempfile *VAR_0)
{
 if (!FUNC_1(VAR_0))
  FUNC_0("get_tempfile_fd() called for inactive object");
 return VAR_0->fd;
}
