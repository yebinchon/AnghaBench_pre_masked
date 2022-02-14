
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vq_callback_t ;
typedef int u64 ;
struct virtqueue {struct virtio_uml_vq_info* priv; } ;
struct virtio_uml_vq_info {int kick_fd; int call_fd; int name; } ;
struct virtio_uml_device {struct platform_device* pdev; } ;
struct virtio_device {int dummy; } ;
struct platform_device {char* name; int id; } ;


 int VAR_0 ;
 struct virtqueue* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct virtio_uml_vq_info*) ;
 struct virtio_uml_vq_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int,char*,char*,int,char const*) ;
 struct virtio_uml_device* FUNC_6 (struct virtio_device*) ;
 int FUNC_7 (int ,struct virtqueue*) ;
 int FUNC_8 (struct virtio_uml_device*,unsigned int,int ,int ,int ,int ) ;
 int FUNC_9 (struct virtio_uml_device*,unsigned int,int ) ;
 int FUNC_10 (struct virtio_uml_device*,unsigned int,int) ;
 int FUNC_11 (struct virtqueue*) ;
 int FUNC_12 (struct virtqueue*) ;
 int FUNC_13 (struct virtqueue*) ;
 int FUNC_14 (struct virtqueue*) ;
 struct virtqueue* FUNC_15 (unsigned int,int,int ,struct virtio_device*,int,int,int,int ,int *,int ) ;
 int FUNC_16 (struct virtqueue*) ;
 int VAR_5 ;
 int FUNC_17 (struct virtio_uml_device*,struct virtqueue*) ;

__attribute__((used)) static struct virtqueue *FUNC_18(struct virtio_device *VAR_6,
         unsigned VAR_7, vq_callback_t *VAR_8,
         const char *VAR_9, bool VAR_10)
{
 struct virtio_uml_device *VAR_11 = FUNC_6(VAR_6);
 struct platform_device *VAR_12 = VAR_11->pdev;
 struct virtio_uml_vq_info *VAR_13;
 struct virtqueue *VAR_14;
 int VAR_15 = VAR_2;
 int VAR_16;

 VAR_13 = FUNC_2(sizeof(*VAR_13), VAR_1);
 if (!VAR_13) {
  VAR_16 = -VAR_0;
  goto error_kzalloc;
 }
 FUNC_5(VAR_13->name, sizeof(VAR_13->name), "%s.%d-%s", VAR_12->name,
   VAR_12->id, VAR_9);

 VAR_14 = FUNC_15(VAR_7, VAR_15, VAR_3, VAR_6, 1, 1,
        VAR_10, VAR_5, VAR_8, VAR_13->name);
 if (!VAR_14) {
  VAR_16 = -VAR_0;
  goto error_create;
 }
 VAR_14->priv = VAR_13;
 VAR_15 = FUNC_14(VAR_14);

 VAR_16 = FUNC_4(0, 0);
 if (VAR_16 < 0)
  goto error_kick;
 VAR_13->kick_fd = VAR_16;

 VAR_16 = FUNC_17(VAR_11, VAR_14);
 if (VAR_16)
  goto error_call;

 VAR_16 = FUNC_10(VAR_11, VAR_7, VAR_15);
 if (VAR_16)
  goto error_setup;

 VAR_16 = FUNC_9(VAR_11, VAR_7, 0);
 if (VAR_16)
  goto error_setup;

 VAR_16 = FUNC_8(VAR_11, VAR_7,
           FUNC_12(VAR_14),
           FUNC_13(VAR_14),
           FUNC_11(VAR_14),
           (u64) -1);
 if (VAR_16)
  goto error_setup;

 return VAR_14;

error_setup:
 FUNC_7(VAR_4, VAR_14);
 FUNC_3(VAR_13->call_fd);
error_call:
 FUNC_3(VAR_13->kick_fd);
error_kick:
 FUNC_16(VAR_14);
error_create:
 FUNC_1(VAR_13);
error_kzalloc:
 return FUNC_0(VAR_16);
}
