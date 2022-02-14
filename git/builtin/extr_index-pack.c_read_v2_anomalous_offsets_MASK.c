
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct packed_git {int const num_objects; scalar_t__ index_data; } ;
struct pack_idx_option {scalar_t__ anomaly_nr; void** anomaly; int anomaly_alloc; } ;
struct TYPE_2__ {int rawsz; } ;


 int FUNC_0 (void**,scalar_t__,int ) ;
 int FUNC_1 (void**,scalar_t__,int ) ;
 int FUNC_2 (struct packed_git*,int const*) ;
 int VAR_0 ;
 void* FUNC_3 (int const) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct packed_git *VAR_2,
          struct pack_idx_option *VAR_3)
{
 const uint32_t *VAR_4, *VAR_5;
 uint32_t VAR_6;
 const uint32_t VAR_7 = VAR_1->rawsz / sizeof(uint32_t);


 VAR_4 = (((const uint32_t *)VAR_2->index_data)
  + 2
  + 256
  + VAR_7 * VAR_2->num_objects
  + VAR_2->num_objects
  );


 VAR_5 = VAR_4 + VAR_2->num_objects;

 for (VAR_6 = 0; VAR_6 < VAR_2->num_objects; VAR_6++) {
  uint32_t VAR_8 = FUNC_3(VAR_4[VAR_6]);
  if (!(VAR_8 & 0x80000000))
   continue;
  VAR_8 = VAR_8 & 0x7fffffff;
  FUNC_2(VAR_2, &VAR_5[VAR_8 * 2]);
  if (VAR_5[VAR_8 * 2])
   continue;





  FUNC_0(VAR_3->anomaly, VAR_3->anomaly_nr + 1, VAR_3->anomaly_alloc);
  VAR_3->anomaly[VAR_3->anomaly_nr++] = FUNC_3(VAR_5[VAR_8 * 2 + 1]);
 }

 FUNC_1(VAR_3->anomaly, VAR_3->anomaly_nr, VAR_0);
}
