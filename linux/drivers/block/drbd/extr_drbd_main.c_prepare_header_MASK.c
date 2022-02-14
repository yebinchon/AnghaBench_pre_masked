
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_connection {int agreed_pro_version; } ;
typedef enum drbd_packet { ____Placeholder_drbd_packet } drbd_packet ;


 int VAR_0 ;
 unsigned int FUNC_0 (void*,int,int,int) ;
 unsigned int FUNC_1 (void*,int,int) ;
 unsigned int FUNC_2 (void*,int,int) ;

__attribute__((used)) static unsigned int FUNC_3(struct drbd_connection *VAR_1, int VAR_2,
       void *VAR_3, enum drbd_packet VAR_4, int VAR_5)
{
 if (VAR_1->agreed_pro_version >= 100)
  return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_2);
 else if (VAR_1->agreed_pro_version >= 95 &&
   VAR_5 > VAR_0)
  return FUNC_2(VAR_3, VAR_4, VAR_5);
 else
  return FUNC_1(VAR_3, VAR_4, VAR_5);
}
