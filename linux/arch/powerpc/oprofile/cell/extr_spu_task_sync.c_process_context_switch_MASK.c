
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu {unsigned int number; unsigned int pid; unsigned int tgid; } ;
struct TYPE_2__ {int ctx_sw_seen; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (struct spu*,unsigned int*,unsigned long*,unsigned long) ;
 int FUNC_1 (struct spu*,unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 TYPE_1__* VAR_4 ;
 int FUNC_5 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct spu *VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;
 unsigned int VAR_9 = 0;
 unsigned long VAR_10 = 0, VAR_11;

 VAR_8 = FUNC_1(VAR_5, VAR_6);
 if (VAR_8)
  goto out;




 VAR_11 = FUNC_0(VAR_5, &VAR_9, &VAR_10, VAR_6);
 if (!VAR_11 || !VAR_10) {
  VAR_8 = -VAR_0;
  goto out;
 }


 FUNC_3(&VAR_3, VAR_7);
 FUNC_5(VAR_1, VAR_5->number);
 FUNC_5(VAR_2, VAR_5->number);
 FUNC_5(VAR_5->number, VAR_5->number);
 FUNC_5(VAR_5->pid, VAR_5->number);
 FUNC_5(VAR_5->tgid, VAR_5->number);
 FUNC_5(VAR_11, VAR_5->number);
 FUNC_5(VAR_10, VAR_5->number);
 FUNC_5(VAR_9, VAR_5->number);





 VAR_4[VAR_5->number].ctx_sw_seen = 1;

 FUNC_4(&VAR_3, VAR_7);
 FUNC_2();

out:
 return VAR_8;
}
