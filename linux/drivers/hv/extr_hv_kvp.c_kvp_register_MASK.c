
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int operation; } ;
struct TYPE_4__ {char* version; } ;
struct TYPE_5__ {TYPE_1__ kvp_register; } ;
struct hv_kvp_msg {TYPE_3__ kvp_hdr; TYPE_2__ body; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct hv_kvp_msg*,int,int ) ;
 int FUNC_1 (struct hv_kvp_msg*) ;
 int VAR_3 ;
 struct hv_kvp_msg* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4(int VAR_4)
{

 struct hv_kvp_msg *VAR_5;
 char *VAR_6;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);

 if (VAR_5) {
  VAR_6 = VAR_5->body.kvp_register.version;
  VAR_5->kvp_hdr.operation = VAR_4;
  FUNC_3(VAR_6, VAR_1);

  FUNC_0(VAR_2, VAR_5, sizeof(*VAR_5),
          VAR_3);
  FUNC_1(VAR_5);
 }
}
