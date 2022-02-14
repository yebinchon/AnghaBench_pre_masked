
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct parsed_partitions {int bdev; } ;
typedef int Sector ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int ) ;
 unsigned char* FUNC_3 (struct parsed_partitions*,int ,int *) ;

__attribute__((used)) static size_t FUNC_4(struct parsed_partitions *VAR_0, u64 VAR_1, u8 *VAR_2,
   size_t VAR_3)
{
 size_t VAR_4 = 0;

 if (!VAR_2 || VAR_1 + VAR_3 / 512 > FUNC_0(VAR_0->bdev))
  return 0;

 while (VAR_3) {
  int VAR_5 = 512;
  Sector VAR_6;
  unsigned char *VAR_7 = FUNC_3(VAR_0, VAR_1++, &VAR_6);
  if (!VAR_7)
   break;
  if (VAR_5 > VAR_3)
   VAR_5 = VAR_3;
  FUNC_1(VAR_2, VAR_7, VAR_5);
  FUNC_2(VAR_6);
  VAR_2 += VAR_5;
  VAR_4 += VAR_5;
  VAR_3 -= VAR_5;
 }
 return VAR_4;
}
