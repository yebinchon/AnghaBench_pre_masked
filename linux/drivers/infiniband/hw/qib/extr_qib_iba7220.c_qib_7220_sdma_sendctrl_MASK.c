
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qib_pportdata {struct qib_devdata* dd; } ;
struct qib_devdata {int sendctrl_lock; int sendctrl; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct qib_devdata*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct qib_pportdata *VAR_9, unsigned VAR_10)
{
 struct qib_devdata *VAR_11 = VAR_9->dd;
 u64 VAR_12 = 0;
 u64 VAR_13 = 0;

 if (VAR_10 & VAR_0)
  VAR_12 |= FUNC_0(VAR_6, VAR_3);
 else
  VAR_13 |= FUNC_0(VAR_6, VAR_3);

 if (VAR_10 & VAR_2)
  VAR_12 |= FUNC_0(VAR_6, VAR_5);
 else
  VAR_13 |= FUNC_0(VAR_6, VAR_5);

 if (VAR_10 & VAR_1)
  VAR_12 |= FUNC_0(VAR_6, VAR_4);
 else
  VAR_13 |= FUNC_0(VAR_6, VAR_4);

 FUNC_2(&VAR_11->sendctrl_lock);

 VAR_11->sendctrl |= VAR_12;
 VAR_11->sendctrl &= ~VAR_13;

 FUNC_1(VAR_11, VAR_8, VAR_11->sendctrl);
 FUNC_1(VAR_11, VAR_7, 0);

 FUNC_3(&VAR_11->sendctrl_lock);
}
