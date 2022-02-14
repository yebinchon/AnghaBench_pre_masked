
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tempfile {int * fp; int fd; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,char const*) ;
 int FUNC_2 (struct tempfile*) ;

FILE *FUNC_3(struct tempfile *VAR_0, const char *VAR_1)
{
 if (!FUNC_2(VAR_0))
  FUNC_0("fdopen_tempfile() called for inactive object");
 if (VAR_0->fp)
  FUNC_0("fdopen_tempfile() called for open object");

 VAR_0->fp = FUNC_1(VAR_0->fd, VAR_1);
 return VAR_0->fp;
}
