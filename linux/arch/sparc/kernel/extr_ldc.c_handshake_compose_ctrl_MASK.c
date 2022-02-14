
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {int u_data; } ;
struct ldc_packet {TYPE_1__ u; void* ctrl; void* stype; int type; } ;
struct ldc_channel {int dummy; } ;


 int VAR_0 ;
 struct ldc_packet* FUNC_0 (struct ldc_channel*,unsigned long*) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (struct ldc_packet*,int ,int) ;

__attribute__((used)) static struct ldc_packet *FUNC_3(struct ldc_channel *VAR_1,
       u8 VAR_2, u8 VAR_3,
       void *VAR_4, int VAR_5,
       unsigned long *VAR_6)
{
 struct ldc_packet *VAR_7 = FUNC_0(VAR_1, VAR_6);

 if (VAR_7) {
  FUNC_2(VAR_7, 0, sizeof(*VAR_7));
  VAR_7->type = VAR_0;
  VAR_7->stype = VAR_2;
  VAR_7->ctrl = VAR_3;
  if (VAR_4)
   FUNC_1(VAR_7->u.u_data, VAR_4, VAR_5);
 }
 return VAR_7;
}
