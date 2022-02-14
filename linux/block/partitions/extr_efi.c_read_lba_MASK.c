
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct parsed_partitions {struct block_device* bdev; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;
typedef int Sector ;


 int FUNC_0 (struct block_device*) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (int ) ;
 unsigned char* FUNC_4 (struct parsed_partitions*,int ,int *) ;

__attribute__((used)) static size_t FUNC_5(struct parsed_partitions *VAR_0,
         u64 VAR_1, u8 *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = 0;
 struct block_device *VAR_5 = VAR_0->bdev;
 sector_t VAR_6 = VAR_1 * (FUNC_0(VAR_5) / 512);

 if (!VAR_2 || VAR_1 > FUNC_1(VAR_5))
                return 0;

 while (VAR_3) {
  int VAR_7 = 512;
  Sector VAR_8;
  unsigned char *VAR_9 = FUNC_4(VAR_0, VAR_6++, &VAR_8);
  if (!VAR_9)
   break;
  if (VAR_7 > VAR_3)
   VAR_7 = VAR_3;
  FUNC_2(VAR_2, VAR_9, VAR_7);
  FUNC_3(VAR_8);
  VAR_2 += VAR_7;
  VAR_4 +=VAR_7;
  VAR_3 -= VAR_7;
 }
 return VAR_4;
}
