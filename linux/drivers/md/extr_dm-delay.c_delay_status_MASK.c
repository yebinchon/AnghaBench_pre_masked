
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_target {struct delay_c* private; } ;
struct TYPE_2__ {int ops; } ;
struct delay_c {int argc; TYPE_1__ flush; TYPE_1__ write; TYPE_1__ read; } ;
typedef int status_type_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*) ;



__attribute__((used)) static void FUNC_2(struct dm_target *VAR_0, status_type_t VAR_1,
    unsigned VAR_2, char *VAR_3, unsigned VAR_4)
{
 struct delay_c *VAR_5 = VAR_0->private;
 int VAR_6 = 0;

 switch (VAR_1) {
 case 129:
  FUNC_0("%u %u %u", VAR_5->read.ops, VAR_5->write.ops, VAR_5->flush.ops);
  break;

 case 128:
  FUNC_1(&VAR_5->read);
  if (VAR_5->argc >= 6) {
   FUNC_0(" ");
   FUNC_1(&VAR_5->write);
  }
  if (VAR_5->argc >= 9) {
   FUNC_0(" ");
   FUNC_1(&VAR_5->flush);
  }
  break;
 }
}
