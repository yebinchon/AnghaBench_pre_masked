
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {void* length; } ;
struct TYPE_5__ {void* length; void* hsn; void* tsn; } ;
struct TYPE_4__ {void* length; } ;
struct opal_header {TYPE_3__ cp; TYPE_2__ pkt; TYPE_1__ subpkt; } ;
struct opal_dev {int pos; scalar_t__* cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,struct opal_dev*,int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct opal_dev *VAR_6, u32 VAR_7, u32 VAR_8)
{
 struct opal_header *VAR_9;
 int VAR_10 = 0;






 FUNC_0(&VAR_10, VAR_6, VAR_3);

 FUNC_0(&VAR_10, VAR_6, VAR_4);
 FUNC_0(&VAR_10, VAR_6, VAR_5);
 FUNC_0(&VAR_10, VAR_6, 0);
 FUNC_0(&VAR_10, VAR_6, 0);
 FUNC_0(&VAR_10, VAR_6, 0);
 FUNC_0(&VAR_10, VAR_6, VAR_3);

 if (VAR_10) {
  FUNC_2("Error finalizing command.\n");
  return -VAR_0;
 }

 VAR_9 = (struct opal_header *) VAR_6->cmd;

 VAR_9->pkt.tsn = FUNC_1(VAR_8);
 VAR_9->pkt.hsn = FUNC_1(VAR_7);

 VAR_9->subpkt.length = FUNC_1(VAR_6->pos - sizeof(*VAR_9));
 while (VAR_6->pos % 4) {
  if (VAR_6->pos >= VAR_2) {
   FUNC_2("Error: Buffer overrun\n");
   return -VAR_1;
  }
  VAR_6->cmd[VAR_6->pos++] = 0;
 }
 VAR_9->pkt.length = FUNC_1(VAR_6->pos - sizeof(VAR_9->cp) -
          sizeof(VAR_9->pkt));
 VAR_9->cp.length = FUNC_1(VAR_6->pos - sizeof(VAR_9->cp));

 return 0;
}
