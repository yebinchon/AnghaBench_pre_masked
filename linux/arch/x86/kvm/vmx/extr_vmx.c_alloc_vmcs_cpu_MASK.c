
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int shadow_vmcs; int revision_id; } ;
struct vmcs {TYPE_1__ hdr; } ;
struct page {int dummy; } ;
typedef int gfp_t ;
struct TYPE_4__ {int revision_id; int size; int order; } ;


 int VAR_0 ;
 struct page* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct vmcs*,int ,int ) ;
 struct vmcs* FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_2__ VAR_2 ;

struct vmcs *FUNC_5(bool VAR_3, int VAR_4, gfp_t VAR_5)
{
 int VAR_6 = FUNC_1(VAR_4);
 struct page *VAR_7;
 struct vmcs *VAR_8;

 VAR_7 = FUNC_0(VAR_6, VAR_5, VAR_2.order);
 if (!VAR_7)
  return ((void*)0);
 VAR_8 = FUNC_3(VAR_7);
 FUNC_2(VAR_8, 0, VAR_2.size);


 if (FUNC_4(&VAR_1))
  VAR_8->hdr.revision_id = VAR_0;
 else
  VAR_8->hdr.revision_id = VAR_2.revision_id;

 if (VAR_3)
  VAR_8->hdr.shadow_vmcs = 1;
 return VAR_8;
}
