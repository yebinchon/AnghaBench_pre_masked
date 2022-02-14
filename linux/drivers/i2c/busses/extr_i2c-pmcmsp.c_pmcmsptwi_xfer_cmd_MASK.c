
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pmcmsptwi_data {int lock; scalar_t__ iobase; } ;
struct pmcmsptwi_cmd {int addr; scalar_t__ type; int write_len; int read_len; int* read_data; scalar_t__ write_data; } ;
typedef enum pmcmsptwi_xfer_result { ____Placeholder_pmcmsptwi_xfer_result } pmcmsptwi_xfer_result ;
typedef int __be64 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_8 ;
 int FUNC_4 (struct pmcmsptwi_cmd*) ;
 int FUNC_5 (int ,struct pmcmsptwi_data*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static enum pmcmsptwi_xfer_result FUNC_8(
   struct pmcmsptwi_cmd *VAR_9,
   struct pmcmsptwi_data *VAR_10)
{
 enum pmcmsptwi_xfer_result VAR_11;

 FUNC_2(&VAR_10->lock);
 FUNC_1(&VAR_8.dev,
  "Setting address to 0x%04x\n", VAR_9->addr);
 FUNC_7(VAR_9->addr, VAR_10->iobase + VAR_1);

 if (VAR_9->type == VAR_3 ||
     VAR_9->type == VAR_4) {
  u64 VAR_12 = FUNC_0((__be64 *)VAR_9->write_data);
  VAR_12 >>= (VAR_0 - VAR_9->write_len) * 8;
  FUNC_1(&VAR_8.dev, "Writing 0x%016llx\n", VAR_12);
  FUNC_7(VAR_12 & 0x00000000ffffffffLL,
    VAR_10->iobase + VAR_5);
  if (VAR_9->write_len > 4)
   FUNC_7(VAR_12 >> 32,
    VAR_10->iobase + VAR_6);
 }

 VAR_11 = FUNC_5(FUNC_4(VAR_9), VAR_10);
 if (VAR_11 != VAR_7)
  goto xfer_err;

 if (VAR_9->type == VAR_2 ||
     VAR_9->type == VAR_4) {
  int VAR_13;
  u64 VAR_14 = ~(0xffffffffffffffffLL << (VAR_9->read_len * 8));
  u64 VAR_15 = (u64)FUNC_6(VAR_10->iobase +
     VAR_5);
  if (VAR_9->read_len > 4)
   VAR_15 |= (u64)FUNC_6(VAR_10->iobase +
     VAR_6) << 32;
  VAR_15 &= VAR_14;
  FUNC_1(&VAR_8.dev, "Read 0x%016llx\n", VAR_15);

  for (VAR_13 = 0; VAR_13 < VAR_9->read_len; VAR_13++)
   VAR_9->read_data[VAR_13] = VAR_15 >> VAR_13;
 }

xfer_err:
 FUNC_3(&VAR_10->lock);

 return VAR_11;
}
