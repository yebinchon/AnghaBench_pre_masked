
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_connection {scalar_t__ state; int hd_cport_id; int hd; int wq; int hd_links; int bundle_links; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gb_connection*) ;
 int VAR_2 ;
 int FUNC_3 (struct gb_connection*) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct gb_connection *VAR_4)
{
 if (!VAR_4)
  return;

 if (FUNC_0(VAR_4->state != VAR_1))
  FUNC_2(VAR_4);

 FUNC_6(&VAR_2);

 FUNC_8(&VAR_3);
 FUNC_5(&VAR_4->bundle_links);
 FUNC_5(&VAR_4->hd_links);
 FUNC_9(&VAR_3);

 FUNC_1(VAR_4->wq);

 FUNC_4(VAR_4->hd, VAR_4->hd_cport_id);
 VAR_4->hd_cport_id = VAR_0;

 FUNC_7(&VAR_2);

 FUNC_3(VAR_4);
}
