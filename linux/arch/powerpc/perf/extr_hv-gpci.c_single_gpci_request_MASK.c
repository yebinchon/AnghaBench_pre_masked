
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u64 ;
typedef size_t u32 ;
typedef int u16 ;
struct TYPE_2__ {size_t counter_info_version_in; int secondary_index; void* starting_index; void* counter_request; } ;
struct hv_gpci_request_buffer {size_t* bytes; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct hv_gpci_request_buffer*,int ,int ) ;
 unsigned long FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*,unsigned long) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct hv_gpci_request_buffer*) ;

__attribute__((used)) static unsigned long FUNC_8(u32 VAR_3, u32 VAR_4,
  u16 VAR_5, u8 VAR_6, u32 VAR_7, u8 VAR_8,
  u64 *VAR_9)
{
 unsigned long VAR_10;
 size_t VAR_11;
 u64 VAR_12;
 struct hv_gpci_request_buffer *VAR_13;

 VAR_13 = (void *)FUNC_2(VAR_2);
 FUNC_3(VAR_13, 0, VAR_0);

 VAR_13->params.counter_request = FUNC_1(VAR_3);
 VAR_13->params.starting_index = FUNC_1(VAR_4);
 VAR_13->params.secondary_index = FUNC_0(VAR_5);
 VAR_13->params.counter_info_version_in = VAR_6;

 VAR_10 = FUNC_4(VAR_1,
   FUNC_7(VAR_13), VAR_0);
 if (VAR_10) {
  FUNC_5("hcall failed: 0x%lx\n", VAR_10);
  goto out;
 }





 VAR_12 = 0;
 for (VAR_11 = VAR_7; VAR_11 < VAR_7 + VAR_8; VAR_11++)
  VAR_12 |= VAR_13->bytes[VAR_11] << (VAR_11 - VAR_7);

 *VAR_9 = VAR_12;
out:
 FUNC_6(VAR_2);
 return VAR_10;
}
