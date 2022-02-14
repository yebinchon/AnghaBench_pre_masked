
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {int prot_flags; } ;
struct TYPE_4__ {void* bg_type; } ;
struct TYPE_5__ {TYPE_1__ dif; } ;
struct TYPE_6__ {TYPE_2__ sig; void* sig_type; } ;
struct ib_sig_attrs {TYPE_3__ mem; TYPE_3__ wire; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;






 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct scsi_cmnd*,TYPE_3__*) ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static int
FUNC_3(struct scsi_cmnd *VAR_5, struct ib_sig_attrs *VAR_6)
{
 switch (FUNC_2(VAR_5)) {
 case 130:
 case 131:
  VAR_6->mem.sig_type = VAR_1;
  FUNC_1(VAR_5, &VAR_6->wire);
  VAR_6->wire.sig.dif.bg_type = VAR_2;
  break;
 case 133:
 case 128:
  VAR_6->wire.sig_type = VAR_1;
  FUNC_1(VAR_5, &VAR_6->mem);
  VAR_6->mem.sig.dif.bg_type = VAR_5->prot_flags & VAR_4 ?
      VAR_3 : VAR_2;
  break;
 case 132:
 case 129:
  FUNC_1(VAR_5, &VAR_6->wire);
  VAR_6->wire.sig.dif.bg_type = VAR_2;
  FUNC_1(VAR_5, &VAR_6->mem);
  VAR_6->mem.sig.dif.bg_type = VAR_5->prot_flags & VAR_4 ?
      VAR_3 : VAR_2;
  break;
 default:
  FUNC_0("Unsupported PI operation %d\n",
    FUNC_2(VAR_5));
  return -VAR_0;
 }

 return 0;
}
