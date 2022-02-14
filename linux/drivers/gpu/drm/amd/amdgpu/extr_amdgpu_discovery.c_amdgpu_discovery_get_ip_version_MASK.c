
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct ip_discovery_header {TYPE_2__* die_info; int num_dies; } ;
struct ip {int major; int minor; int num_base_address; int hw_id; } ;
struct die_header {int num_ips; } ;
struct binary_header {TYPE_1__* table_list; } ;
struct amdgpu_device {int discovery; } ;
struct TYPE_4__ {int die_offset; } ;
struct TYPE_3__ {int offset; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ) ;

int FUNC_2(struct amdgpu_device *VAR_2, int VAR_3,
        int *VAR_4, int *VAR_5)
{
 struct binary_header *VAR_6;
 struct ip_discovery_header *VAR_7;
 struct die_header *VAR_8;
 struct ip *VAR_9;
 uint16_t VAR_10;
 uint16_t VAR_11;
 uint16_t VAR_12;
 uint16_t VAR_13;
 int VAR_14, VAR_15;

 if (!VAR_2->discovery) {
  FUNC_0("ip discovery uninitialized\n");
  return -VAR_0;
 }

 VAR_6 = (struct binary_header *)VAR_2->discovery;
 VAR_7 = (struct ip_discovery_header *)(VAR_2->discovery +
   FUNC_1(VAR_6->table_list[VAR_1].offset));
 VAR_12 = FUNC_1(VAR_7->num_dies);

 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
  VAR_10 = FUNC_1(VAR_7->die_info[VAR_14].die_offset);
  VAR_8 = (struct die_header *)(VAR_2->discovery + VAR_10);
  VAR_13 = FUNC_1(VAR_8->num_ips);
  VAR_11 = VAR_10 + sizeof(*VAR_8);

  for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
   VAR_9 = (struct ip *)(VAR_2->discovery + VAR_11);

   if (FUNC_1(VAR_9->hw_id) == VAR_3) {
    if (VAR_4)
     *VAR_4 = VAR_9->major;
    if (VAR_5)
     *VAR_5 = VAR_9->minor;
    return 0;
   }
   VAR_11 += sizeof(*VAR_9) + 4 * (VAR_9->num_base_address - 1);
  }
 }

 return -VAR_0;
}
