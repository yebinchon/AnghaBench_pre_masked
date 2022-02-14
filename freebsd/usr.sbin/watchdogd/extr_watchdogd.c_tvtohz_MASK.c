
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; long tv_usec; } ;
typedef int hz ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,long,long) ;
 int FUNC_2 (char*,int*,size_t*,int *,int ) ;

int
FUNC_3(struct timeval *VAR_2)
{
 register unsigned long VAR_3;
 register long VAR_4, VAR_5;
 int VAR_6;
 size_t VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = sizeof(VAR_6);

 VAR_8 = FUNC_2("kern.hz", &VAR_6, &VAR_7, ((void*)0), 0);
 if (VAR_8)
  FUNC_0(1, "sysctlbyname kern.hz");

 VAR_9 = 1000000 / VAR_6;
 VAR_4 = VAR_2->tv_sec;
 VAR_5 = VAR_2->tv_usec;
 if (VAR_5 < 0) {
  VAR_4--;
  VAR_5 += 1000000;
 }
 if (VAR_4 < 0) {
  VAR_3 = 1;
 } else if (VAR_4 <= VAR_1 / 1000000)
  VAR_3 = (VAR_4 * 1000000 + (unsigned long)VAR_5 + (VAR_9 - 1))
      / VAR_9 + 1;
 else if (VAR_4 <= VAR_1 / VAR_6)
  VAR_3 = VAR_4 * VAR_6
      + ((unsigned long)VAR_5 + (VAR_9 - 1)) / VAR_9 + 1;
 else
  VAR_3 = VAR_1;
 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;
 return ((int)VAR_3);
}
