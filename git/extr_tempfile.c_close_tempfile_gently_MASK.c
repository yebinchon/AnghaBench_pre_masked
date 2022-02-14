
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tempfile {int fd; int * fp; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct tempfile*) ;

int FUNC_4(struct tempfile *VAR_2)
{
 int VAR_3;
 FILE *VAR_4;
 int VAR_5;

 if (!FUNC_3(VAR_2) || VAR_2->fd < 0)
  return 0;

 VAR_3 = VAR_2->fd;
 VAR_4 = VAR_2->fp;
 VAR_2->fd = -1;
 if (VAR_4) {
  VAR_2->fp = ((void*)0);
  if (FUNC_2(VAR_4)) {
   VAR_5 = -1;
   if (!FUNC_1(VAR_4))
    VAR_1 = VAR_0;
  } else {
   VAR_5 = FUNC_1(VAR_4);
  }
 } else {
  VAR_5 = FUNC_0(VAR_3);
 }

 return VAR_5 ? -1 : 0;
}
