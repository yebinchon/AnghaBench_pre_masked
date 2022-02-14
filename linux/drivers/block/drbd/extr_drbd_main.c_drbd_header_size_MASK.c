
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p_header95 {int dummy; } ;
struct p_header80 {int dummy; } ;
struct p_header100 {int dummy; } ;
struct drbd_connection {int agreed_pro_version; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

unsigned int FUNC_2(struct drbd_connection *VAR_0)
{
 if (VAR_0->agreed_pro_version >= 100) {
  FUNC_0(!FUNC_1(sizeof(struct p_header100), 8));
  return sizeof(struct p_header100);
 } else {
  FUNC_0(sizeof(struct p_header80) !=
        sizeof(struct p_header95));
  FUNC_0(!FUNC_1(sizeof(struct p_header80), 8));
  return sizeof(struct p_header80);
 }
}
