
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int sig; } ;
struct ucode_cpu_info {TYPE_1__ cpu_sig; } ;
struct cpio_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 struct cpio_data FUNC_2 (char const*,int) ;
 int FUNC_3 (struct cpio_data*,int ) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_3, struct cpio_data *VAR_4)
{
 struct ucode_cpu_info *VAR_5;
 struct cpio_data VAR_6;
 const char *VAR_7;
 bool VAR_8;

 if (FUNC_0(VAR_0)) {
  VAR_5 = (struct ucode_cpu_info *)FUNC_1(VAR_1);
  VAR_7 = (const char *)FUNC_1(VAR_2);
  VAR_8 = 1;
 } else {
  VAR_5 = VAR_1;
  VAR_7 = VAR_2;
  VAR_8 = 0;
 }

 if (!FUNC_3(&VAR_6, FUNC_4(VAR_3)))
  VAR_6 = FUNC_2(VAR_7, VAR_8);


 VAR_5->cpu_sig.sig = VAR_3;

 *VAR_4 = VAR_6;
}
