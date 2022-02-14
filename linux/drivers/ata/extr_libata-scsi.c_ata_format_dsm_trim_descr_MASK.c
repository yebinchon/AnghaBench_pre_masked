
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct scsi_device {size_t sector_size; } ;
struct scsi_cmnd {struct scsi_device* device; } ;
typedef int __le64 ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,size_t) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 size_t FUNC_5 (int ,int ,int *,size_t) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static size_t FUNC_8(struct scsi_cmnd *VAR_3, u32 VAR_4,
     u64 VAR_5, u32 VAR_6)
{
 struct scsi_device *VAR_7 = VAR_3->device;
 size_t VAR_8 = VAR_7->sector_size;
 size_t VAR_9;
 __le64 *VAR_10;
 u32 VAR_11 = 0;
 unsigned long VAR_12;

 FUNC_0(VAR_8 > VAR_0);

 if (VAR_8 > VAR_0)
  VAR_8 = VAR_0;

 FUNC_6(&VAR_2, VAR_12);
 VAR_10 = ((void *)VAR_1);
 FUNC_2(VAR_10, 0, VAR_8);
 while (VAR_11 < VAR_4) {
  u64 VAR_13 = VAR_5 |
   ((u64)(VAR_6 > 0xffff ? 0xffff : VAR_6) << 48);
  VAR_10[VAR_11++] = FUNC_1(VAR_13);
  if (VAR_6 <= 0xffff)
   break;
  VAR_6 -= 0xffff;
  VAR_5 += 0xffff;
 }
 VAR_9 = FUNC_5(FUNC_4(VAR_3), FUNC_3(VAR_3), VAR_10, VAR_8);
 FUNC_7(&VAR_2, VAR_12);

 return VAR_9;
}
