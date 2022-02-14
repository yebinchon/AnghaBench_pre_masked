
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct lc_element {int dummy; } ;
struct drbd_request {int dummy; } ;
struct drbd_peer_request {int dummy; } ;
struct bm_extent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_2 () ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct page* VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 int VAR_19 ;
 void* FUNC_3 (char*,int,int ,int ,int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int const,int *) ;
 int FUNC_6 (struct page*,unsigned long) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(void)
{
 struct page *VAR_20;
 const int VAR_21 = (VAR_2/VAR_6) * VAR_14;
 int VAR_22, VAR_23;


 VAR_18 = FUNC_3(
  "drbd_req", sizeof(struct drbd_request), 0, 0, ((void*)0));
 if (VAR_18 == ((void*)0))
  goto Enomem;

 VAR_9 = FUNC_3(
  "drbd_ee", sizeof(struct drbd_peer_request), 0, 0, ((void*)0));
 if (VAR_9 == ((void*)0))
  goto Enomem;

 VAR_8 = FUNC_3(
  "drbd_bm", sizeof(struct bm_extent), 0, 0, ((void*)0));
 if (VAR_8 == ((void*)0))
  goto Enomem;

 VAR_7 = FUNC_3(
  "drbd_al", sizeof(struct lc_element), 0, 0, ((void*)0));
 if (VAR_7 == ((void*)0))
  goto Enomem;


 VAR_23 = FUNC_1(&VAR_11, VAR_1, 0, 0);
 if (VAR_23)
  goto Enomem;

 VAR_23 = FUNC_1(&VAR_12, VAR_3, 0,
     VAR_0);
 if (VAR_23)
  goto Enomem;

 VAR_23 = FUNC_4(&VAR_13, VAR_3, 0);
 if (VAR_23)
  goto Enomem;

 VAR_23 = FUNC_5(&VAR_19, VAR_21,
         VAR_18);
 if (VAR_23)
  goto Enomem;

 VAR_23 = FUNC_5(&VAR_10, VAR_21, VAR_9);
 if (VAR_23)
  goto Enomem;


 FUNC_7(&VAR_15);

 for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++) {
  VAR_20 = FUNC_0(VAR_5);
  if (!VAR_20)
   goto Enomem;
  FUNC_6(VAR_20, (unsigned long)VAR_16);
  VAR_16 = VAR_20;
 }
 VAR_17 = VAR_21;

 return 0;

Enomem:
 FUNC_2();
 return -VAR_4;
}
