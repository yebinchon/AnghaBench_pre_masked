
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nouveau_drm {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct nouveau_drm*,int,unsigned long*) ;
 struct page* FUNC_3 (unsigned long) ;

__attribute__((used)) static struct page *
FUNC_4(struct nouveau_drm *VAR_0)
{
 unsigned long VAR_1[1];
 struct page *VAR_2;
 int VAR_3;


 VAR_3 = FUNC_2(VAR_0, 1, VAR_1);
 if (VAR_3)
  return ((void*)0);

 VAR_2 = FUNC_3(VAR_1[0]);
 FUNC_0(VAR_2);
 FUNC_1(VAR_2);
 return VAR_2;
}
