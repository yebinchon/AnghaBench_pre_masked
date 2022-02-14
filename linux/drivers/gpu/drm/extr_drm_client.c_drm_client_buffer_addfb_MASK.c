
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct drm_mode_fb_cmd {int bpp; int fb_id; int pitch; int handle; void* height; void* width; int depth; } ;
struct drm_format_info {int* cpp; int depth; } ;
struct drm_client_dev {int name; int file; int dev; } ;
struct drm_client_buffer {TYPE_1__* fb; struct drm_client_dev* client; int pitch; int handle; } ;
struct TYPE_3__ {int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct drm_format_info* FUNC_1 (void*) ;
 TYPE_1__* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,struct drm_mode_fb_cmd*,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct drm_client_buffer *VAR_2,
       u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct drm_client_dev *VAR_6 = VAR_2->client;
 struct drm_mode_fb_cmd VAR_7 = { };
 const struct drm_format_info *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_5);
 VAR_7.bpp = VAR_8->cpp[0] * 8;
 VAR_7.depth = VAR_8->depth;
 VAR_7.width = VAR_3;
 VAR_7.height = VAR_4;
 VAR_7.handle = VAR_2->handle;
 VAR_7.pitch = VAR_2->pitch;

 VAR_9 = FUNC_4(VAR_6->dev, &VAR_7, VAR_6->file);
 if (VAR_9)
  return VAR_9;

 VAR_2->fb = FUNC_2(VAR_6->dev, VAR_2->client->file, VAR_7.fb_id);
 if (FUNC_0(!VAR_2->fb))
  return -VAR_0;


 FUNC_3(VAR_2->fb);

 FUNC_5(VAR_2->fb->comm, VAR_6->name, VAR_1);

 return 0;
}
