
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {int dummy; } ;
typedef int kernel_load_addr ;
typedef int fdt_load_addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kimage*,char*,...) ;
 int FUNC_1 (unsigned int*) ;
 unsigned int* FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned int*,void const*,int) ;

int FUNC_4(struct kimage *VAR_3, const void *VAR_4,
      const void *VAR_5, unsigned long VAR_6,
      unsigned long VAR_7)
{
 unsigned int *VAR_8, VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_8)
  return -VAR_0;


 VAR_10 = FUNC_0(VAR_3, "purgatory_start",
          VAR_8, VAR_2,
          1);
 if (VAR_10) {
  FUNC_1(VAR_8);
  return VAR_10;
 }

 VAR_9 = VAR_8[0];
 FUNC_3(VAR_8, VAR_4, VAR_2);
 VAR_8[0] = VAR_9;
 VAR_10 = FUNC_0(VAR_3, "purgatory_start",
          VAR_8, VAR_2,
          0);
 FUNC_1(VAR_8);

 VAR_10 = FUNC_0(VAR_3, "kernel", &VAR_6,
          sizeof(VAR_6), 0);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_0(VAR_3, "dt_offset", &VAR_7,
          sizeof(VAR_7), 0);
 if (VAR_10)
  return VAR_10;

 return 0;
}
