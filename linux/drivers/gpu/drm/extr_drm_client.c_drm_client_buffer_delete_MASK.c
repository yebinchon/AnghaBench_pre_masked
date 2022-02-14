
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct drm_client_buffer {TYPE_1__* client; scalar_t__ handle; scalar_t__ gem; int vaddr; } ;
struct TYPE_2__ {int file; struct drm_device* dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct drm_device*,scalar_t__,int ) ;
 int FUNC_3 (struct drm_client_buffer*) ;

__attribute__((used)) static void FUNC_4(struct drm_client_buffer *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->client->dev;

 FUNC_1(VAR_0->gem, VAR_0->vaddr);

 if (VAR_0->gem)
  FUNC_0(VAR_0->gem);

 if (VAR_0->handle)
  FUNC_2(VAR_1, VAR_0->handle, VAR_0->client->file);

 FUNC_3(VAR_0);
}
