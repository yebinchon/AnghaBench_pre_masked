
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void page ;
struct crypt_config {int n_allocated_pages; } ;
typedef int gfp_t ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void *FUNC_5(gfp_t VAR_2, void *VAR_3)
{
 struct crypt_config *VAR_4 = VAR_3;
 struct page *VAR_5;

 if (FUNC_4(FUNC_3(&VAR_4->n_allocated_pages, VAR_1) >= 0) &&
     FUNC_1(VAR_2 & VAR_0))
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_2);
 if (FUNC_1(VAR_5 != ((void*)0)))
  FUNC_2(&VAR_4->n_allocated_pages, 1);

 return VAR_5;
}
