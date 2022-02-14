
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_cmd {int prot_op; int prot_checks; } ;
struct TYPE_2__ {void* sig_type; } ;
struct ib_sig_attrs {int check_mask; TYPE_1__ mem; TYPE_1__ wire; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;






 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct se_cmd*,TYPE_1__*) ;
 int FUNC_2 (struct ib_sig_attrs*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct se_cmd *VAR_8, struct ib_sig_attrs *VAR_9)
{
 FUNC_2(VAR_9, 0, sizeof(*VAR_9));

 switch (VAR_8->prot_op) {
 case 133:
 case 128:
  VAR_9->mem.sig_type = VAR_4;
  FUNC_1(VAR_8, &VAR_9->wire);
  break;
 case 130:
 case 131:
  VAR_9->wire.sig_type = VAR_4;
  FUNC_1(VAR_8, &VAR_9->mem);
  break;
 case 132:
 case 129:
  FUNC_1(VAR_8, &VAR_9->wire);
  FUNC_1(VAR_8, &VAR_9->mem);
  break;
 default:
  FUNC_0("Unsupported PI operation %d\n", VAR_8->prot_op);
  return -VAR_0;
 }

 if (VAR_8->prot_checks & VAR_6)
  VAR_9->check_mask |= VAR_2;
 if (VAR_8->prot_checks & VAR_5)
  VAR_9->check_mask |= VAR_1;
 if (VAR_8->prot_checks & VAR_7)
  VAR_9->check_mask |= VAR_3;

 return 0;
}
