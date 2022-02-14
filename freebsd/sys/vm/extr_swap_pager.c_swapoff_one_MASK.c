
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct ucred {int dummy; } ;
struct swdevt {scalar_t__ sw_nblks; int sw_blist; int * sw_id; int (* sw_close ) (int ,struct swdevt*) ;int sw_flags; int sw_vp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct swdevt*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;
 int VAR_6 ;
 int FUNC_4 (struct swdevt*,int ) ;
 int FUNC_5 (struct ucred*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (int ,struct swdevt*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (struct swdevt*) ;
 int VAR_14 ;
 int VAR_15 ;
 struct swdevt* VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static int
FUNC_13(struct swdevt *VAR_18, struct ucred *VAR_19)
{
 u_long VAR_20;




 FUNC_10(&VAR_15, VAR_4);







 VAR_20 = VAR_18->sw_nblks;







 if (FUNC_11() + VAR_12 < VAR_20 + VAR_7)
  return (VAR_0);




 FUNC_6(&VAR_9);
 VAR_18->sw_flags |= VAR_5;
 VAR_12 -= FUNC_3(VAR_18->sw_blist, 0, VAR_20);
 VAR_14 -= VAR_20;
 FUNC_7(&VAR_9);




 FUNC_9(VAR_18);

 VAR_18->sw_close(VAR_6, VAR_18);
 FUNC_6(&VAR_9);
 VAR_18->sw_id = ((void*)0);
 FUNC_0(&VAR_17, VAR_18, VAR_10);
 VAR_8--;
 if (VAR_8 == 0) {
  VAR_13 = 2;
  VAR_11 = 1;
 }
 if (VAR_16 == VAR_18)
  VAR_16 = ((void*)0);
 FUNC_7(&VAR_9);
 FUNC_2(VAR_18->sw_blist);
 FUNC_4(VAR_18, VAR_3);
 return (0);
}
