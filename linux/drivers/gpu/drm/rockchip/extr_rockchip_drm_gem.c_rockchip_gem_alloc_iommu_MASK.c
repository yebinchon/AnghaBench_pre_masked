
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_gem_object {int kvaddr; int num_pages; int pages; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rockchip_gem_object*) ;
 int FUNC_3 (struct rockchip_gem_object*) ;
 int FUNC_4 (struct rockchip_gem_object*) ;
 int FUNC_5 (struct rockchip_gem_object*) ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct rockchip_gem_object *VAR_3,
        bool VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5 < 0)
  goto err_free;

 if (VAR_4) {
  VAR_3->kvaddr = FUNC_6(VAR_3->pages, VAR_3->num_pages, VAR_2,
          FUNC_1(VAR_1));
  if (!VAR_3->kvaddr) {
   FUNC_0("failed to vmap() buffer\n");
   VAR_5 = -VAR_0;
   goto err_unmap;
  }
 }

 return 0;

err_unmap:
 FUNC_4(VAR_3);
err_free:
 FUNC_5(VAR_3);

 return VAR_5;
}
