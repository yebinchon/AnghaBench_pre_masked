
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct marvel_agp_aperture {scalar_t__ pg_start; int arena; } ;
struct agp_memory {int page_count; } ;
typedef scalar_t__ off_t ;
struct TYPE_4__ {struct marvel_agp_aperture* sysdata; } ;
struct TYPE_5__ {TYPE_1__ aperture; } ;
typedef TYPE_2__ alpha_agp_info ;


 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_1(alpha_agp_info *VAR_0, off_t VAR_1, struct agp_memory *VAR_2)
{
 struct marvel_agp_aperture *VAR_3 = VAR_0->aperture.sysdata;
 return FUNC_0(VAR_3->arena, VAR_3->pg_start + VAR_1,
       VAR_2->page_count);
}
