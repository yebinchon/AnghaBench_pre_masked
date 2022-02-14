
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; } ;
struct libalias {int timeStamp; int lastCleanupTime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct libalias*) ;
 int FUNC_1 (struct libalias*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct timeval*,int *) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_4(struct libalias *VAR_5)
{
 int VAR_6, VAR_7;

 struct timeval VAR_8;


 FUNC_1(VAR_5);
 FUNC_3(&VAR_8, ((void*)0));
 VAR_5->timeStamp = VAR_8.tv_sec;



 VAR_7 = VAR_2 * (VAR_5->timeStamp - VAR_5->lastCleanupTime);
 VAR_7 /= VAR_0;


 if (VAR_7 > 0) {
  if (VAR_7 > VAR_1)
   VAR_7 = VAR_1;
  VAR_5->lastCleanupTime = VAR_5->timeStamp;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
   FUNC_0(VAR_5);
 } else if (VAR_7 < 0) {




  VAR_5->lastCleanupTime = VAR_5->timeStamp;
 }
}
