
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct firmware {int size; scalar_t__ data; } ;
typedef int drm_r128_private_t ;
typedef int __be32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int const*) ;
 struct platform_device* FUNC_5 (char*,int ,int *,int ) ;
 int FUNC_6 (struct platform_device*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct firmware const*) ;
 int FUNC_10 (struct firmware const**,int ,int *) ;

__attribute__((used)) static int FUNC_11(drm_r128_private_t *VAR_5)
{
 struct platform_device *VAR_6;
 const struct firmware *VAR_7;
 const __be32 *VAR_8;
 int VAR_9, VAR_10;

 FUNC_0("\n");

 VAR_6 = FUNC_5("r128_cce", 0, ((void*)0), 0);
 if (FUNC_1(VAR_6)) {
  FUNC_7("r128_cce: Failed to register firmware\n");
  return FUNC_2(VAR_6);
 }
 VAR_9 = FUNC_10(&VAR_7, VAR_1, &VAR_6->dev);
 FUNC_6(VAR_6);
 if (VAR_9) {
  FUNC_7("r128_cce: Failed to load firmware \"%s\"\n",
         VAR_1);
  return VAR_9;
 }

 if (VAR_7->size != 256 * 8) {
  FUNC_7("r128_cce: Bogus length %zu in firmware \"%s\"\n",
         VAR_7->size, VAR_1);
  VAR_9 = -VAR_0;
  goto out_release;
 }

 FUNC_8(VAR_5);

 VAR_8 = (const __be32 *)VAR_7->data;
 FUNC_3(VAR_2, 0);
 for (VAR_10 = 0; VAR_10 < 256; VAR_10++) {
  FUNC_3(VAR_3,
      FUNC_4(&VAR_8[VAR_10 * 2]));
  FUNC_3(VAR_4,
      FUNC_4(&VAR_8[VAR_10 * 2 + 1]));
 }

out_release:
 FUNC_9(VAR_7);
 return VAR_9;
}
