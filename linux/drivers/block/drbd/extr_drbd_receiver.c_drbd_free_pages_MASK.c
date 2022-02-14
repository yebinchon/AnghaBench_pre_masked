
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct drbd_device {int pp_in_use; int pp_in_use_by_net; } ;
typedef int atomic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct drbd_device*,char*,char*,int) ;
 int FUNC_2 (int *,struct page*,struct page*) ;
 int FUNC_3 (struct page*) ;
 struct page* FUNC_4 (struct page*,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct drbd_device *VAR_7, struct page *VAR_8, int VAR_9)
{
 atomic_t *VAR_10 = VAR_9 ? &VAR_7->pp_in_use_by_net : &VAR_7->pp_in_use;
 int VAR_11;

 if (VAR_8 == ((void*)0))
  return;

 if (VAR_5 > (VAR_0/VAR_1) * VAR_2)
  VAR_11 = FUNC_3(VAR_8);
 else {
  struct page *VAR_12;
  VAR_12 = FUNC_4(VAR_8, &VAR_11);
  FUNC_5(&VAR_3);
  FUNC_2(&VAR_4, VAR_8, VAR_12);
  VAR_5 += VAR_11;
  FUNC_6(&VAR_3);
 }
 VAR_11 = FUNC_0(VAR_11, VAR_10);
 if (VAR_11 < 0)
  FUNC_1(VAR_7, "ASSERTION FAILED: %s: %d < 0\n",
   VAR_9 ? "pp_in_use_by_net" : "pp_in_use", VAR_11);
 FUNC_7(&VAR_6);
}
