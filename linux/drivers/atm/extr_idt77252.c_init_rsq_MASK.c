
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rsq_entry {scalar_t__ word_4; } ;
struct TYPE_4__ {unsigned long paddr; struct rsq_entry* base; struct rsq_entry* last; struct rsq_entry* next; } ;
struct idt77252_dev {int name; TYPE_2__ rsq; TYPE_1__* pcidev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,unsigned long,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct rsq_entry* FUNC_1 (int *,int ,unsigned long*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long,int ) ;

__attribute__((used)) static int
FUNC_5(struct idt77252_dev *VAR_6)
{
 struct rsq_entry *VAR_7;

 VAR_6->rsq.base = FUNC_1(&VAR_6->pcidev->dev, VAR_1,
         &VAR_6->rsq.paddr, VAR_0);
 if (VAR_6->rsq.base == ((void*)0)) {
  FUNC_2("%s: can't allocate RSQ.\n", VAR_6->name);
  return -1;
 }

 VAR_6->rsq.last = VAR_6->rsq.base + VAR_2 - 1;
 VAR_6->rsq.next = VAR_6->rsq.last;
 for (VAR_7 = VAR_6->rsq.base; VAR_7 <= VAR_6->rsq.last; VAR_7++)
  VAR_7->word_4 = 0;

 FUNC_4((unsigned long) VAR_6->rsq.last - (unsigned long) VAR_6->rsq.base,
        VAR_4);
 FUNC_4(VAR_6->rsq.paddr, VAR_3);

 FUNC_0("%s: RSQ base at 0x%lx (0x%x).\n", VAR_6->name,
  (unsigned long) VAR_6->rsq.base,
  FUNC_3(VAR_3));
 FUNC_0("%s: RSQ head = 0x%x, base = 0x%x, tail = 0x%x.\n",
  VAR_6->name,
  FUNC_3(VAR_4),
  FUNC_3(VAR_3),
  FUNC_3(VAR_5));

 return 0;
}
