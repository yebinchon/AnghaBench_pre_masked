
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ rev; } ;
struct ucode_cpu_info {TYPE_2__ cpu_sig; struct microcode_intel* mc; } ;
struct TYPE_3__ {scalar_t__ rev; int date; } ;
struct microcode_intel {TYPE_1__ hdr; scalar_t__ bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct ucode_cpu_info*) ;
 int FUNC_4 (struct ucode_cpu_info*,int ) ;

__attribute__((used)) static int FUNC_5(struct ucode_cpu_info *VAR_2, bool VAR_3)
{
 struct microcode_intel *VAR_4;
 u32 VAR_5;

 VAR_4 = VAR_2->mc;
 if (!VAR_4)
  return 0;






 VAR_5 = FUNC_0();
 if (VAR_5 >= VAR_4->hdr.rev) {
  VAR_2->cpu_sig.rev = VAR_5;
  return VAR_1;
 }





 FUNC_1();


 FUNC_2(VAR_0, (unsigned long)VAR_4->bits);

 VAR_5 = FUNC_0();
 if (VAR_5 != VAR_4->hdr.rev)
  return -1;

 VAR_2->cpu_sig.rev = VAR_5;

 if (VAR_3)
  FUNC_3(VAR_2);
 else
  FUNC_4(VAR_2, VAR_4->hdr.date);

 return 0;
}
