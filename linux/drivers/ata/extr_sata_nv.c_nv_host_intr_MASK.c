
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int flags; } ;
struct ata_queued_cmd {TYPE_2__ tf; } ;
struct TYPE_3__ {int active_tag; } ;
struct ata_port {TYPE_1__ link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ata_port*,struct ata_queued_cmd*) ;
 int FUNC_1 (struct ata_port*) ;
 struct ata_queued_cmd* FUNC_2 (struct ata_port*,int ) ;
 int FUNC_3 (struct ata_port*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ata_port *VAR_4, u8 VAR_5)
{
 struct ata_queued_cmd *VAR_6 = FUNC_2(VAR_4, VAR_4->link.active_tag);


 if (FUNC_4(VAR_5 & (VAR_1 | VAR_3))) {
  FUNC_1(VAR_4);
  return 1;
 }


 if (!(VAR_5 & VAR_2))
  return 0;


 if (FUNC_4(!VAR_6 || (VAR_6->tf.flags & VAR_0))) {
  FUNC_3(VAR_4);
  return 1;
 }


 return FUNC_0(VAR_4, VAR_6);
}
