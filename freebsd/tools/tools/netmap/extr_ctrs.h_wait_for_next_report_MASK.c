
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timeval {int tv_sec; int tv_usec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int *,int *,int *,struct timeval*) ;
 int FUNC_4 (struct timeval*,struct timeval*,struct timeval*) ;

__attribute__((used)) static __inline uint64_t
FUNC_5(struct timeval *VAR_2, struct timeval *VAR_3,
  int VAR_4)
{
 struct timeval VAR_5;

 VAR_5.tv_sec = VAR_4/1000;
 VAR_5.tv_usec = (VAR_4%1000)*1000;
 if (FUNC_3(0, ((void*)0), ((void*)0), ((void*)0), &VAR_5) < 0 && VAR_1 != VAR_0) {
  FUNC_2("select");
  FUNC_0();
 }
 FUNC_1(VAR_3, ((void*)0));
 FUNC_4(VAR_3, VAR_2, &VAR_5);
 return VAR_5.tv_sec* 1000000 + VAR_5.tv_usec;
}
