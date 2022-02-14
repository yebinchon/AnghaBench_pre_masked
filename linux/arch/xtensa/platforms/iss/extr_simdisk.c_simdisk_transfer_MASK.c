
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simdisk {unsigned long size; int lock; int fd; } ;


 int FUNC_0 (char) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*,unsigned long,unsigned long) ;
 int FUNC_3 (int ,unsigned long,int ) ;
 unsigned long FUNC_4 (int ,char*,unsigned long) ;
 unsigned long FUNC_5 (int ,char*,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct simdisk *VAR_3, unsigned long VAR_4,
  unsigned long VAR_5, char *VAR_6, int VAR_7)
{
 unsigned long VAR_8 = VAR_4 << VAR_0;
 unsigned long VAR_9 = VAR_5 << VAR_0;

 if (VAR_8 > VAR_3->size || VAR_3->size - VAR_8 < VAR_9) {
  FUNC_2("Beyond-end %s (%ld %ld)\n",
    VAR_7 ? "write" : "read", VAR_8, VAR_9);
  return;
 }

 FUNC_6(&VAR_3->lock);
 while (VAR_9 > 0) {
  unsigned long VAR_10;

  FUNC_3(VAR_3->fd, VAR_8, VAR_1);
  FUNC_0(*VAR_6);
  if (VAR_7)
   VAR_10 = FUNC_5(VAR_3->fd, VAR_6, VAR_9);
  else
   VAR_10 = FUNC_4(VAR_3->fd, VAR_6, VAR_9);
  if (VAR_10 == -1) {
   FUNC_1("SIMDISK: IO error %d\n", VAR_2);
   break;
  }
  VAR_6 += VAR_10;
  VAR_8 += VAR_10;
  VAR_9 -= VAR_10;
 }
 FUNC_7(&VAR_3->lock);
}
