
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bio; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(void)
{
 unsigned long VAR_6;

 VAR_2--;
 VAR_5--;
 VAR_1 += 512;
 VAR_0++;
 if (!VAR_5)
  return 1;
 if (VAR_2)
  return 0;
 FUNC_5(&VAR_3, VAR_6);
 if (!FUNC_4(VAR_4, 0, FUNC_2(VAR_4))) {
  FUNC_0(VAR_4, 0);
  VAR_4 = ((void*)0);
  VAR_2 = 0;
  VAR_1 = ((void*)0);
 } else {
  VAR_2 = FUNC_3(VAR_4);
  VAR_1 = FUNC_1(VAR_4->bio);
 }
 FUNC_6(&VAR_3, VAR_6);
 return !VAR_2;
}
