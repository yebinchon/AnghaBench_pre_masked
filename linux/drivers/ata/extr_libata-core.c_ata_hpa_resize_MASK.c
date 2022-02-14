
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {int flags; } ;
struct ata_eh_context {TYPE_2__ i; } ;
struct ata_device {int flags; scalar_t__ class; int horkage; int id; scalar_t__ n_native_sectors; TYPE_1__* link; } ;
struct TYPE_3__ {struct ata_eh_context eh_context; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ata_device*,char*) ;
 int FUNC_1 (struct ata_device*,char*,unsigned long long,unsigned long long,...) ;
 int FUNC_2 (struct ata_device*,int ) ;
 int FUNC_3 (struct ata_device*,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (struct ata_device*,scalar_t__*) ;
 int FUNC_8 (struct ata_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct ata_device *VAR_7)
{
 struct ata_eh_context *VAR_8 = &VAR_7->link->eh_context;
 int VAR_9 = VAR_8->i.flags & VAR_3;
 bool VAR_10 = VAR_6 || VAR_7->flags & VAR_2;
 u64 VAR_11 = FUNC_6(VAR_7->id);
 u64 VAR_12;
 int VAR_13;


 if ((VAR_7->class != VAR_0 && VAR_7->class != VAR_1) ||
     !FUNC_4(VAR_7->id) || !FUNC_5(VAR_7->id) ||
     (VAR_7->horkage & VAR_4))
  return 0;


 VAR_13 = FUNC_7(VAR_7, &VAR_12);
 if (VAR_13) {



  if (VAR_13 == -VAR_5 || !VAR_10) {
   FUNC_3(VAR_7,
         "HPA support seems broken, skipping HPA handling\n");
   VAR_7->horkage |= VAR_4;


   if (VAR_13 == -VAR_5)
    VAR_13 = 0;
  }

  return VAR_13;
 }
 VAR_7->n_native_sectors = VAR_12;


 if (VAR_12 <= VAR_11 || !VAR_10) {
  if (!VAR_9 || VAR_12 == VAR_11)
   return 0;

  if (VAR_12 > VAR_11)
   FUNC_1(VAR_7,
    "HPA detected: current %llu, native %llu\n",
    (unsigned long long)VAR_11,
    (unsigned long long)VAR_12);
  else if (VAR_12 < VAR_11)
   FUNC_3(VAR_7,
    "native sectors (%llu) is smaller than sectors (%llu)\n",
    (unsigned long long)VAR_12,
    (unsigned long long)VAR_11);
  return 0;
 }


 VAR_13 = FUNC_8(VAR_7, VAR_12);
 if (VAR_13 == -VAR_5) {

  FUNC_3(VAR_7,
        "device aborted resize (%llu -> %llu), skipping HPA handling\n",
        (unsigned long long)VAR_11,
        (unsigned long long)VAR_12);
  VAR_7->horkage |= VAR_4;
  return 0;
 } else if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_2(VAR_7, 0);
 if (VAR_13) {
  FUNC_0(VAR_7,
       "failed to re-read IDENTIFY data after HPA resizing\n");
  return VAR_13;
 }

 if (VAR_9) {
  u64 VAR_14 = FUNC_6(VAR_7->id);
  FUNC_1(VAR_7,
   "HPA unlocked: %llu -> %llu, native %llu\n",
   (unsigned long long)VAR_11,
   (unsigned long long)VAR_14,
   (unsigned long long)VAR_12);
 }

 return 0;
}
