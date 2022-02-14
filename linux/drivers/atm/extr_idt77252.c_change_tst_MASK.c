
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_map {int dummy; } ;
struct idt77252_dev {int tst_lock; int tst_timer; int tst_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct idt77252_dev*,struct vc_map*) ;
 int FUNC_1 (struct idt77252_dev*,struct vc_map*,int,unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct idt77252_dev *VAR_2, struct vc_map *VAR_3,
    int VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 FUNC_4(&VAR_2->tst_lock, VAR_6);

 FUNC_0(VAR_2, VAR_3);
 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_3(VAR_0, &VAR_2->tst_state);
 if (!FUNC_6(&VAR_2->tst_timer))
  FUNC_2(&VAR_2->tst_timer, VAR_1 + 1);

 FUNC_5(&VAR_2->tst_lock, VAR_6);
 return VAR_7;
}
