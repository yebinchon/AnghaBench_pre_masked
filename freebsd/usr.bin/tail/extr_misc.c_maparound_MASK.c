
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapinfo {int maplen; int mapoff; int maxoff; int fd; int * start; } ;
typedef int off_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int * FUNC_1 (int *,int,int ,int ,int ,int) ;
 scalar_t__ FUNC_2 (int *,int) ;

int
FUNC_3(struct mapinfo *VAR_4, off_t VAR_5)
{

 if (VAR_4->start != ((void*)0) && FUNC_2(VAR_4->start, VAR_4->maplen) != 0)
  return (1);

 VAR_4->mapoff = VAR_5 & ~((off_t)VAR_3 - 1);
 VAR_4->maplen = VAR_3;
 if ((off_t)VAR_4->maplen > VAR_4->maxoff - VAR_4->mapoff)
  VAR_4->maplen = VAR_4->maxoff - VAR_4->mapoff;
 if (VAR_4->maplen <= 0)
  FUNC_0();
 if ((VAR_4->start = FUNC_1(((void*)0), VAR_4->maplen, VAR_2, VAR_1,
      VAR_4->fd, VAR_4->mapoff)) == VAR_0)
  return (1);

 return (0);
}
