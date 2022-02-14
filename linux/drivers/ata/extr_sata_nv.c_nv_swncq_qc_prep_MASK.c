
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ protocol; } ;
struct ata_queued_cmd {int flags; TYPE_1__ tf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_queued_cmd*) ;
 int FUNC_1 (struct ata_queued_cmd*) ;

__attribute__((used)) static void FUNC_2(struct ata_queued_cmd *VAR_2)
{
 if (VAR_2->tf.protocol != VAR_0) {
  FUNC_0(VAR_2);
  return;
 }

 if (!(VAR_2->flags & VAR_1))
  return;

 FUNC_1(VAR_2);
}
