
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mdp5_kms {int cfg; } ;
struct TYPE_8__ {int caps; int base; int count; } ;
struct TYPE_7__ {int caps; int base; int count; } ;
struct TYPE_6__ {int caps; int base; int count; } ;
struct TYPE_5__ {int caps; int base; int count; } ;
struct mdp5_cfg_hw {TYPE_4__ pipe_cursor; TYPE_3__ pipe_dma; TYPE_2__ pipe_vig; TYPE_1__ pipe_rgb; } ;
typedef enum mdp5_pipe { ____Placeholder_mdp5_pipe } mdp5_pipe ;
 int FUNC_0 (struct mdp5_kms*,int ,int const*,int ,int ) ;
 struct mdp5_cfg_hw* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mdp5_kms *VAR_0)
{
 static const enum mdp5_pipe VAR_1[] = {
   135, 134, 133, 132,
 };
 static const enum mdp5_pipe VAR_2[] = {
   131, 130, 129, 128,
 };
 static const enum mdp5_pipe VAR_3[] = {
   137, 136,
 };
 static const enum mdp5_pipe VAR_4[] = {
   139, 138,
 };
 const struct mdp5_cfg_hw *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_0->cfg);


 VAR_6 = FUNC_0(VAR_0, VAR_5->pipe_rgb.count, VAR_1,
   VAR_5->pipe_rgb.base, VAR_5->pipe_rgb.caps);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_0(VAR_0, VAR_5->pipe_vig.count, VAR_2,
   VAR_5->pipe_vig.base, VAR_5->pipe_vig.caps);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_0(VAR_0, VAR_5->pipe_dma.count, VAR_3,
   VAR_5->pipe_dma.base, VAR_5->pipe_dma.caps);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_0(VAR_0, VAR_5->pipe_cursor.count,
   VAR_4, VAR_5->pipe_cursor.base,
   VAR_5->pipe_cursor.caps);
 if (VAR_6)
  return VAR_6;

 return 0;
}
