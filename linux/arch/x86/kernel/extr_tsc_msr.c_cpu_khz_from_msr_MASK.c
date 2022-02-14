
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct x86_cpu_id {scalar_t__ driver_data; } ;
struct freq_desc {int* freqs; scalar_t__ msr_plat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 struct x86_cpu_id* FUNC_2 (int ) ;

unsigned long FUNC_3(void)
{
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 const struct freq_desc *VAR_12;
 const struct x86_cpu_id *VAR_13;
 unsigned long VAR_14;

 VAR_13 = FUNC_2(VAR_7);
 if (!VAR_13)
  return 0;

 VAR_12 = (struct freq_desc *)VAR_13->driver_data;
 if (VAR_12->msr_plat) {
  FUNC_0(VAR_3, VAR_8, VAR_9);
  VAR_10 = (VAR_8 >> 8) & 0xff;
 } else {
  FUNC_0(VAR_2, VAR_8, VAR_9);
  VAR_10 = (VAR_9 >> 8) & 0x1f;
 }


 FUNC_0(VAR_1, VAR_8, VAR_9);


 VAR_11 = VAR_12->freqs[VAR_8 & 0x7];


 VAR_14 = VAR_11 * VAR_10;
 FUNC_1(VAR_4);
 FUNC_1(VAR_5);

 return VAR_14;
}
