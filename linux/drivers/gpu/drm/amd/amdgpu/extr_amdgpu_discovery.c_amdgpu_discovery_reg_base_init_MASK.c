
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct ip_discovery_header {TYPE_2__* die_info; int num_dies; } ;
struct ip {int num_base_address; size_t number_instance; int* base_address; int hw_id; int revision; int minor; int major; } ;
struct die_header {int die_id; int num_ips; } ;
struct binary_header {TYPE_1__* table_list; } ;
struct amdgpu_device {int discovery; int*** reg_offset; } ;
struct TYPE_4__ {int die_offset; } ;
struct TYPE_3__ {int offset; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t* VAR_3 ;
 int * VAR_4 ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int) ;

int FUNC_5(struct amdgpu_device *VAR_5)
{
 struct binary_header *VAR_6;
 struct ip_discovery_header *VAR_7;
 struct die_header *VAR_8;
 struct ip *VAR_9;
 uint16_t VAR_10;
 uint16_t VAR_11;
 uint16_t VAR_12;
 uint16_t VAR_13;
 uint8_t VAR_14;
 int VAR_15;
 int VAR_16, VAR_17, VAR_18;

 if (!VAR_5->discovery) {
  FUNC_1("ip discovery uninitialized\n");
  return -VAR_0;
 }

 VAR_6 = (struct binary_header *)VAR_5->discovery;
 VAR_7 = (struct ip_discovery_header *)(VAR_5->discovery +
   FUNC_3(VAR_6->table_list[VAR_1].offset));
 VAR_12 = FUNC_3(VAR_7->num_dies);

 FUNC_0("number of dies: %d\n", VAR_12);

 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++) {
  VAR_10 = FUNC_3(VAR_7->die_info[VAR_16].die_offset);
  VAR_8 = (struct die_header *)(VAR_5->discovery + VAR_10);
  VAR_13 = FUNC_3(VAR_8->num_ips);
  VAR_11 = VAR_10 + sizeof(*VAR_8);

  if (FUNC_3(VAR_8->die_id) != VAR_16) {
   FUNC_1("invalid die id %d, expected %d\n",
     FUNC_3(VAR_8->die_id), VAR_16);
   return -VAR_0;
  }

  FUNC_0("number of hardware IPs on die%d: %d\n",
    FUNC_3(VAR_8->die_id), VAR_13);

  for (VAR_17 = 0; VAR_17 < VAR_13; VAR_17++) {
   VAR_9 = (struct ip *)(VAR_5->discovery + VAR_11);
   VAR_14 = VAR_9->num_base_address;

   FUNC_0("%s(%d) #%d v%d.%d.%d:\n",
      VAR_4[FUNC_3(VAR_9->hw_id)],
      FUNC_3(VAR_9->hw_id),
      VAR_9->number_instance,
      VAR_9->major, VAR_9->minor,
      VAR_9->revision);

   for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++) {




    VAR_9->base_address[VAR_18] = FUNC_4(VAR_9->base_address[VAR_18]);
    FUNC_0("\t0x%08x\n", VAR_9->base_address[VAR_18]);
   }

   for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
    if (VAR_3[VAR_15] == FUNC_3(VAR_9->hw_id)) {
     FUNC_2("set register base offset for %s\n",
       VAR_4[FUNC_3(VAR_9->hw_id)]);
     VAR_5->reg_offset[VAR_15][VAR_9->number_instance] =
      VAR_9->base_address;
    }

   }

   VAR_11 += sizeof(*VAR_9) + 4 * (VAR_9->num_base_address - 1);
  }
 }

 return 0;
}
