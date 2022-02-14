
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {scalar_t__ size; scalar_t__ data; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct firmware const**,char const*,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_0)
{
 char VAR_1[36] = "display_hdcp_srm.bin";
 const struct firmware *VAR_2;

 int VAR_3;

 VAR_3 = FUNC_2(&VAR_2, (const char *)VAR_1,
          VAR_0->dev);
 if (VAR_3 < 0)
  goto exit;

 if (VAR_2->size && VAR_2->data)
  FUNC_0(VAR_2->data, VAR_2->size);

exit:
 FUNC_1(VAR_2);
}
