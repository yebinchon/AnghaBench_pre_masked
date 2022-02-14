
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_queued_cmd {int nbytes; int curbytes; int sect_size; int ap; TYPE_1__* dev; int tf; } ;
struct TYPE_2__ {scalar_t__ multi_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ata_queued_cmd*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 unsigned int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ata_queued_cmd *VAR_0)
{
 if (FUNC_3(&VAR_0->tf)) {

  unsigned int VAR_1;

  FUNC_0(VAR_0->dev->multi_count == 0);

  VAR_1 = FUNC_4((VAR_0->nbytes - VAR_0->curbytes) / VAR_0->sect_size,
       VAR_0->dev->multi_count);
  while (VAR_1--)
   FUNC_1(VAR_0);
 } else
  FUNC_1(VAR_0);

 FUNC_2(VAR_0->ap);
}
