
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dmaaddr; int * start; } ;
struct lanai_dev {TYPE_1__ service; int pci; } ;


 int FUNC_0 (char*,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct lanai_dev*,int,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct lanai_dev *VAR_4)
{
 FUNC_3(&VAR_4->service, VAR_1 * 4, 8,
     VAR_4->pci);
 if (FUNC_7(VAR_4->service.start == ((void*)0)))
  return -VAR_0;
 FUNC_0("allocated service buffer at %p, size %zu(%d)\n",
     VAR_4->service.start,
     FUNC_4(&VAR_4->service),
     FUNC_5(&VAR_4->service));

 FUNC_6(VAR_4, 0, VAR_2);

 FUNC_6(VAR_4,
     FUNC_2(FUNC_5(&VAR_4->service)) |
     FUNC_1(VAR_4->service.dmaaddr),
     VAR_3);
 return 0;
}
