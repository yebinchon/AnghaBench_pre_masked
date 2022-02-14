
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbva_flush {scalar_t__ reserved; } ;
struct gen_pool {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vbva_flush* FUNC_0 (struct gen_pool*,int,int ,int ) ;
 int FUNC_1 (struct gen_pool*,struct vbva_flush*) ;
 int FUNC_2 (struct gen_pool*,struct vbva_flush*) ;

__attribute__((used)) static void FUNC_3(struct gen_pool *VAR_2)
{
 struct vbva_flush *VAR_3;

 VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_3), VAR_0, VAR_1);
 if (!VAR_3)
  return;

 VAR_3->reserved = 0;

 FUNC_2(VAR_2, VAR_3);
 FUNC_1(VAR_2, VAR_3);
}
