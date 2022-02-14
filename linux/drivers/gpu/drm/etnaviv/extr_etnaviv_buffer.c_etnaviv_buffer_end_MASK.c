
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etnaviv_cmdbuf {int user_size; } ;
struct etnaviv_gpu {scalar_t__ exec_state; int lock; struct etnaviv_cmdbuf buffer; } ;


 int FUNC_0 (struct etnaviv_cmdbuf*) ;
 int FUNC_1 (struct etnaviv_cmdbuf*,int ,int) ;
 int FUNC_2 (struct etnaviv_cmdbuf*,int ,int ) ;
 int FUNC_3 (struct etnaviv_cmdbuf*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct etnaviv_cmdbuf*,unsigned int,int,int) ;
 int FUNC_6 (struct etnaviv_gpu*,struct etnaviv_cmdbuf*,unsigned int) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct etnaviv_gpu *VAR_15)
{
 struct etnaviv_cmdbuf *VAR_16 = &VAR_15->buffer;
 unsigned int VAR_17 = VAR_16->user_size - 16;
 u32 VAR_18, VAR_19 = 0;

 FUNC_7(&VAR_15->lock);

 if (VAR_15->exec_state == VAR_0)
  VAR_19 = VAR_7;
 else if (VAR_15->exec_state == VAR_1)
  VAR_19 = VAR_6 |
   VAR_5 |
   VAR_9 |
   VAR_10 |
   VAR_8;

 if (VAR_19) {
  unsigned int VAR_20 = 7;

  VAR_18 = FUNC_6(VAR_15, VAR_16, VAR_20);

  FUNC_2(VAR_16, VAR_2, VAR_3);
  FUNC_3(VAR_16, VAR_2, VAR_3);
  FUNC_1(VAR_16, VAR_4, VAR_19);
  if (VAR_15->exec_state == VAR_1)
   FUNC_1(VAR_16, VAR_11,
           VAR_12);
  FUNC_2(VAR_16, VAR_2, VAR_3);
  FUNC_3(VAR_16, VAR_2, VAR_3);
  FUNC_0(VAR_16);

  FUNC_5(VAR_16, VAR_17,
         VAR_14 |
         FUNC_4(VAR_20),
         VAR_18);
 } else {

  FUNC_5(VAR_16, VAR_17,
         VAR_13, 0);
 }
}
