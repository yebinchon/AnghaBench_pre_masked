
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pasemi_dmachan {scalar_t__ chan_type; int chno; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;

int FUNC_5(const struct pasemi_dmachan *VAR_6)
{
 int VAR_7, VAR_8;
 u32 VAR_9;

 if (VAR_6->chan_type == VAR_5) {
  VAR_7 = FUNC_0(VAR_6->chno);
  FUNC_4(VAR_7, VAR_2);
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   VAR_9 = FUNC_3(VAR_7);
   if (!(VAR_9 & VAR_1)) {
    FUNC_4(VAR_7, 0);
    return 1;
   }
   FUNC_2();
  }
 } else {
  VAR_7 = FUNC_1(VAR_6->chno);
  FUNC_4(VAR_7, VAR_4);
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   VAR_9 = FUNC_3(VAR_7);
   if (!(VAR_9 & VAR_3)) {
    FUNC_4(VAR_7, 0);
    return 1;
   }
   FUNC_2();
  }
 }

 return 0;
}
