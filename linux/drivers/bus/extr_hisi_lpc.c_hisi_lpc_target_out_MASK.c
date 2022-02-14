
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct lpc_cycle_para {int opflags; } ;
struct hisi_lpc_dev {int cycle_lock; scalar_t__ membase; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (scalar_t__,unsigned int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (unsigned long,scalar_t__) ;
 int FUNC_5 (scalar_t__,unsigned char const*,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct hisi_lpc_dev *VAR_12,
          struct lpc_cycle_para *VAR_13, unsigned long VAR_14,
          const unsigned char *VAR_15, unsigned long VAR_16)
{
 unsigned int VAR_17;
 unsigned long VAR_18;
 u32 VAR_19;
 int VAR_20;

 if (!VAR_15 || !VAR_16 || !VAR_13 || !VAR_12)
  return -VAR_0;


 VAR_19 = VAR_6;
 VAR_17 = VAR_3;
 if (!(VAR_13->opflags & VAR_1)) {
  VAR_19 |= VAR_7;
  VAR_17 = VAR_2;
 }

 FUNC_0(&VAR_12->cycle_lock, VAR_18);

 FUNC_4(VAR_16, VAR_12->membase + VAR_8);
 FUNC_4(VAR_19, VAR_12->membase + VAR_5);
 FUNC_4(VAR_14, VAR_12->membase + VAR_4);

 FUNC_5(VAR_12->membase + VAR_11, VAR_15, VAR_16);

 FUNC_3(VAR_10,
        VAR_12->membase + VAR_9);


 VAR_20 = FUNC_2(VAR_12->membase, VAR_17);

 FUNC_1(&VAR_12->cycle_lock, VAR_18);

 return VAR_20;
}
