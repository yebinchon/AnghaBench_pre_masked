
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct intel_gvt {int dummy; } ;
struct cmd_info {int name; } ;
struct cmd_entry {TYPE_1__* info; int hlist; } ;
struct TYPE_3__ {unsigned int devices; scalar_t__ opcode; int rings; int flag; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct intel_gvt*,struct cmd_entry*) ;
 TYPE_1__* VAR_4 ;
 struct cmd_info* FUNC_3 (struct intel_gvt*,scalar_t__,int ) ;
 int FUNC_4 (char*,int ,scalar_t__,int ,unsigned int,int ) ;
 int FUNC_5 (char*,int ,int ) ;
 unsigned int FUNC_6 (struct intel_gvt*) ;
 int FUNC_7 (struct cmd_entry*) ;
 struct cmd_entry* FUNC_8 (int,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct intel_gvt *VAR_6)
{
 int VAR_7;
 struct cmd_entry *VAR_8;
 const struct cmd_info *VAR_9;
 unsigned int VAR_10;

 VAR_10 = FUNC_6(VAR_6);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++) {
  if (!(VAR_4[VAR_7].devices & VAR_10))
   continue;

  VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_2);
  if (!VAR_8)
   return -VAR_1;

  VAR_8->info = &VAR_4[VAR_7];
  VAR_9 = FUNC_3(VAR_6,
    VAR_8->info->opcode, VAR_8->info->rings);
  if (VAR_9) {
   FUNC_5("%s %s duplicated\n", VAR_8->info->name,
     VAR_9->name);
   FUNC_7(VAR_8);
   return -VAR_0;
  }
  if (VAR_4[VAR_7].opcode == VAR_3)
   VAR_5 = VAR_7;

  FUNC_1(&VAR_8->hlist);
  FUNC_2(VAR_6, VAR_8);
  FUNC_4("add %-30s op %04x flag %x devs %02x rings %02x\n",
    VAR_8->info->name, VAR_8->info->opcode, VAR_8->info->flag,
    VAR_8->info->devices, VAR_8->info->rings);
 }
 return 0;
}
