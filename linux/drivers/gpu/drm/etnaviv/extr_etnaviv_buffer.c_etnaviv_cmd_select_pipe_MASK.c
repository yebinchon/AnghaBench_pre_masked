
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct etnaviv_gpu {scalar_t__ exec_state; int lock; } ;
struct etnaviv_cmdbuf {int dummy; } ;


 int FUNC_0 (struct etnaviv_cmdbuf*,int ,int) ;
 int FUNC_1 (struct etnaviv_cmdbuf*,int ,int ) ;
 int FUNC_2 (struct etnaviv_cmdbuf*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct etnaviv_gpu *VAR_9,
 struct etnaviv_cmdbuf *VAR_10, u8 VAR_11)
{
 u32 VAR_12 = 0;

 FUNC_4(&VAR_9->lock);







 if (VAR_9->exec_state == VAR_0)
  VAR_12 = VAR_7;
 else if (VAR_9->exec_state == VAR_1)
  VAR_12 = VAR_6 | VAR_5;

 FUNC_0(VAR_10, VAR_4, VAR_12);
 FUNC_1(VAR_10, VAR_2, VAR_3);
 FUNC_2(VAR_10, VAR_2, VAR_3);

 FUNC_0(VAR_10, VAR_8,
         FUNC_3(VAR_11));
}
