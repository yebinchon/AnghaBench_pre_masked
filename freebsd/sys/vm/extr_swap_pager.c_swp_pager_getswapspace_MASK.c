
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swdevt {int sw_flags; scalar_t__ sw_first; int sw_used; int sw_blist; } ;
typedef scalar_t__ daddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct swdevt* FUNC_1 (int *) ;
 struct swdevt* FUNC_2 (struct swdevt*,int ) ;
 scalar_t__ FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct swdevt* VAR_8 ;
 int FUNC_8 () ;
 int VAR_9 ;

__attribute__((used)) static daddr_t
FUNC_9(int *VAR_10, int VAR_11)
{
 daddr_t VAR_12;
 struct swdevt *VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = VAR_1;
 VAR_14 = *VAR_10;
 VAR_15 = FUNC_4(VAR_0, VAR_14);
 FUNC_5(&VAR_3);
 VAR_13 = VAR_8;
 while (!FUNC_0(&VAR_9)) {
  if (VAR_13 == ((void*)0))
   VAR_13 = FUNC_1(&VAR_9);
  if ((VAR_13->sw_flags & VAR_2) == 0)
   VAR_12 = FUNC_3(VAR_13->sw_blist, &VAR_15, VAR_14);
  if (VAR_12 != VAR_1)
   break;
  VAR_13 = FUNC_2(VAR_13, VAR_4);
  if (VAR_8 == VAR_13) {
   if (VAR_15 <= VAR_11)
    break;
   VAR_14 = VAR_15 - 1;
   VAR_15 >>= 1;
  }
 }
 if (VAR_12 != VAR_1) {
  *VAR_10 = VAR_15;
  VAR_12 += VAR_13->sw_first;
  VAR_13->sw_used += VAR_15;
  VAR_6 -= VAR_15;
  FUNC_8();
  VAR_8 = FUNC_2(VAR_13, VAR_4);
 } else {
  if (VAR_7 != 2) {
   FUNC_7("swp_pager_getswapspace(%d): failed\n",
       *VAR_10);
   VAR_7 = 2;
   VAR_5 = 1;
  }
  VAR_8 = ((void*)0);
 }
 FUNC_6(&VAR_3);
 return (VAR_12);
}
