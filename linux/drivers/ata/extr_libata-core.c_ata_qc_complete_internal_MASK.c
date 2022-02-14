
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct completion {int dummy; } ;
struct ata_queued_cmd {struct completion* private_data; } ;


 int FUNC_0 (struct completion*) ;

__attribute__((used)) static void FUNC_1(struct ata_queued_cmd *VAR_0)
{
 struct completion *VAR_1 = VAR_0->private_data;

 FUNC_0(VAR_1);
}
