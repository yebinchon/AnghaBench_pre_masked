
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {int * is_pic; } ;
struct msi_intsrc {TYPE_1__ msi_intsrc; scalar_t__ msi_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 struct msi_intsrc* FUNC_1 (int,int ,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct msi_intsrc *VAR_8;
 u_int VAR_9;

 FUNC_2(&VAR_5);
 if (VAR_4 >= VAR_7) {
  FUNC_3(&VAR_5);
  return;
 }
 VAR_9 = VAR_4 + VAR_3;
 VAR_4++;
 FUNC_3(&VAR_5);

 VAR_8 = FUNC_1(sizeof(struct msi_intsrc), VAR_0, VAR_1 | VAR_2);
 VAR_8->msi_intsrc.is_pic = &VAR_6;
 VAR_8->msi_irq = VAR_9;
 FUNC_0(&VAR_8->msi_intsrc);
 FUNC_4(VAR_9);
}
