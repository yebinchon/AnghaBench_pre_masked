
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c4iw_ep {int com; } ;
struct c4iw_dev {int hwtids; } ;


 int FUNC_0 (int *) ;
 struct c4iw_ep* FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static struct c4iw_ep *FUNC_4(struct c4iw_dev *VAR_0, unsigned int VAR_1)
{
 struct c4iw_ep *VAR_2;
 unsigned long VAR_3;

 FUNC_2(&VAR_0->hwtids, VAR_3);
 VAR_2 = FUNC_1(&VAR_0->hwtids, VAR_1);
 if (VAR_2)
  FUNC_0(&VAR_2->com);
 FUNC_3(&VAR_0->hwtids, VAR_3);
 return VAR_2;
}
