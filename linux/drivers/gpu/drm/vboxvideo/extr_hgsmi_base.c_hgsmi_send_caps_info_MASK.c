
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vbva_caps {scalar_t__ rc; int caps; } ;
struct gen_pool {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 struct vbva_caps* FUNC_1 (struct gen_pool*,int,int ,int ) ;
 int FUNC_2 (struct gen_pool*,struct vbva_caps*) ;
 int FUNC_3 (struct gen_pool*,struct vbva_caps*) ;

int FUNC_4(struct gen_pool *VAR_4, u32 VAR_5)
{
 struct vbva_caps *VAR_6;

 VAR_6 = FUNC_1(VAR_4, sizeof(*VAR_6), VAR_1, VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->rc = VAR_3;
 VAR_6->caps = VAR_5;

 FUNC_3(VAR_4, VAR_6);

 FUNC_0(VAR_6->rc < 0);

 FUNC_2(VAR_4, VAR_6);

 return 0;
}
