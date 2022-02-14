
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct TYPE_3__ {int possible_crtcs; } ;
struct ast_encoder {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (struct drm_device*,TYPE_1__*,int *,int ,int *) ;
 struct ast_encoder* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_5)
{
 struct ast_encoder *VAR_6;

 VAR_6 = FUNC_2(sizeof(struct ast_encoder), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 FUNC_1(VAR_5, &VAR_6->base, &VAR_3,
    VAR_0, ((void*)0));
 FUNC_0(&VAR_6->base, &VAR_4);

 VAR_6->base.possible_crtcs = 1;
 return 0;
}
