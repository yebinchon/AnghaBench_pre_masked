
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arasan_cf_dev {int clk; TYPE_1__* host; scalar_t__ vbase; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct arasan_cf_dev*) ;
 int FUNC_1 (struct arasan_cf_dev*,int ) ;
 int FUNC_2 (struct arasan_cf_dev*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct arasan_cf_dev *VAR_3)
{
 unsigned long VAR_4;

 FUNC_5(&VAR_3->host->lock, VAR_4);
 FUNC_1(VAR_3, 0);
 FUNC_2(VAR_3, VAR_2, 0);
 FUNC_0(VAR_3);
 FUNC_7(FUNC_4(VAR_3->vbase + VAR_1) & ~VAR_0,
   VAR_3->vbase + VAR_1);
 FUNC_6(&VAR_3->host->lock, VAR_4);
 FUNC_3(VAR_3->clk);
}
