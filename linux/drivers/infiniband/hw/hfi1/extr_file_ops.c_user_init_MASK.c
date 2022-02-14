
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_ctxtdata {int dd; int flags; int jkey; scalar_t__ rcvhdrtail_kvaddr; scalar_t__ urgent_poll; scalar_t__ urgent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct hfi1_ctxtdata*) ;
 int FUNC_2 (int ,unsigned int,struct hfi1_ctxtdata*) ;
 int FUNC_3 (int ,struct hfi1_ctxtdata*,int ) ;

__attribute__((used)) static void FUNC_4(struct hfi1_ctxtdata *VAR_13)
{
 unsigned int VAR_14 = 0;


 VAR_13->urgent = 0;
 VAR_13->urgent_poll = 0;
 if (VAR_13->rcvhdrtail_kvaddr)
  FUNC_1(VAR_13);


 FUNC_3(VAR_13->dd, VAR_13, VAR_13->jkey);

 VAR_14 = VAR_2;
 VAR_14 |= VAR_9;
 if (FUNC_0(VAR_13->flags, VAR_1))
  VAR_14 |= VAR_8;





 if (!FUNC_0(VAR_13->flags, VAR_10))
  VAR_14 |= VAR_5;
 if (FUNC_0(VAR_13->flags, VAR_11))
  VAR_14 |= VAR_3;
 if (FUNC_0(VAR_13->flags, VAR_12))
  VAR_14 |= VAR_4;






 if (FUNC_0(VAR_13->flags, VAR_0))
  VAR_14 |= VAR_7;
 else
  VAR_14 |= VAR_6;
 FUNC_2(VAR_13->dd, VAR_14, VAR_13);
}
