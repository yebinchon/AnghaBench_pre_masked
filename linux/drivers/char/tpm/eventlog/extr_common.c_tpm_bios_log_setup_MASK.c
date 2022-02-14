
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * seqops; struct tpm_chip* chip; } ;
struct TYPE_3__ {int * seqops; struct tpm_chip* chip; } ;
struct tpm_chip {int flags; int ** bios_dir; TYPE_2__ ascii_log_seqops; TYPE_1__ bin_log_seqops; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 (char const*,int *) ;
 void* FUNC_4 (char*,int,int *,void*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct tpm_chip*) ;
 int VAR_5 ;
 int FUNC_6 (struct tpm_chip*) ;

int FUNC_7(struct tpm_chip *VAR_6)
{
 const char *VAR_7 = FUNC_2(&VAR_6->dev);
 unsigned int VAR_8;
 int VAR_9;
 int VAR_10 = 0;

 VAR_10 = FUNC_6(VAR_6);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_9 = VAR_10;

 VAR_8 = 0;
 VAR_6->bios_dir[VAR_8] = FUNC_3(VAR_7, ((void*)0));



 if (FUNC_0(VAR_6->bios_dir[VAR_8]))
  goto err;
 VAR_8++;

 VAR_6->bin_log_seqops.chip = VAR_6;
 if (VAR_9 == VAR_0)
  VAR_6->bin_log_seqops.seqops =
   &VAR_4;
 else
  VAR_6->bin_log_seqops.seqops =
   &VAR_3;


 VAR_6->bios_dir[VAR_8] =
     FUNC_4("binary_bios_measurements",
       0440, VAR_6->bios_dir[0],
       (void *)&VAR_6->bin_log_seqops,
       &VAR_5);
 if (FUNC_0(VAR_6->bios_dir[VAR_8]))
  goto err;
 VAR_8++;

 if (!(VAR_6->flags & VAR_1)) {

  VAR_6->ascii_log_seqops.chip = VAR_6;
  VAR_6->ascii_log_seqops.seqops =
   &VAR_2;

  VAR_6->bios_dir[VAR_8] =
   FUNC_4("ascii_bios_measurements",
            0440, VAR_6->bios_dir[0],
            (void *)&VAR_6->ascii_log_seqops,
            &VAR_5);
  if (FUNC_0(VAR_6->bios_dir[VAR_8]))
   goto err;
  VAR_8++;
 }

 return 0;

err:
 VAR_10 = FUNC_1(VAR_6->bios_dir[VAR_8]);
 VAR_6->bios_dir[VAR_8] = ((void*)0);
 FUNC_5(VAR_6);
 return VAR_10;
}
