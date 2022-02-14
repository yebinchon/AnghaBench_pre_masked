
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u_char ;
struct TYPE_7__ {int* length; int* version; } ;
struct TYPE_8__ {int* len_id; int* len_des; int* len_src; scalar_t__ ext_data; void** ext_ver; TYPE_1__ h; } ;
struct TYPE_9__ {TYPE_2__ ER; } ;
struct TYPE_10__ {TYPE_3__ su_entry; } ;
struct ISO_SUSP_ATTRIBUTES {TYPE_4__ attr; } ;
struct TYPE_11__ {int head; } ;
typedef TYPE_5__ cd9660node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct ISO_SUSP_ATTRIBUTES*,int ) ;
 int FUNC_1 (int) ;
 struct ISO_SUSP_ATTRIBUTES* FUNC_2 (int ,int ,char*,int ) ;
 int FUNC_3 (scalar_t__,char const*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char const*) ;

struct ISO_SUSP_ATTRIBUTES*
FUNC_5(cd9660node *VAR_4,
        u_char VAR_5, const char* VAR_6, const char* VAR_7,
        const char* VAR_8)
{
 int VAR_9;
 struct ISO_SUSP_ATTRIBUTES *VAR_10;

 VAR_10 = FUNC_2(VAR_2,
   VAR_0, "ER", VAR_1);


 VAR_10->attr.su_entry.ER.h.length[0] = 8;
 VAR_10->attr.su_entry.ER.h.version[0] = 1;

 VAR_10->attr.su_entry.ER.len_id[0] = (u_char)FUNC_4(VAR_6);
 VAR_10->attr.su_entry.ER.len_des[0] = (u_char)FUNC_4(VAR_7);
 VAR_10->attr.su_entry.ER.len_src[0] = (u_char)FUNC_4(VAR_8);

 VAR_9 = VAR_10->attr.su_entry.ER.len_id[0] +
  VAR_10->attr.su_entry.ER.len_src[0] +
  VAR_10->attr.su_entry.ER.len_des[0];


 FUNC_1(VAR_9 + VAR_10->attr.su_entry.ER.h.length[0] <= 254);

 VAR_10->attr.su_entry.ER.h.length[0] += (u_char)VAR_9;


 VAR_10->attr.su_entry.ER.ext_ver[0] = VAR_5;
 FUNC_3(VAR_10->attr.su_entry.ER.ext_data, VAR_6,
  (int)VAR_10->attr.su_entry.ER.len_id[0]);
 VAR_9 = (int) VAR_10->attr.su_entry.ER.len_id[0];
 FUNC_3(VAR_10->attr.su_entry.ER.ext_data + VAR_9,VAR_7,
  (int)VAR_10->attr.su_entry.ER.len_des[0]);

 VAR_9 += (int)VAR_10->attr.su_entry.ER.len_des[0];
 FUNC_3(VAR_10->attr.su_entry.ER.ext_data + VAR_9,VAR_8,
  (int)VAR_10->attr.su_entry.ER.len_src[0]);

 FUNC_0(&VAR_4->head, VAR_10, VAR_3);
 return VAR_10;
}
