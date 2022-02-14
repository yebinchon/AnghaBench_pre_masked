
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct gdromtoc {int dummy; } ;
struct cdrom_device_info {int dummy; } ;
struct TYPE_7__ {int events; int * fops; } ;
struct TYPE_6__ {void* cd_info; TYPE_3__* disk; int tag_set; int * gdrom_rq; void* toc; } ;


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
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *,int,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ,TYPE_1__*) ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 int FUNC_10 () ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (void*) ;
 void* FUNC_14 (int,int ) ;
 int FUNC_15 (char*,scalar_t__) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 scalar_t__ FUNC_20 (int ,int ) ;
 scalar_t__ FUNC_21 (void*) ;
 int FUNC_22 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_14)
{
 int VAR_15;

 if (FUNC_10() != 1) {
  FUNC_16("ATA Probe for GDROM failed\n");
  return -VAR_4;
 }

 if (FUNC_11())
  return -VAR_5;

 VAR_12 = FUNC_20(0, VAR_6);
 if (VAR_12 <= 0)
  return VAR_12;
 FUNC_15("Registered with major number %d\n",
  VAR_12);

 VAR_10.cd_info = FUNC_14(sizeof(struct cdrom_device_info), VAR_7);
 if (!VAR_10.cd_info) {
  VAR_15 = -VAR_5;
  goto probe_fail_no_mem;
 }
 FUNC_17();
 VAR_10.disk = FUNC_3(1);
 if (!VAR_10.disk) {
  VAR_15 = -VAR_4;
  goto probe_fail_no_disk;
 }
 FUNC_18();
 if (FUNC_21(VAR_10.cd_info)) {
  VAR_15 = -VAR_4;
  goto probe_fail_cdrom_register;
 }
 VAR_10.disk->fops = &VAR_11;
 VAR_10.disk->events = VAR_3;

 VAR_15 = FUNC_12();
 if (VAR_15)
  goto probe_fail_cmdirq_register;

 VAR_10.gdrom_rq = FUNC_6(&VAR_10.tag_set, &VAR_13, 1,
    VAR_2 | VAR_1);
 if (FUNC_0(VAR_10.gdrom_rq)) {
  VAR_15 = FUNC_1(VAR_10.gdrom_rq);
  VAR_10.gdrom_rq = ((void*)0);
  goto probe_fail_requestq;
 }

 FUNC_7(VAR_10.gdrom_rq, VAR_0);

 VAR_15 = FUNC_19();
 if (VAR_15)
  goto probe_fail_toc;

 VAR_10.toc = FUNC_14(sizeof(struct gdromtoc), VAR_7);
 if (!VAR_10.toc) {
  VAR_15 = -VAR_5;
  goto probe_fail_toc;
 }
 FUNC_2(VAR_10.disk);
 return 0;

probe_fail_toc:
 FUNC_4(VAR_10.gdrom_rq);
 FUNC_5(&VAR_10.tag_set);
probe_fail_requestq:
 FUNC_9(VAR_9, &VAR_10);
 FUNC_9(VAR_8, &VAR_10);
probe_fail_cmdirq_register:
probe_fail_cdrom_register:
 FUNC_8(VAR_10.disk);
probe_fail_no_disk:
 FUNC_13(VAR_10.cd_info);
probe_fail_no_mem:
 FUNC_22(VAR_12, VAR_6);
 VAR_12 = 0;
 FUNC_16("Probe failed - error is 0x%X\n", VAR_15);
 return VAR_15;
}
