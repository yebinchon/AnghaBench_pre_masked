
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptff_qto {int tod_epoch_difference; } ;
typedef scalar_t__ s64 ;
typedef int qto ;
struct TYPE_2__ {int ts_dir; unsigned long ts_end; int tb_update_count; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long long) ;
 int FUNC_1 (int *,int ,unsigned long long*) ;
 unsigned long FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (char*,unsigned long long) ;
 scalar_t__ FUNC_4 (struct ptff_qto*,int,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_6 (int) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static void FUNC_7(unsigned long long VAR_7)
{
 unsigned long VAR_8, VAR_9;
 struct ptff_qto VAR_10;


 *(unsigned long long *) &VAR_3[1] += VAR_7;
 if (*(unsigned long long *) &VAR_3[1] < VAR_7)

  VAR_3[0]++;

 VAR_6->tb_update_count++;
 VAR_8 = FUNC_2();
 VAR_9 = VAR_5 - VAR_8;
 if (FUNC_6((s64) VAR_9 >= 0))

  VAR_4 = (VAR_4 < 0) ?
   -(VAR_9 >> 15) : (VAR_9 >> 15);
 VAR_4 += VAR_7;
 if ((FUNC_0(VAR_4) >> 48) != 0)
  FUNC_3("TOD clock sync offset %lli is too large to drift\n",
        VAR_4);
 VAR_5 = VAR_8 + (FUNC_0(VAR_4) << 15);
 VAR_6->ts_dir = (VAR_4 < 0) ? 0 : 1;
 VAR_6->ts_end = VAR_5;
 VAR_6->tb_update_count++;

 if (FUNC_5(VAR_0) && FUNC_4(&VAR_10, sizeof(VAR_10), VAR_0) == 0)
  VAR_1 = VAR_10.tod_epoch_difference;

 FUNC_1(&VAR_2, 0, &VAR_7);
}
