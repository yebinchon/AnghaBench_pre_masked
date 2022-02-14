
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tpm_bios_log {void* bios_event_log_end; void* bios_event_log; } ;
struct tpm_chip {struct tpm_bios_log log; } ;
struct tcpa_event {int event_type; int event_size; } ;
struct seq_file {struct tpm_chip* private; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_0, loff_t *VAR_1)
{
 loff_t VAR_2 = 0;
 struct tpm_chip *VAR_3 = VAR_0->private;
 struct tpm_bios_log *VAR_4 = &VAR_3->log;
 void *VAR_5 = VAR_4->bios_event_log;
 void *VAR_6 = VAR_4->bios_event_log_end;
 struct tcpa_event *VAR_7;
 u32 VAR_8;
 u32 VAR_9;


 do {
  VAR_7 = VAR_5;


  if (VAR_5 + sizeof(struct tcpa_event) > VAR_6)
   return ((void*)0);

  VAR_8 =
      FUNC_0(VAR_7->event_size);
  VAR_9 =
      FUNC_0(VAR_7->event_type);

  if (((VAR_9 == 0) && (VAR_8 == 0))
      || ((VAR_5 + sizeof(struct tcpa_event) + VAR_8)
   > VAR_6))
   return ((void*)0);

  if (VAR_2++ == *VAR_1)
   break;

  VAR_5 += (sizeof(struct tcpa_event) + VAR_8);
 } while (1);

 return VAR_5;
}
