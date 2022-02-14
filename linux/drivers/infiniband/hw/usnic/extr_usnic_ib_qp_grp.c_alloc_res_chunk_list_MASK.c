
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usnic_vnic_res_spec {TYPE_1__* resources; } ;
struct usnic_vnic_res_chunk {int dummy; } ;
struct usnic_vnic {int dummy; } ;
typedef enum usnic_vnic_res_type { ____Placeholder_usnic_vnic_res_type } usnic_vnic_res_type ;
struct TYPE_2__ {scalar_t__ type; int cnt; } ;


 int VAR_0 ;
 struct usnic_vnic_res_chunk** FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct usnic_vnic_res_chunk*) ;
 int FUNC_2 (struct usnic_vnic_res_chunk*) ;
 scalar_t__ VAR_2 ;
 struct usnic_vnic_res_chunk** FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct usnic_vnic_res_chunk**) ;
 int FUNC_5 (char*,int ,int ,int) ;
 struct usnic_vnic_res_chunk* FUNC_6 (struct usnic_vnic*,int,int,void*) ;
 int FUNC_7 (struct usnic_vnic*) ;
 int FUNC_8 (struct usnic_vnic_res_chunk*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static struct usnic_vnic_res_chunk**
FUNC_10(struct usnic_vnic *VAR_3,
   struct usnic_vnic_res_spec *VAR_4, void *VAR_5)
{
 enum usnic_vnic_res_type VAR_6;
 struct usnic_vnic_res_chunk **VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 for (VAR_11 = 0;
  VAR_4->resources[VAR_11].type != VAR_2;
  VAR_11++) {

 }

 VAR_7 = FUNC_3(VAR_11 + 1, sizeof(*VAR_7),
     VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 for (VAR_9 = 0; VAR_4->resources[VAR_9].type != VAR_2;
  VAR_9++) {
  VAR_6 = VAR_4->resources[VAR_9].type;
  VAR_10 = VAR_4->resources[VAR_9].cnt;

  VAR_7[VAR_9] = FUNC_6(VAR_3, VAR_6,
     VAR_10, VAR_5);
  if (FUNC_1(VAR_7[VAR_9])) {
   VAR_8 = VAR_7[VAR_9] ?
     FUNC_2(VAR_7[VAR_9]) : -VAR_0;
   FUNC_5("Failed to get %s from %s with err %d\n",
    FUNC_9(VAR_6),
    FUNC_7(VAR_3),
    VAR_8);
   goto out_free_res;
  }
 }

 return VAR_7;

out_free_res:
 for (VAR_9--; VAR_9 >= 0; VAR_9--)
  FUNC_8(VAR_7[VAR_9]);
 FUNC_4(VAR_7);
 return FUNC_0(VAR_8);
}
