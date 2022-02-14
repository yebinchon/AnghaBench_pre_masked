
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssif_info {long watch_timeout; int watch_timer; } ;


 unsigned int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 unsigned long* FUNC_0 (struct ssif_info*,unsigned long*) ;
 int FUNC_1 (struct ssif_info*,unsigned long*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void *VAR_4, unsigned int VAR_5)
{
 struct ssif_info *VAR_6 = (struct ssif_info *) VAR_4;
 unsigned long VAR_7, *VAR_8;
 long VAR_9 = 0;

 if (VAR_5 & VAR_0)
  VAR_9 = VAR_1;
 else if (VAR_5)
  VAR_9 = VAR_2;

 VAR_8 = FUNC_0(VAR_6, &VAR_7);
 if (VAR_9 != VAR_6->watch_timeout) {
  VAR_6->watch_timeout = VAR_9;
  if (VAR_6->watch_timeout)
   FUNC_2(&VAR_6->watch_timer,
      VAR_3 + VAR_6->watch_timeout);
 }
 FUNC_1(VAR_6, VAR_8);
}
