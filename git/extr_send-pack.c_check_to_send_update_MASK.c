
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_pack_args {int send_mirror; } ;
struct ref {int status; int peer_ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
__attribute__((used)) static int FUNC_0(const struct ref *VAR_3, const struct send_pack_args *VAR_4)
{
 if (!VAR_3->peer_ref && !VAR_4->send_mirror)
  return VAR_0;


 switch (VAR_3->status) {
 case 130:
 case 134:
 case 133:
 case 132:
 case 129:
 case 131:
  return VAR_1;
 case 128:
  return VAR_2;
 default:
  return 0;
 }
}
