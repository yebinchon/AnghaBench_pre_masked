
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_client_buffer {TYPE_2__* fb; TYPE_3__* client; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {TYPE_4__* dev; int file; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_1__ base; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct drm_client_buffer *VAR_0)
{
 int VAR_1;

 if (!VAR_0->fb)
  return;

 VAR_1 = FUNC_1(VAR_0->client->dev, VAR_0->fb->base.id, VAR_0->client->file);
 if (VAR_1)
  FUNC_0(VAR_0->client->dev->dev,
         "Error removing FB:%u (%d)\n", VAR_0->fb->base.id, VAR_1);

 VAR_0->fb = ((void*)0);
}
