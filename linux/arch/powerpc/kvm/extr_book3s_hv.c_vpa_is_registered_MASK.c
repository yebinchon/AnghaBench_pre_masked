
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vpa {scalar_t__ next_gpa; int * pinned_addr; scalar_t__ update_pending; } ;



__attribute__((used)) static int FUNC_0(struct kvmppc_vpa *VAR_0)
{
 if (VAR_0->update_pending)
  return VAR_0->next_gpa != 0;
 return VAR_0->pinned_addr != ((void*)0);
}
