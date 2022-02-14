
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint16_t ;
struct netflow_v9_flowset_header {int dummy; } ;
typedef TYPE_1__* priv_p ;
struct TYPE_7__ {int field_id; int field_length; } ;
struct TYPE_6__ {int flowsets_count; int* flowset_records; scalar_t__* v9_flowsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_6 ;
 TYPE_3__* VAR_7 ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ,int) ;

__attribute__((used)) static void
FUNC_3(priv_p VAR_8)
{
 uint16_t *VAR_9, *VAR_10;
 int VAR_11;

 int VAR_12 = sizeof(struct netflow_v9_flowset_header) +
  FUNC_0(VAR_6) +
  FUNC_0(VAR_7);

 VAR_8->v9_flowsets[0] = FUNC_2(VAR_12, VAR_0, VAR_1 | VAR_2);

 if (VAR_12 % 4)
  VAR_12 += 4 - (VAR_12 % 4);

 VAR_8->flowsets_count = 1;
 VAR_9 = (uint16_t *)VAR_8->v9_flowsets[0];
 *VAR_9++ = 0;
 *VAR_9++ = FUNC_1(VAR_12);




 *VAR_9++ = FUNC_1(VAR_5 + VAR_3);
 VAR_10 = VAR_9++;
 for (VAR_11 = 0; VAR_6[VAR_11].field_id != 0; VAR_11++) {
  *VAR_9++ = FUNC_1(VAR_6[VAR_11].field_id);
  *VAR_9++ = FUNC_1(VAR_6[VAR_11].field_length);
 }
 *VAR_10 = FUNC_1(VAR_11);




 *VAR_9++ = FUNC_1(VAR_5 + VAR_4);
 VAR_10 = VAR_9++;
 for (VAR_11 = 0; VAR_7[VAR_11].field_id != 0; VAR_11++) {
  *VAR_9++ = FUNC_1(VAR_7[VAR_11].field_id);
  *VAR_9++ = FUNC_1(VAR_7[VAR_11].field_length);
 }
 *VAR_10 = FUNC_1(VAR_11);

 VAR_8->flowset_records[0] = 2;
}
