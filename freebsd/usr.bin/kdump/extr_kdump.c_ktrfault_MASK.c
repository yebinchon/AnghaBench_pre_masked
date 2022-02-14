
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct ktr_fault {int type; scalar_t__ vaddr; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;

void
FUNC_2(struct ktr_fault *VAR_1)
{

 FUNC_1("0x%jx ", (uintmax_t)VAR_1->vaddr);
 FUNC_0(VAR_0, VAR_1->type);
 FUNC_1("\n");
}
