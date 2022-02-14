
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct drbd_request {TYPE_1__* device; } ;
struct TYPE_2__ {int vnr; int minor; } ;


 int FUNC_0 (struct seq_file*,struct drbd_request*,unsigned long) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, struct drbd_request *VAR_1, unsigned long VAR_2)
{
 FUNC_1(VAR_0, "%u\t%u\t", VAR_1->device->minor, VAR_1->device->vnr);
 FUNC_0(VAR_0, VAR_1, VAR_2);
}
