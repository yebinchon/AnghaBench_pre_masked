
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {long size; int fd; long addr; long ofs; int rid; void* ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 struct resource* FUNC_1 (int) ;

int
FUNC_2(int VAR_3, long VAR_4, long VAR_5)
{
 struct resource *VAR_6;
 void *VAR_7;
 long VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 == ((void*)0))
  return (-1);
 if (VAR_4 < 0 || VAR_5 < 1) {
  VAR_2 = VAR_0;
  return (-1);
 }
 if (VAR_4 + VAR_5 > VAR_6->size) {
  VAR_2 = VAR_1;
  return (-1);
 }
 VAR_10 = VAR_6->fd;
 VAR_8 = VAR_6->addr;
 VAR_9 = VAR_6->ofs;
 VAR_7 = VAR_6->ptr;
 VAR_11 = FUNC_0();
 if (VAR_11 == -1)
  return (-1);
 VAR_6 = FUNC_1(VAR_11);
 if (VAR_6 == ((void*)0))
  return (-1);
 VAR_6->rid = VAR_3;
 VAR_6->fd = VAR_10;
 VAR_6->addr = VAR_8 + VAR_4;
 VAR_6->size = VAR_5;
 VAR_6->ofs = VAR_9 + VAR_4;
 VAR_6->ptr = VAR_7;
 return (VAR_11);
}
