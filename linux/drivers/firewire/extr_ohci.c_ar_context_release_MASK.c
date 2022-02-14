
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ar_context {scalar_t__* pages; TYPE_2__* ohci; int buffer; } ;
struct TYPE_3__ {int device; } ;
struct TYPE_4__ {TYPE_1__ card; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ar_context*,unsigned int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ar_context *VAR_3)
{
 unsigned int VAR_4;

 FUNC_3(VAR_3->buffer);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_3->pages[VAR_4]) {
   FUNC_2(VAR_3->ohci->card.device,
           FUNC_1(VAR_3, VAR_4),
           VAR_2, VAR_1);
   FUNC_0(VAR_3->pages[VAR_4]);
  }
}
