
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (void*,int ) ;
 int VAR_5 ;
 long FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int) ;
 long FUNC_3 (int ,int,unsigned long) ;

__attribute__((used)) static int FUNC_4(void *VAR_6)
{
 unsigned long VAR_7;
 long VAR_8;

 if (VAR_2 > -1) {
  VAR_8 = FUNC_3(VAR_5,
    FUNC_0(VAR_6, VAR_0)
    & VAR_1, VAR_4.timeout);
 } else {

  VAR_7 = VAR_3 + VAR_4.timeout;
  do {
   VAR_8 = FUNC_1(VAR_3, VAR_7);
   if (FUNC_0(VAR_6, VAR_0)
     & VAR_1)
    break;
   FUNC_2(100);
  } while (VAR_8);
 }

 return VAR_8 > 0;
}
