
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_lapic_irq {int dest_id; int msi_redir_hint; int delivery_mode; scalar_t__ level; scalar_t__ dest_mode; scalar_t__ shorthand; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm*,int *,struct kvm_lapic_irq*,int *) ;

__attribute__((used)) static void FUNC_1(struct kvm *VAR_1, unsigned long VAR_2, int VAR_3)
{
 struct kvm_lapic_irq VAR_4;

 VAR_4.shorthand = 0;
 VAR_4.dest_mode = 0;
 VAR_4.level = 0;
 VAR_4.dest_id = VAR_3;
 VAR_4.msi_redir_hint = 0;

 VAR_4.delivery_mode = VAR_0;
 FUNC_0(VAR_1, ((void*)0), &VAR_4, ((void*)0));
}
