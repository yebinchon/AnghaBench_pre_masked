
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; scalar_t__ base; } ;
struct geni_i2c_dev {TYPE_1__ se; int done; int lock; int * cur; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct geni_i2c_dev*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 unsigned long FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct geni_i2c_dev *VAR_4)
{
 u32 VAR_5;
 unsigned long VAR_6 = VAR_0;
 unsigned long VAR_7;

 FUNC_4(&VAR_4->lock, VAR_7);
 FUNC_1(VAR_4, VAR_1);
 VAR_4->cur = ((void*)0);
 FUNC_2(&VAR_4->se);
 FUNC_5(&VAR_4->lock, VAR_7);
 do {
  VAR_6 = FUNC_6(&VAR_4->done, VAR_6);
  VAR_5 = FUNC_3(VAR_4->se.base + VAR_3);
 } while (!(VAR_5 & VAR_2) && VAR_6);

 if (!(VAR_5 & VAR_2))
  FUNC_0(VAR_4->se.dev, "Timeout abort_m_cmd\n");
}
