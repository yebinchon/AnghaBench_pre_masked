
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sdma_engine {int p_senddmactrl; int senddmactrl_lock; int this_idx; int dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (int ,char*,int ,int,int,int,int) ;
 int FUNC_2 (struct sdma_engine*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct sdma_engine*,int,int) ;

__attribute__((used)) static void FUNC_6(struct sdma_engine *VAR_9, unsigned VAR_10)
{
 u64 VAR_11 = 0;
 u64 VAR_12 = 0;
 unsigned long VAR_13;
 if (VAR_10 & VAR_6)
  VAR_11 |= FUNC_0(VAR_2);
 else
  VAR_12 |= FUNC_0(VAR_2);

 if (VAR_10 & VAR_8)
  VAR_11 |= FUNC_0(VAR_4);
 else
  VAR_12 |= FUNC_0(VAR_4);

 if (VAR_10 & VAR_7)
  VAR_11 |= FUNC_0(VAR_3);
 else
  VAR_12 |= FUNC_0(VAR_3);

 FUNC_3(&VAR_9->senddmactrl_lock, VAR_13);

 VAR_9->p_senddmactrl |= VAR_11;
 VAR_9->p_senddmactrl &= ~VAR_12;

 if (VAR_10 & VAR_5)
  FUNC_5(VAR_9, FUNC_0(VAR_0),
         VAR_9->p_senddmactrl |
         FUNC_0(VAR_1));
 else
  FUNC_5(VAR_9, FUNC_0(VAR_0), VAR_9->p_senddmactrl);

 FUNC_4(&VAR_9->senddmactrl_lock, VAR_13);




}
