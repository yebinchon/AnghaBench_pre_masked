
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ar_context {TYPE_2__* ohci; } ;
struct TYPE_3__ {int device; } ;
struct TYPE_4__ {TYPE_1__ card; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct ar_context*,unsigned int) ;
 unsigned int FUNC_1 (struct ar_context*) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int ,unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(struct ar_context *VAR_2,
        unsigned int VAR_3,
        unsigned int VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 while (VAR_5 != VAR_3) {
  FUNC_3(VAR_2->ohci->card.device,
     FUNC_0(VAR_2, VAR_5),
     VAR_1, VAR_0);
  VAR_5 = FUNC_2(VAR_5);
 }
 if (VAR_4 > 0)
  FUNC_3(VAR_2->ohci->card.device,
     FUNC_0(VAR_2, VAR_5),
     VAR_4, VAR_0);
}
