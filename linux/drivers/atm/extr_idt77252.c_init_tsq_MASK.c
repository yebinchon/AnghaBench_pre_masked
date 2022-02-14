
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tsq_entry {int word_2; } ;
struct TYPE_4__ {unsigned long paddr; struct tsq_entry* base; struct tsq_entry* next; struct tsq_entry* last; } ;
struct idt77252_dev {TYPE_2__ tsq; int name; TYPE_1__* pcidev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct tsq_entry* FUNC_1 (int *,int ,unsigned long*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (unsigned long,int ) ;

__attribute__((used)) static int
FUNC_4(struct idt77252_dev *VAR_6)
{
 struct tsq_entry *VAR_7;

 VAR_6->tsq.base = FUNC_1(&VAR_6->pcidev->dev, VAR_1,
         &VAR_6->tsq.paddr, VAR_0);
 if (VAR_6->tsq.base == ((void*)0)) {
  FUNC_2("%s: can't allocate TSQ.\n", VAR_6->name);
  return -1;
 }

 VAR_6->tsq.last = VAR_6->tsq.base + VAR_5 - 1;
 VAR_6->tsq.next = VAR_6->tsq.last;
 for (VAR_7 = VAR_6->tsq.base; VAR_7 <= VAR_6->tsq.last; VAR_7++)
  VAR_7->word_2 = FUNC_0(VAR_4);

 FUNC_3(VAR_6->tsq.paddr, VAR_2);
 FUNC_3((unsigned long) VAR_6->tsq.next - (unsigned long) VAR_6->tsq.base,
        VAR_3);

 return 0;
}
