
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct virtio_uml_platform_data {char* socket_path; int virtio_device_id; } ;
struct platform_device {int dummy; } ;
struct kernel_param {int dummy; } ;
typedef int pdata ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,int,int ) ;
 struct platform_device* FUNC_4 (int *,char*,int ,struct virtio_uml_platform_data*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,unsigned int,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*,char*,unsigned int*,int*,int *,int*) ;
 char* FUNC_9 (char const*,char) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_10(const char *VAR_6, const struct kernel_param *VAR_7)
{
 const char *VAR_8 = FUNC_9(VAR_6, ':');
 unsigned int VAR_9;
 int VAR_10, VAR_11, VAR_12;
 char *VAR_13;
 struct virtio_uml_platform_data VAR_14;
 struct platform_device *VAR_15;

 if (!VAR_8 || VAR_8 == VAR_6)
  return -VAR_0;

 VAR_10 = FUNC_8(VAR_8, ":%u%n:%d%n",
      &VAR_9, &VAR_11,
      &VAR_3, &VAR_11);

 if (VAR_10 < 1 || VAR_8[VAR_11])
  return -VAR_0;

 if (!VAR_5) {
  VAR_12 = FUNC_1(&VAR_4);
  if (VAR_12) {
   FUNC_5("Failed to register parent device!\n");
   FUNC_7(&VAR_4);
   return VAR_12;
  }
  VAR_5 = 1;
 }

 VAR_13 = FUNC_3(VAR_6, VAR_8 - VAR_6, VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_14.virtio_device_id = (u32) VAR_9;
 VAR_14.socket_path = VAR_13;

 FUNC_6("Registering device virtio-uml.%d id=%d at %s\n",
  VAR_3, VAR_9, VAR_13);

 VAR_15 = FUNC_4(&VAR_4, "virtio-uml",
          VAR_3++, &VAR_14,
          sizeof(VAR_14));
 VAR_12 = FUNC_0(VAR_15);
 if (VAR_12)
  goto free;
 return 0;

free:
 FUNC_2(VAR_13);
 return VAR_12;
}
