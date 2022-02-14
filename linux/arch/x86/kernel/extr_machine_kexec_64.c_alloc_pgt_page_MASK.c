
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kimage {int dummy; } ;


 int FUNC_0 (void*) ;
 struct page* FUNC_1 (struct kimage*,int ) ;
 void* FUNC_2 (struct page*) ;

__attribute__((used)) static void *FUNC_3(void *VAR_0)
{
 struct kimage *VAR_1 = (struct kimage *)VAR_0;
 struct page *VAR_2;
 void *VAR_3 = ((void*)0);

 VAR_2 = FUNC_1(VAR_1, 0);
 if (VAR_2) {
  VAR_3 = FUNC_2(VAR_2);
  FUNC_0(VAR_3);
 }

 return VAR_3;
}
