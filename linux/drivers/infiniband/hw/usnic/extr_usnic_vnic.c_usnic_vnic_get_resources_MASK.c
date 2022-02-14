
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_vnic_res_chunk {int cnt; int type; struct usnic_vnic* vnic; struct usnic_vnic_res** res; int free_cnt; } ;
struct usnic_vnic_res {void* owner; } ;
struct usnic_vnic {int res_lock; struct usnic_vnic_res_chunk* chunks; } ;
typedef enum usnic_vnic_res_type { ____Placeholder_usnic_vnic_res_type } usnic_vnic_res_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct usnic_vnic_res_chunk* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 struct usnic_vnic_res** FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct usnic_vnic_res_chunk*) ;
 struct usnic_vnic_res_chunk* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct usnic_vnic*,int) ;

struct usnic_vnic_res_chunk *
FUNC_8(struct usnic_vnic *VAR_3, enum usnic_vnic_res_type VAR_4,
    int VAR_5, void *VAR_6)
{
 struct usnic_vnic_res_chunk *VAR_7, *VAR_8;
 struct usnic_vnic_res *VAR_9;
 int VAR_10;

 if (FUNC_7(VAR_3, VAR_4) < VAR_5 || VAR_5 < 0 || !VAR_6)
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 if (VAR_5 > 0) {
  VAR_8->res = FUNC_2(VAR_5, sizeof(*(VAR_8->res)), VAR_2);
  if (!VAR_8->res) {
   FUNC_3(VAR_8);
   return FUNC_0(-VAR_1);
  }

  FUNC_5(&VAR_3->res_lock);
  VAR_7 = &VAR_3->chunks[VAR_4];
  for (VAR_10 = 0; VAR_10 < VAR_7->cnt && VAR_8->cnt < VAR_5; VAR_10++) {
   VAR_9 = VAR_7->res[VAR_10];
   if (!VAR_9->owner) {
    VAR_7->free_cnt--;
    VAR_9->owner = VAR_6;
    VAR_8->res[VAR_8->cnt++] = VAR_9;
   }
  }

  FUNC_6(&VAR_3->res_lock);
 }
 VAR_8->type = VAR_4;
 VAR_8->vnic = VAR_3;
 FUNC_1(VAR_8->cnt != VAR_5);

 return VAR_8;
}
