
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc_cycle_para {int opflags; int csize; } ;
struct hisi_lpc_dev {int cycle_lock; scalar_t__ membase; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__,unsigned char*,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (scalar_t__,unsigned int) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct hisi_lpc_dev *VAR_11,
         struct lpc_cycle_para *VAR_12, unsigned long VAR_13,
         unsigned char *VAR_14, unsigned long VAR_15)
{
 unsigned int VAR_16;
 unsigned int VAR_17;
 unsigned long VAR_18;
 int VAR_19;

 if (!VAR_14 || !VAR_15 || !VAR_12 || !VAR_12->csize || !VAR_11)
  return -VAR_0;

 VAR_16 = 0;
 VAR_17 = VAR_3;
 if (!(VAR_12->opflags & VAR_1)) {
  VAR_16 |= VAR_6;
  VAR_17 = VAR_2;
 }


 FUNC_1(&VAR_11->cycle_lock, VAR_18);

 FUNC_5(VAR_15, VAR_11->membase + VAR_7);
 FUNC_5(VAR_16, VAR_11->membase + VAR_5);
 FUNC_5(VAR_13, VAR_11->membase + VAR_4);

 FUNC_4(VAR_10,
        VAR_11->membase + VAR_9);


 VAR_19 = FUNC_3(VAR_11->membase, VAR_17);
 if (VAR_19) {
  FUNC_2(&VAR_11->cycle_lock, VAR_18);
  return VAR_19;
 }

 FUNC_0(VAR_11->membase + VAR_8, VAR_14, VAR_15);

 FUNC_2(&VAR_11->cycle_lock, VAR_18);

 return 0;
}
