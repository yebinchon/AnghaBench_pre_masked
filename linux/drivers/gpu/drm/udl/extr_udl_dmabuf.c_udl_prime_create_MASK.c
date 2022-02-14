
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udl_gem_object {int * pages; struct sg_table* sg; } ;
struct sg_table {int dummy; } ;
struct page {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct sg_table*,int *,int *,int) ;
 int * FUNC_2 (int,int,int ) ;
 struct udl_gem_object* FUNC_3 (struct drm_device*,int) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_3,
       size_t VAR_4,
       struct sg_table *VAR_5,
       struct udl_gem_object **VAR_6)
{
 struct udl_gem_object *VAR_7;
 int VAR_8;

 VAR_8 = VAR_4 / VAR_2;

 *VAR_6 = ((void*)0);
 VAR_7 = FUNC_3(VAR_3, VAR_8 * VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->sg = VAR_5;
 VAR_7->pages = FUNC_2(VAR_8, sizeof(struct page *), VAR_1);
 if (VAR_7->pages == ((void*)0)) {
  FUNC_0("obj pages is NULL %d\n", VAR_8);
  return -VAR_0;
 }

 FUNC_1(VAR_5, VAR_7->pages, ((void*)0), VAR_8);

 *VAR_6 = VAR_7;
 return 0;
}
