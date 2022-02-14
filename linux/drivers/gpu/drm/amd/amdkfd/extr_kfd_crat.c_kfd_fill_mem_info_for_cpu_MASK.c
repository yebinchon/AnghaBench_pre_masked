
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct crat_subtype_memory {int length; int proximity_domain; int length_high; int length_low; int flags; int type; } ;
struct TYPE_3__ {int * node_zones; } ;
typedef TYPE_1__ pg_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct crat_subtype_memory*,int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(int VAR_5, int *VAR_6,
   int VAR_7,
   struct crat_subtype_memory *VAR_8)
{
 uint64_t VAR_9 = 0;
 pg_data_t *VAR_10;
 int VAR_11;

 *VAR_6 -= sizeof(struct crat_subtype_memory);
 if (*VAR_6 < 0)
  return -VAR_2;

 FUNC_2(VAR_8, 0, sizeof(struct crat_subtype_memory));


 VAR_8->type = VAR_1;
 VAR_8->length = sizeof(struct crat_subtype_memory);
 VAR_8->flags = VAR_0;







 VAR_10 = FUNC_0(VAR_5);
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
  VAR_9 += FUNC_4(&VAR_10->node_zones[VAR_11]);
 VAR_9 <<= VAR_4;

 VAR_8->length_low = FUNC_1(VAR_9);
 VAR_8->length_high = FUNC_3(VAR_9);
 VAR_8->proximity_domain = VAR_7;

 return 0;
}
