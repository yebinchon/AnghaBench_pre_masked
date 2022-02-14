
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * insn; } ;
struct optimized_kprobe {TYPE_2__ optinsn; } ;
struct TYPE_4__ {int * insn; } ;
struct kprobe {TYPE_1__ ainsn; scalar_t__ addr; } ;
typedef int kprobe_opcode_t ;
struct TYPE_6__ {int insn_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,char*) ;
 unsigned long FUNC_1 (struct kprobe*) ;
 int FUNC_2 (unsigned int*,unsigned long,int ) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (long) ;
 TYPE_3__ VAR_11 ;
 int * VAR_12 ;
 int FUNC_7 (int *,unsigned long,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (unsigned long,int *) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 (char*,int *,unsigned long) ;

int FUNC_13(struct optimized_kprobe *VAR_13, struct kprobe *VAR_14)
{
 kprobe_opcode_t *VAR_15, VAR_16, VAR_17;
 kprobe_opcode_t *VAR_18, *VAR_19;
 long VAR_20;
 unsigned long VAR_21, VAR_22;
 int VAR_23, VAR_24;

 VAR_11.insn_size = VAR_4;

 VAR_21 = FUNC_1(VAR_14);
 if (!VAR_21)
  return -VAR_1;


 VAR_15 = FUNC_5();
 if (!VAR_15)
  return -VAR_2;
 VAR_20 = (unsigned long)VAR_15 - (unsigned long)VAR_14->addr;
 if (!FUNC_6(VAR_20))
  goto error;


 VAR_20 = (unsigned long)(VAR_15 + VAR_10) -
   (unsigned long)VAR_21;
 if (!FUNC_6(VAR_20))
  goto error;



 VAR_22 = (VAR_7 * sizeof(kprobe_opcode_t)) / sizeof(int);
 FUNC_12("Copying template to %p, size %lu\n", VAR_15, VAR_22);
 for (VAR_24 = 0; VAR_24 < VAR_22; VAR_24++) {
  VAR_23 = FUNC_10(VAR_15 + VAR_24, *(VAR_12 + VAR_24));
  if (VAR_23 < 0)
   goto error;
 }





 FUNC_9((unsigned long)VAR_13, VAR_15 + VAR_9);




 VAR_18 = (kprobe_opcode_t *)FUNC_11("optimized_callback");
 VAR_19 = (kprobe_opcode_t *)FUNC_11("emulate_step");
 if (!VAR_18 || !VAR_19) {
  FUNC_0(1, "Unable to lookup optimized_callback()/emulate_step()\n");
  goto error;
 }

 VAR_16 = FUNC_2((unsigned int *)VAR_15 + VAR_5,
    (unsigned long)VAR_18,
    VAR_0);

 VAR_17 = FUNC_2((unsigned int *)VAR_15 + VAR_6,
    (unsigned long)VAR_19,
    VAR_0);

 if (!VAR_16 || !VAR_17)
  goto error;

 FUNC_10(VAR_15 + VAR_5, VAR_16);
 FUNC_10(VAR_15 + VAR_6, VAR_17);




 FUNC_8(*VAR_14->ainsn.insn, VAR_15 + VAR_8);




 FUNC_7(VAR_15 + VAR_10, (unsigned long)VAR_21, 0);

 FUNC_3((unsigned long)VAR_15,
      (unsigned long)(&VAR_15[VAR_7]));

 VAR_13->optinsn.insn = VAR_15;

 return 0;

error:
 FUNC_4(VAR_15, 0);
 return -VAR_3;

}
