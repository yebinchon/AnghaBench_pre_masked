
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_request {int kref; } ;
struct drbd_plug_cb {struct drbd_request* most_recent_req; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct drbd_plug_cb *VAR_1, struct drbd_request *VAR_2)
{
 struct drbd_request *VAR_3 = VAR_1->most_recent_req;


 FUNC_0(&VAR_2->kref);
 VAR_1->most_recent_req = VAR_2;
 if (VAR_3)
  FUNC_1(&VAR_3->kref, VAR_0);
}
