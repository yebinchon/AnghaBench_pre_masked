
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd_chan {int fd; char* str; int tt; scalar_t__ raw; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(int VAR_0, int VAR_1, int VAR_2, void *VAR_3, char **VAR_4)
{
 struct fd_chan *VAR_5 = VAR_3;
 int VAR_6;

 if (VAR_5->raw && FUNC_1(VAR_5->fd)) {
  FUNC_0(VAR_6 = FUNC_4(VAR_5->fd, &VAR_5->tt));
  if (VAR_6)
   return VAR_6;

  VAR_6 = FUNC_2(VAR_5->fd);
  if (VAR_6)
   return VAR_6;
 }
 FUNC_3(VAR_5->str, "%d", VAR_5->fd);
 *VAR_4 = VAR_5->str;
 return VAR_5->fd;
}
