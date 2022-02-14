
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ino_bucket {unsigned int __irq; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,unsigned long) ;
 unsigned long FUNC_2 (int ,unsigned int,unsigned long*) ;

__attribute__((used)) static unsigned int FUNC_3(u32 VAR_0, unsigned int VAR_1)
{
 unsigned long VAR_2, VAR_3;
 struct ino_bucket *VAR_4;
 unsigned int VAR_5 = 0U;

 VAR_2 = FUNC_2(VAR_0, VAR_1, &VAR_3);
 if (VAR_2) {
  FUNC_1("HV get cookie failed hv_err = %ld\n", VAR_2);
  goto out;
 }

 if (VAR_3 & ((1UL << 63UL))) {
  VAR_3 = ~VAR_3;
  VAR_4 = (struct ino_bucket *) FUNC_0(VAR_3);
  VAR_5 = VAR_4->__irq;
 }
out:
 return VAR_5;
}
