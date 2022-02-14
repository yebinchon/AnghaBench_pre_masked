
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int dummy; } ;
struct hfi1_ctxtdata {int dd; int flags; scalar_t__ rcvhdrtail_kvaddr; int * do_interrupt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct hfi1_ctxtdata*) ;
 int VAR_10 ;
 int FUNC_2 (struct hfi1_devdata*,struct hfi1_ctxtdata*) ;
 int FUNC_3 (int ,unsigned int,struct hfi1_ctxtdata*) ;
 int FUNC_4 (struct hfi1_ctxtdata*) ;

__attribute__((used)) static int FUNC_5(struct hfi1_devdata *VAR_11, struct hfi1_ctxtdata *VAR_12)
{
 unsigned int VAR_13 = 0;
 int VAR_14;

 VAR_12->do_interrupt = &VAR_10;


 VAR_14 = FUNC_2(VAR_11, VAR_12);
 if (VAR_14)
  goto done;

 VAR_14 = FUNC_4(VAR_12);
 if (VAR_14)
  goto done;

 if (VAR_12->rcvhdrtail_kvaddr)
  FUNC_1(VAR_12);

 VAR_13 = VAR_1;
 VAR_13 |= VAR_2;

 if (!FUNC_0(VAR_12->flags, VAR_7))
  VAR_13 |= VAR_5;
 if (FUNC_0(VAR_12->flags, VAR_8))
  VAR_13 |= VAR_3;
 if (FUNC_0(VAR_12->flags, VAR_9))
  VAR_13 |= VAR_4;
 if (FUNC_0(VAR_12->flags, VAR_0))
  VAR_13 |= VAR_6;

 FUNC_3(VAR_12->dd, VAR_13, VAR_12);
done:
 return VAR_14;
}
