
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct TYPE_2__ {void* write_bandwidth; void* read_bandwidth; void* write_latency; void* read_latency; } ;
struct memory_target {TYPE_1__ hmem_attrs; } ;
__attribute__((used)) static void FUNC_0(struct memory_target *VAR_0,
          u8 VAR_1, u32 VAR_2)
{
 switch (VAR_1) {
 case 132:
  VAR_0->hmem_attrs.read_latency = VAR_2;
  VAR_0->hmem_attrs.write_latency = VAR_2;
  break;
 case 130:
  VAR_0->hmem_attrs.read_latency = VAR_2;
  break;
 case 128:
  VAR_0->hmem_attrs.write_latency = VAR_2;
  break;
 case 133:
  VAR_0->hmem_attrs.read_bandwidth = VAR_2;
  VAR_0->hmem_attrs.write_bandwidth = VAR_2;
  break;
 case 131:
  VAR_0->hmem_attrs.read_bandwidth = VAR_2;
  break;
 case 129:
  VAR_0->hmem_attrs.write_bandwidth = VAR_2;
  break;
 default:
  break;
 }
}
