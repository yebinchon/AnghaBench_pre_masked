
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct ata_taskfile {int dummy; } ;
struct ata_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ata_device*,struct ata_taskfile*,int const*,int,struct scatterlist*,unsigned int,unsigned long) ;
 int FUNC_2 (struct scatterlist*,void*,unsigned int) ;

unsigned FUNC_3(struct ata_device *VAR_1,
      struct ata_taskfile *VAR_2, const u8 *VAR_3,
      int VAR_4, void *VAR_5, unsigned int VAR_6,
      unsigned long VAR_7)
{
 struct scatterlist *VAR_8 = ((void*)0), VAR_9;
 unsigned int VAR_10 = 0;

 if (VAR_4 != VAR_0) {
  FUNC_0(!VAR_5);
  FUNC_2(&VAR_9, VAR_5, VAR_6);
  VAR_8 = &VAR_9;
  VAR_10++;
 }

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_8, VAR_10,
        VAR_7);
}
