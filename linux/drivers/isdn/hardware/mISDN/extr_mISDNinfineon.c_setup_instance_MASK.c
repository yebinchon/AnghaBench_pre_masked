
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_14__ {scalar_t__ Bprotocols; } ;
struct TYPE_11__ {TYPE_7__ dev; } ;
struct TYPE_12__ {TYPE_3__ dch; int * hwlock; int name; } ;
struct TYPE_13__ {int (* release ) (TYPE_5__*) ;TYPE_4__ isac; void* ctrl; int * hwlock; int owner; int name; } ;
struct inf_hw {int list; TYPE_5__ ipac; int name; TYPE_2__* pdev; int lock; TYPE_1__* ci; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {char* name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inf_hw*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct inf_hw*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_7__*,int *,int ) ;
 int FUNC_5 (TYPE_7__*) ;
 scalar_t__ FUNC_6 (TYPE_5__*,struct inf_hw*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct inf_hw*) ;
 int FUNC_9 (struct inf_hw*) ;
 int FUNC_10 (int ,scalar_t__,char*,char*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static int
FUNC_15(struct inf_hw *VAR_6)
{
 int VAR_7;
 ulong VAR_8;

 FUNC_10(VAR_6->name, VAR_1 - 1, "%s.%d", VAR_6->ci->name,
   VAR_4 + 1);
 FUNC_13(&VAR_3, VAR_8);
 FUNC_2(&VAR_6->list, &VAR_0);
 FUNC_14(&VAR_3, VAR_8);

 FUNC_0(VAR_6);
 VAR_6->ipac.isac.name = VAR_6->name;
 VAR_6->ipac.name = VAR_6->name;
 VAR_6->ipac.owner = VAR_2;
 FUNC_11(&VAR_6->lock);
 VAR_6->ipac.isac.hwlock = &VAR_6->lock;
 VAR_6->ipac.hwlock = &VAR_6->lock;
 VAR_6->ipac.ctrl = (void *)&VAR_5;

 VAR_7 = FUNC_9(VAR_6);
 if (VAR_7)
  goto error_setup;

 VAR_6->ipac.isac.dch.dev.Bprotocols =
  FUNC_6(&VAR_6->ipac, VAR_6);

 if (VAR_6->ipac.isac.dch.dev.Bprotocols == 0)
  goto error_setup;

 VAR_7 = FUNC_4(&VAR_6->ipac.isac.dch.dev,
        &VAR_6->pdev->dev, VAR_6->name);
 if (VAR_7)
  goto error;

 VAR_7 = FUNC_1(VAR_6);
 if (!VAR_7) {
  VAR_4++;
  FUNC_7("Infineon %d cards installed\n", VAR_4);
  return 0;
 }
 FUNC_5(&VAR_6->ipac.isac.dch.dev);
error:
 VAR_6->ipac.release(&VAR_6->ipac);
error_setup:
 FUNC_8(VAR_6);
 FUNC_13(&VAR_3, VAR_8);
 FUNC_3(&VAR_6->list);
 FUNC_14(&VAR_3, VAR_8);
 return VAR_7;
}
