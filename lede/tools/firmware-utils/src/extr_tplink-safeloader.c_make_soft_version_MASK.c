
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; } ;
struct soft_version {int pad1; int pad2; void* rev; void* day; void* month; void* year_lo; void* year_hi; scalar_t__ version_patch; scalar_t__ version_minor; scalar_t__ version_major; scalar_t__ zero; void* magic; } ;
struct image_partition_entry {scalar_t__ data; } ;


 struct image_partition_entry FUNC_0 (char*,int) ;
 void* FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int,int ,char*) ;
 void* FUNC_3 (int) ;
 struct tm* FUNC_4 (scalar_t__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__*) ;

__attribute__((used)) static struct image_partition_entry FUNC_6(uint32_t VAR_2) {
 struct image_partition_entry VAR_3 = FUNC_0("soft-version", sizeof(struct soft_version));
 struct soft_version *VAR_4 = (struct soft_version *)VAR_3.data;

 time_t VAR_5;

 if (VAR_1 != -1)
  VAR_5 = VAR_1;
 else if (FUNC_5(&VAR_5) == (time_t)(-1))
  FUNC_2(1, VAR_0, "time");

 struct tm *VAR_6 = FUNC_4(&VAR_5);

 VAR_4->magic = FUNC_3(0x0000000c);
 VAR_4->zero = 0;
 VAR_4->pad1 = 0xff;

 VAR_4->version_major = 0;
 VAR_4->version_minor = 0;
 VAR_4->version_patch = 0;

 VAR_4->year_hi = FUNC_1((1900+VAR_6->tm_year)/100);
 VAR_4->year_lo = FUNC_1(VAR_6->tm_year%100);
 VAR_4->month = FUNC_1(VAR_6->tm_mon+1);
 VAR_4->day = FUNC_1(VAR_6->tm_mday);
 VAR_4->rev = FUNC_3(VAR_2);

 VAR_4->pad2 = 0xff;

 return VAR_3;
}
